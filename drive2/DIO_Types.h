/*
 * DIO_Types.h
 *
 * Created: 02/06/2020 10:01:38 م
 *  Author: dell
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_
typedef enum{
	DIO_Channel_A0,
	DIO_Channel_A1,
	DIO_Channel_A2,
	DIO_Channel_A3,
	DIO_Channel_A4,
	DIO_Channel_A5,
	DIO_Channel_A6,
	DIO_Channel_A7,
	DIO_Channel_B0,
	DIO_Channel_B1,
	DIO_Channel_B2,
	DIO_Channel_B3,
	DIO_Channel_B4,
	DIO_Channel_B5,
	DIO_Channel_B6,
	DIO_Channel_B7,
	DIO_Channel_C0,
	DIO_Channel_C1,
	DIO_Channel_C2,
	DIO_Channel_C3,
	DIO_Channel_C4,
	DIO_Channel_C5,
	DIO_Channel_C6,
	DIO_Channel_C7,
	DIO_Channel_D0,
	DIO_Channel_D1,
	DIO_Channel_D2,
	DIO_Channel_D3,
	DIO_Channel_D4,
	DIO_Channel_D5,
	DIO_Channel_D6,
	DIO_Channel_D7,
}DIO_ChannelType;
typedef enum{
	PORTA,
	PORTB,
	PORTC,
	PORTD,
}DIO_PortType;
typedef enum{
	output,
	input,
}DIO_Dir;







#endif /* DIO_TYPES_H_ */