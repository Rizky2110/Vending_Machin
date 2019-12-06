/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_500_Pin GPIO_PIN_13
#define LED_500_GPIO_Port GPIOC
#define LED_1000_Pin GPIO_PIN_14
#define LED_1000_GPIO_Port GPIOC
#define LED_PROSEES_Pin GPIO_PIN_15
#define LED_PROSEES_GPIO_Port GPIOC
#define LED_BATAL_Pin GPIO_PIN_0
#define LED_BATAL_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_1
#define BUZZER_GPIO_Port GPIOA
#define BUTTON_PROSES_Pin GPIO_PIN_10
#define BUTTON_PROSES_GPIO_Port GPIOA
#define BUTTON_BATAL_Pin GPIO_PIN_11
#define BUTTON_BATAL_GPIO_Port GPIOA
#define BUTTON_1000_Pin GPIO_PIN_12
#define BUTTON_1000_GPIO_Port GPIOA
#define BUTTON_500_Pin GPIO_PIN_15
#define BUTTON_500_GPIO_Port GPIOA
#define D7_LCD_Pin GPIO_PIN_3
#define D7_LCD_GPIO_Port GPIOB
#define D6_LCD_Pin GPIO_PIN_4
#define D6_LCD_GPIO_Port GPIOB
#define D5_LCD_Pin GPIO_PIN_5
#define D5_LCD_GPIO_Port GPIOB
#define D4_LCD_Pin GPIO_PIN_6
#define D4_LCD_GPIO_Port GPIOB
#define ENABLE_LCD_Pin GPIO_PIN_7
#define ENABLE_LCD_GPIO_Port GPIOB
#define RW_LCD_Pin GPIO_PIN_8
#define RW_LCD_GPIO_Port GPIOB
#define RS_LCD_Pin GPIO_PIN_9
#define RS_LCD_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
