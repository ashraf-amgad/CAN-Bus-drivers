/**
  ******************************************************************************
  * @file    CAN_int.h
  * @author  Ashraf_Amgad AutoCAN_Embedded_team
	* @editor	 Ashraf_Amgad
  * @version V2.0
  * @date    3-Dec-2019
  * @brief   This file contains functions prototypes for CAN_driver.
  ****************************************************************************
	**/
	
/* Define to prevent recursive inclusion */
#ifndef __CAN_H_
#define	__CAN_H_



/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"                  // Device header 
#include "CAN_conf.h"									// CAN_driver configuration header


/** @(STM32F10x.h)
  * @@brief 			StdPeriph_Driver
  */
	
	
/** @(CAN_conf.h) 
  * @brief 				configrations of CAN driver  
  */



/* FUNCTION PROTOTYPES   ------------------------------------------------------*/
/*=========================*/

/* configurations of  CAN driver */
void CAN_voidInit(void);
/*............................................*/



/* prototype of function which configure CAN_filter */
void CAN_voidConfigFilter(uint8_t CAN_FILTER_NUMBER ,uint8_t CAN_FILTER_MODE ,uint8_t CAN_Filter_Scale 
	,uint16_t CAN_FILTER_ID ,uint16_t CAN_FILTER_MASK_ID ,uint16_t CAN_FILTER_FIFO_ASSIGNMENT);
/*............................................*/



/* prototype of function that configures CAN transmited massage */
void CAN_voidSetTxMsg(CanTxMsg* TxMessage ,uint32_t StdId ,uint8_t RTR ,uint8_t DLC ,uint8_t* Data);
/*............................................*/



/**
	*	@attention  CAN_voidGetFilterIndex() function needs a test.
	*	
  */
/* prototype of function that return filter index */
uint8_t CAN_voidGetFilterIndex(uint8_t CAN_FilterFIFO);
/*............................................*/




/** AUTOCAN *****END OF FILE****/	
/*     __CAN_H_     */
#endif
