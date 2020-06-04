/*
 * LCD.h
 *
 * Created: 02/06/2020 10:03:27 م
 *  Author: dell
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "DIO_HW.h"
#define RS 1
#define RW 2
#define E 3
#define LCD_PORT PORTA_REG
#define LCD_CTRL PORTB_REG
void LCD_Cmd(uint8 Cmd);
void LCD_Init();
void LCD_Char(uint8 data);
void LCD_STR(char * Str);
void LCD_Clear();
void LCD_OFF(STD_Level cmd);




#endif /* LCD_H_ */