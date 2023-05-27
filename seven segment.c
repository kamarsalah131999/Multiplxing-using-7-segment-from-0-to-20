/*
 * seven_segment.c
 *
 * Created: 17/09/2021 10:54:29 PM
 *  Author: kamar salah
 */ 

#include "DIO drivers.h"

void seven_seg_vinti (unsigned char port_name)
{
	DIO_vset_port_dir(port_name,0xff);           // all pin in given port is output
}

void seven_seg_vwrite (unsigned char port_name , unsigned char value)
{
	unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	DIO_vwrite_port(port_name,arr[value]);
}