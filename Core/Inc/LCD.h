/*
 * LCD.h
 *
 *  Created on: Nov 30, 2019
 *      Author: rizky
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "stm32f1xx.h"
#include "LCD.h"
#include "stm32f1xx_hal.h"
#include "main.h"

#define LCD_EN() 			{	HAL_GPIO_WritePin(ENABLE_LCD_GPIO_Port,ENABLE_LCD_Pin,GPIO_PIN_SET);\
								for(int i=0;i<1500;i++);\
								HAL_GPIO_WritePin(ENABLE_LCD_GPIO_Port,ENABLE_LCD_Pin,GPIO_PIN_RESET);\
								for(int i=0;i<1500;i++);}
#define LCD_RW(state)		{	HAL_GPIO_WritePin(RW_LCD_GPIO_Port,RW_LCD_Pin, (state) ? GPIO_PIN_SET : GPIO_PIN_RESET);}
#define LCD_RS(state)		{	HAL_GPIO_WritePin(RS_LCD_GPIO_Port,RS_LCD_Pin, (state) ? GPIO_PIN_SET : GPIO_PIN_RESET);}
#define LCD_Command(data)	{	LCD_Send(0,data);}
#define LCD_Data(data)		{	LCD_Send(1,data);}

void LCD_Write4bit(uint8_t data);
void LCD_Send(_Bool mode, uint8_t data);
void LCD_Init (void);
void LCD_Print(char *pData);
void LCD_SetCursor(uint8_t x,uint8_t y);
void LCD_Clear(void);
void LCD_PrintNum(int16_t number);

#endif /* INC_LCD_H_ */
