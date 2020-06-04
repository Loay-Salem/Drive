/*
 * drive2.c
 *
 * Created: 02/06/2020 09:56:08 م
 * Author : dell
 */ 

//#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include "DIO_Types.h"
#include "DIO.h"
#include "DIO_Cfg.h"
#include "STD_Types.h"
#include "LCD.h"
#include "KeyPad.h"

int main(void)
{
    /* Replace with your application code */
	DIO_Init();
	LCD_Init();	
	LCD_STR("Start");
	while (1) 
    {
		if(GetKeyPressed()=='1'){
			_delay_ms(20);
			LCD_STR("One");
		}
		if (GetKeyPressed()=='2')
		{
			_delay_ms(20);
			LCD_Clear();
			DIO_WriteChannel(DIO_Channel_C7,high);
			LCD_STR("Two");
			_delay_ms(50);
		}
		if (GetKeyPressed()=='O'){
			_delay_ms(20);
			LCD_Clear();
			DIO_WriteChannel(DIO_Channel_C2,high);
			//LCD_Char('F');
			_delay_ms(50);
			DIO_WriteChannel(DIO_Channel_C2,low);
		}
		if(DIO_ReadChannel(DIO_Channel_B0)==1){
			_delay_ms(20);
			DIO_WriteChannel(DIO_Channel_C2,high);
			_delay_ms(100);
			DIO_WriteChannel(DIO_Channel_C2,low);
			_delay_ms(100);
			LCD_Clear();
			LCD_STR("Button Zero");
		}
		if(DIO_ReadChannel(DIO_Channel_B4)==1){
			_delay_ms(20);
			DIO_WriteChannel(DIO_Channel_C7,high);
			_delay_ms(100);
			DIO_WriteChannel(DIO_Channel_C7,low);
			_delay_ms(100);
			LCD_Clear();
			LCD_STR("Button One");
		}
		if(DIO_ReadChannel(DIO_Channel_D2)==1){
			_delay_ms(20);
			DIO_WriteChannel(DIO_Channel_D3,high);
			_delay_ms(100);
			DIO_WriteChannel(DIO_Channel_D3,low);
			_delay_ms(100);
			LCD_Clear();
			LCD_STR("Button Two");
		}
    }
}

