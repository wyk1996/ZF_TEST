#ifndef __TIMER_H
#define __TIMER_H
#include "device.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK��ӢSTM32F103������V1
//��ʱ�� ��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2015/1/10
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////   	 

void TIM3_Int_Init(u16 arr,u16 psc);
void TIM2_PWM_Conrtol(uint16_t Val);
void TIM4_Int_Init(u16 arr,u16 psc);
void uart_recvdispose(void);
#endif






















