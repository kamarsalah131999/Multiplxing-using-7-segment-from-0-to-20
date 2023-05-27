/*
 * seven_segment.h
 *
 * Created: 17/09/2021 10:54:51 PM
 *  Author: kamar salah
 */ 


#ifndef SEVEN SEGMENT_H_
#define SEVEN SEGMENT_H_


/* function description:
intialize pin output
*/
void seven_seg_vinti (unsigned char port_name);

/*function description:
write value witch detrmine the segment is turn on
*/
void seven_seg_vwrite (unsigned char port_name , unsigned char value);


#endif /* SEVEN SEGMENT_H_ */