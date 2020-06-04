/*
 * DIO_HW.h
 *
 * Created: 02/06/2020 10:00:42 م
 *  Author: dell
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_
#include "STD_TYPES.h"
#define PORTA_REG (*(volatile uint8 *)0x3b)
#define DDRA_REG (*(volatile uint8 *)0x3a)
#define PINA_REG (*(const volatile uint8 *)0x39)
#define PORTB_REG (*(volatile uint8 *)0x38)
#define DDRB_REG (*(volatile uint8 *)0x37)
#define PINB_REG (*(const volatile uint8 *)0x36)
#define PORTC_REG (*(volatile uint8 *)0x35)
#define DDRC_REG (*(volatile uint8 *)0x34)
#define PINC_REG (*(const volatile uint8 *)0x33)
#define PORTD_REG (*(volatile uint8 *)0x32)
#define DDRD_REG (*(volatile uint8 *)0x31)
#define PIND_REG (*(const volatile uint8 *)0x30)



#endif /* DIO_HW_H_ */