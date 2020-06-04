/*
 * DIO_Cfg.c
 *
 * Created: 02/06/2020 09:59:17 م
 *  Author: dell
 */ 
#include "DIO_Cfg.h"
#include "STD_Types.h"
#include "DIO_HW.h"
#include "DIO_Types.h"
#include "BitMath.h"
const PIN_Type Cfg[PinCount]={
	{output,low},//A0
	{output,low},//A1
	{output,low},//A2 Relay
	{output,low},//A3 Buzzer
	{output,low},//A4
	{output,low},//A5
	{output,low},//A6
	{output,low},//A7
	{input,low},//B0 Button0
	{output,low},//B1
	{output,low},//B2
	{output,low},//B3
	{input,low},//B4 Button1
	{output,low},//B5
	{output,low},//B6
	{output,low},//B7
	{output,low},//C0
	{output,low},//C1
	{output,low},//C2 Led0
	{input,high},//C3  C0
	{input,high},//C4  C1
	{input,high},//C5  C2
	{input,high},//C6  C3
	{output,low},//C7 Led1
	{output,low},//D0
	{output,low},//D1
	{input,low},//D2 Button2
	{output,low},//D3 Led2
	{output,low},//D4
	{output,low},//D5
	{output,low},//D6
	{output,low},//D7
};
void DIO_Init(){
	uint16 count;
	for(count=0;count<PinCount;count++){
		DIO_PortType port= count/8;
		uint8 pos=count%8;
		switch (port){
			case PORTA:
			if(Cfg[count].Dir==output){Set(DDRA_REG,pos);}
			else {Clear(DDRA_REG,pos);}
			if(Cfg[count].lev==high){Set(PORTA_REG,pos);}
			else{Clear(PORTA_REG,pos);}
			break;
			case PORTB:
			if(Cfg[count].Dir==output){Set(DDRB_REG,pos);}
			else {Clear(DDRB_REG,pos);}
			if(Cfg[count].lev==high){Set(PORTB_REG,pos);}
			else{Clear(PORTB_REG,pos);}
			break;
			case PORTC:
			if(Cfg[count].Dir==output){Set(DDRC_REG,pos);}
			else {Clear(DDRC_REG,pos);}
			if(Cfg[count].lev==high){Set(PORTC_REG,pos);}
			else{Clear(PORTC_REG,pos);}
			break;
			case PORTD:
			if(Cfg[count].Dir==output){Set(DDRD_REG,pos);}
			else {Clear(DDRD_REG,pos);}
			if(Cfg[count].lev==high){Set(PORTD_REG,pos);}
			else{Clear(PORTD_REG,pos);}
			break;
		}
	}
}