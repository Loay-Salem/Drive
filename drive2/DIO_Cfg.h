/*
 * DIO_Cfg.h
 *
 * Created: 02/06/2020 10:00:00 م
 *  Author: dell
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_
#include "STD_Types.h"
#include "DIO_Types.h"
typedef struct {
	DIO_Dir Dir;
	STD_Level lev;
}PIN_Type;
#define PinCount 32
extern const PIN_Type Cfg[PinCount];
void DIO_Init();





#endif /* DIO_CFG_H_ */