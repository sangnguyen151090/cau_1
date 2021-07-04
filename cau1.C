#include<stdio.h>
#include<stdint.h>
int value = 0;
typedef union 
{
	uint16_t value;
	uint8_t byte[2];
}tach_byte_t;

void main()
{
	printf("nhap vao gia trị của value:");
	scanf_s("%d", &value);
	tach_byte_t A;
	A.value = value;
	printf("low_bit: 0x%X,high_bit:0x%X\r\n", A.byte[0], A.byte[1]);

}