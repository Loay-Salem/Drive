/*
 * LCD.c
 *
 * Created: 02/06/2020 10:02:57 م
 *  Author: dell
 */ 
#include "LCD.h"
#include "STD_Types.h"
#define F_CPU 16000000
#include <util/delay.h>
#include "BitMath.h"
void LCD_Cmd(uint8 Cmd){
	LCD_PORT=(LCD_PORT&0x0f)|(Cmd&0xf0);
	Clear(LCD_CTRL,RS);
	Set(LCD_CTRL,E);
	_delay_ms(20);
	Clear(LCD_CTRL,E);
	_delay_ms(20);
	LCD_PORT=(LCD_PORT&0x0f)|(Cmd<<4);
	Set(LCD_CTRL,E);
	_delay_ms(50);
	Clear(LCD_CTRL,E);
	_delay_ms(20);
}
void LCD_Init(){
	_delay_ms(20);
	//Clear(LCD_CTRL,RW);
	LCD_Cmd(0x33);
	LCD_Cmd(0x32);
	LCD_Cmd(0x28);
	LCD_Cmd(0x0c);
	LCD_Cmd(0x06);
	LCD_Cmd(0x01);
	Clear(LCD_CTRL,RW);
}
void LCD_Char(uint8 data){
	LCD_PORT=(LCD_PORT&0x0f)|(data&0xf0);
	Set(LCD_CTRL,RS);
	//Clear(LCD_CTRL,RW);
	Set(LCD_CTRL,E);
	_delay_ms(20);
	Clear(LCD_CTRL,E);
	_delay_ms(20);
	LCD_PORT=(LCD_PORT&0x0f)|(data<<4);
	Set(LCD_CTRL,E);
	_delay_ms(50);
	Clear(LCD_CTRL,E);
	_delay_ms(20);
}
void LCD_STR(char * Str){
	uint16 count=0;
	while(Str[count]!='\0'){
		LCD_Char(Str[count]);
		count++;
	}
}
void LCD_Clear(){
	LCD_Cmd(0x01);
}
void LCD_OFF(STD_Level cmd){
	if(cmd==high){LCD_Cmd(0x0c);}
	else{LCD_Cmd(0x08);}
};