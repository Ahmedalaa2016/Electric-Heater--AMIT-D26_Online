/*
 * Heater.c
 *
 * Created: 4/26/2022 2:49:56 AM
 * Author : g_h_a
 */ 

#include <main.h>

uint8_t reading=0,heating=0,cooling=0;
uint8_t reading1=0;
uint8_t reading2=0;
uint8_t flag=0;
uint8_t setting=0;
fint32_t Temp[10];
uint8_t i=0;
fint32_t Average=0;
fint32_t sum=0;
uint8_t count=0;
uint8_t temprature=60;
fint32_t temp1;
uint16_t adc_read;
uint8_t Sev_Seg_flag;

int main(void)
{

	void task1(void);
	void task2(void);
	void task3(void);
	void task4(void);
	void task5(void);
	void task6(void);
	LED0_Initialize();
	LED1_Initialize();
	BTN0_Initialize();
	BTN1_Initialize();
	BTN2_Initialize();
	Relay_Initialize();
	Relay2_Initialize();
	ADC_Initialize();
	SEVENSEG_Initialize();

    /* Replace with your application code */
	TMU_vidInit();

	TMU_vidCreateTask(task1, 2, 5);
	TMU_vidCreateTask(task2, 3, 2);
	TMU_vidCreateTask(task3, 1, 0);
	TMU_vidCreateTask(task4, 5, 3);// supposed to be 50 tick , delay =1000mS  but proteus doesnt work accurately so set it lower
	TMU_vidCreateTask(task5, 2, 4);
	TMU_vidCreateTask(task6, 10, 1);// supposed to be 50 tick , delay =1000mS  but proteus doesnt work accurately so set it lower
	TMU_vidStartScheduler();


}

void task1(void)
{
	reading=BTN0_Read();
	
	if(reading==BTN0_PRESSED && flag==0){
		eeprom_read_byte (&temprature);
		
		if(temprature<35 || temprature>75 ){
			temprature =60;
		}
		SEVENSEG_Initialize();
		LED1_On();
		setting =0;
		flag=1;
	}
	else if (reading==BTN0_PRESSED && flag==1)
	{
		eeprom_write_byte (0x00, temprature);
		setting =0;
		LED1_Off();
		LED0_Off();
		SEVENSEG_OFF();
		Relay_Off();
		Relay2_Off();
		flag=0;
	}
	
}
//Temperature Sensing using LM35

void task2(void){
	if(flag == 1){
		
				sum = 0;

		for (i=0;i<10;i++)
		{
			adc_read = ADC_Read(ADC1)*5;
			temp1 = ((fint32_t)adc_read/1023);
			temp1 = (temp1*100);
			Temp[i]= temp1 ;
			sum = sum + Temp[i];
			
			
		}
		
		Average=sum/10;
		if(setting ==0){
			SEVENSEG_Display((uint8_t)Average);
		}
		else{
			SEVENSEG_Display(temprature);
		}
		
	}
}

//Temperature setting 

void task3(void){
	if(flag == 1){
		
		
		reading1=BTN1_Read();
		reading2=BTN2_Read();

		if ((reading1==BTN1_PRESSED || reading2==BTN2_PRESSED) && setting == 0)
		{
			
			setting=1;
			
		}
		if(setting == 1 & count<5)
		{
			
			if(reading1 == BTN1_PRESSED)
			{
				
		
				if (temprature < 75)
				{
					temprature=temprature+5;
					
			
				}
				SEVENSEG_Display(temprature);
				count =0;
		
			}
			else if(reading2==BTN2_PRESSED)
			{
				if(temprature > 35)
				{
					temprature=temprature-5;
					
				}
				SEVENSEG_Display(temprature);
				count =0;
			}
			SEVENSEG_Display(temprature);
		
		}
		if(count==5){
			setting =0;
			count =0;
		}
	}
}
void task4(void){
	if(flag==1){
		if(setting ==1){
			count++;
			if(Sev_Seg_flag == 0){
				SEVENSEG_OFF();
				Sev_Seg_flag = 1;
			}
			else{
				SEVENSEG_Initialize();
				SEVENSEG_Display(temprature);
			}
			
			
		}
		
	}
	
}
void task5(void){
	if(flag==1){
		if(Average<temprature-5){
			heating = 1;
			cooling =0;
			Relay_On();
			Relay2_Off();
		}
		else if(Average>temprature+5){
			heating = 0;
			cooling =1;
			Relay2_On();
			Relay_Off();
		}
		else{
			heating = 0;
			cooling =0;
			Relay2_Off();
			Relay_Off();
		}
	}
	
}
void task6(void){
	if(flag==1){
		if(cooling ==1){
			LED0_On();
		}
		else if(heating ==1){
			LED0_toggle();
		}
	}
	
}