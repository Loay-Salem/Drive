/*
 * KeyPad.c
 *
 * Created: 02/06/2020 10:15:47 م
 *  Author: dell
 */ 
#include "KeyPad_Cfg.h"

#include "STD_Types.h"
#include "DIO.h"
#include "KeyPad.h"
uint16 Key_Pressed=Key_Release;
static void CheckCol(uint8);
uint8 GetKeyPressed(){
	DIO_WriteChannel(Row0,low);
	DIO_WriteChannel(Row1,high);
	DIO_WriteChannel(Row2,high);
	DIO_WriteChannel(Row3,high);
	CheckCol(0);
	DIO_WriteChannel(Row0,high);
	DIO_WriteChannel(Row1,low);
	DIO_WriteChannel(Row2,high);
	DIO_WriteChannel(Row3,high);
	CheckCol(1);
	DIO_WriteChannel(Row0,high);
	DIO_WriteChannel(Row1,high);
	DIO_WriteChannel(Row2,low);
	DIO_WriteChannel(Row3,high);
	CheckCol(2);
	DIO_WriteChannel(Row0,high);
	DIO_WriteChannel(Row1,high);
	DIO_WriteChannel(Row2,high);
	DIO_WriteChannel(Row3,low);
	CheckCol(3);
	return Key_Pressed==Key_Release? Key_Release: Key_Map[Key_Pressed];
}
void CheckCol(uint8 row){
	if (DIO_ReadChannel(Col0)==low){
		Key_Pressed=row*ColNum+0;
	}
	if (DIO_ReadChannel(Col1)==low){
		Key_Pressed=row*ColNum+1;
	}
	if (DIO_ReadChannel(Col2)==low){
		Key_Pressed=row*ColNum+2;
	}
	if (DIO_ReadChannel(Col3)==low){
		Key_Pressed=row*ColNum+3;
	}
}