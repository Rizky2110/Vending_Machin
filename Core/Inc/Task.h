/*
 * Task.h
 *
 *  Created on: Dec 1, 2019
 *      Author: rizky
 */

#ifndef INC_TASK_H_
#define INC_TASK_H_

#include "main.h"
#include "LCD.h"
#include <stm32_hal_legacy.h>

#define Led_500_ON			HAL_GPIO_WritePin(LED_500_GPIO_Port,LED_500_Pin,GPIO_PIN_RESET)
#define Led_500_OFF			HAL_GPIO_WritePin(LED_500_GPIO_Port,LED_500_Pin,GPIO_PIN_SET)

#define Led_1000_ON			HAL_GPIO_WritePin(LED_1000_GPIO_Port, LED_1000_Pin, GPIO_PIN_RESET)
#define Led_1000_OFF		HAL_GPIO_WritePin(LED_1000_GPIO_Port, LED_1000_Pin, GPIO_PIN_SET)

#define Led_proses_ON		HAL_GPIO_WritePin(LED_PROSEES_GPIO_Port, LED_PROSEES_Pin, GPIO_PIN_RESET)
#define Led_proses_OFF		HAL_GPIO_WritePin(LED_PROSEES_GPIO_Port, LED_PROSEES_Pin, GPIO_PIN_SET)

#define led_batal_ON		HAL_GPIO_WritePin(LED_BATAL_GPIO_Port, LED_BATAL_Pin, GPIO_PIN_RESET)
#define led_batal_OFF		HAL_GPIO_WritePin(LED_BATAL_GPIO_Port, LED_BATAL_Pin, GPIO_PIN_SET)


void task_init();
void task_run();

#define Led_in_500 HAL_

#endif /* INC_TASK_H_ */
