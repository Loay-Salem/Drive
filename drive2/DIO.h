/*
 * DIO.h
 *
 * Created: 02/06/2020 09:58:42 م
 *  Author: dell
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "STD_Types.h"
#include "DIO_Types.h"
void DIO_WriteChannel(DIO_ChannelType ChannelID,STD_Level level);
STD_Level DIO_ReadChannel (DIO_ChannelType ChannelID);
void DIO_WritePort (DIO_PortType port,uint8 Cmd);



#endif /* DIO_H_ */