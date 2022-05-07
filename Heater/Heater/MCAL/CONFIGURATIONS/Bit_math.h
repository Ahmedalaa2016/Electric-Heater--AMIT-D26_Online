/*
 * Bit_math.h
 *
 * Created: 3/14/2022 11:41:17 PM
 *  Author: g_h_a
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) REG|=(1<<BIT)
#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)
#define TGL_BIT(REG,BIT) REG^=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT)&1)



#endif /* BIT_MATH_H_ */