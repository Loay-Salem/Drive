/*
 * BitMath.h
 *
 * Created: 02/06/2020 09:57:04 م
 *  Author: dell
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_
#define Clear(var,bit)    var&=~(1<<bit)
#define Set(var,bit)      var|=(1<<bit)
#define Toggle(var,bit)   var^=(1<<bit)
#define Get(var,bit)      ((var>>bit)&1)


#endif /* BITMATH_H_ */