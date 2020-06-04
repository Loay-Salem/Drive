/*
 * KeyPad.h
 *
 * Created: 02/06/2020 10:15:31 م
 *  Author: dell
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "DIO_Types.h"
#include "STD_Types.h"
#define Row0 DIO_Channel_B5
#define Row1 DIO_Channel_B6
#define Row2 DIO_Channel_B7
#define Row3 DIO_Channel_A0
#define Col0 DIO_Channel_C3
#define Col1 DIO_Channel_C4
#define Col2 DIO_Channel_C5
#define Col3 DIO_Channel_C6
uint8 GetKeyPressed();
#define ColNum 4

#endif /* KEYPAD_H_ */