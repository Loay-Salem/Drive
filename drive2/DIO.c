/*
 * DIO.c
 *
 * Created: 02/06/2020 09:57:54 م
 *  Author: dell
 */ 
#include "DIO_Types.h"
#include "BitMath.h"
#include "STD_Types.h"
#include "DIO_HW.h"
void DIO_WriteChannel(DIO_ChannelType ChannelID,STD_Level level){
	DIO_PortType portx = ChannelID/8;
	uint8 pos = ChannelID%8;
	switch (portx){
		case PORTA:
		if(level==high){Set(PORTA_REG,pos);}
		else {Clear(PORTA_REG,pos);}
		break;
		case PORTB:
		if(level==high){Set(PORTB_REG,pos);}
		else {Clear(PORTB_REG,pos);}
		break;
		case PORTC:
		if(level==high){Set(PORTC_REG,pos);}
		else {Clear(PORTC_REG,pos);}
		break;
		case PORTD:
		if(level==high){Set(PORTD_REG,pos);}
		else {Clear(PORTD_REG,pos);}
		break;
	}
}
STD_Level DIO_ReadChannel (DIO_ChannelType ChannelID){
	DIO_PortType portx = ChannelID/8;
	STD_Level ret=low;
	uint8 pos =ChannelID%8;
	switch(portx){
		case PORTA:
		ret=Get(PINA_REG,pos);
		break;
		case PORTB:
		ret=Get(PINB_REG,pos);
		break;
		case PORTC:
		ret=Get(PINC_REG,pos);
		break;
		case PORTD:
		ret=Get(PIND_REG,pos);
		break;
	}
	return ret;
}
void DIO_WritePort (DIO_PortType port,uint8 Cmd){
	switch (port){
		case PORTA:
		PORTA_REG=Cmd;
		break;
		case PORTB:
		PORTB_REG=Cmd;
		break;
		case PORTC:
		PORTC_REG=Cmd;
		break;
		case PORTD:
		PORTD_REG=Cmd;
		break;
	}
}