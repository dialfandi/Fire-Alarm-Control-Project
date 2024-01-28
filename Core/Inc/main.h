/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define ADC0_Pin GPIO_PIN_0
#define ADC0_GPIO_Port GPIOC
#define ADC1_Pin GPIO_PIN_1
#define ADC1_GPIO_Port GPIOC
#define ADC2_Pin GPIO_PIN_2
#define ADC2_GPIO_Port GPIOC
#define ADC3_Pin GPIO_PIN_3
#define ADC3_GPIO_Port GPIOC
#define ADC4_Pin GPIO_PIN_0
#define ADC4_GPIO_Port GPIOA
#define ADC5_Pin GPIO_PIN_1
#define ADC5_GPIO_Port GPIOA
#define ADC6_Pin GPIO_PIN_2
#define ADC6_GPIO_Port GPIOA
#define ADC7_Pin GPIO_PIN_3
#define ADC7_GPIO_Port GPIOA
#define ADC8_Pin GPIO_PIN_4
#define ADC8_GPIO_Port GPIOA
#define LIM1_Pin GPIO_PIN_7
#define LIM1_GPIO_Port GPIOE
#define LIM2_Pin GPIO_PIN_8
#define LIM2_GPIO_Port GPIOE
#define LIM3_Pin GPIO_PIN_9
#define LIM3_GPIO_Port GPIOE
#define LIM4_Pin GPIO_PIN_10
#define LIM4_GPIO_Port GPIOE
#define LIM5_Pin GPIO_PIN_11
#define LIM5_GPIO_Port GPIOE
#define LIM6_Pin GPIO_PIN_12
#define LIM6_GPIO_Port GPIOE
#define LIM7_Pin GPIO_PIN_13
#define LIM7_GPIO_Port GPIOE
#define LIM8_Pin GPIO_PIN_14
#define LIM8_GPIO_Port GPIOE
#define BUZZER_Pin GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOD
#define BT9_Pin GPIO_PIN_11
#define BT9_GPIO_Port GPIOD
#define BT8_Pin GPIO_PIN_12
#define BT8_GPIO_Port GPIOD
#define BT7_Pin GPIO_PIN_13
#define BT7_GPIO_Port GPIOD
#define BT6_Pin GPIO_PIN_14
#define BT6_GPIO_Port GPIOD
#define BT5_Pin GPIO_PIN_15
#define BT5_GPIO_Port GPIOD
#define BT4_Pin GPIO_PIN_6
#define BT4_GPIO_Port GPIOC
#define BT3_Pin GPIO_PIN_7
#define BT3_GPIO_Port GPIOC
#define BT2_Pin GPIO_PIN_8
#define BT2_GPIO_Port GPIOC
#define BT1_Pin GPIO_PIN_9
#define BT1_GPIO_Port GPIOC
#define BT0_Pin GPIO_PIN_8
#define BT0_GPIO_Port GPIOA
#define RL7_Pin GPIO_PIN_3
#define RL7_GPIO_Port GPIOB
#define RL6_Pin GPIO_PIN_5
#define RL6_GPIO_Port GPIOB
#define RL5_Pin GPIO_PIN_6
#define RL5_GPIO_Port GPIOB
#define RL4_Pin GPIO_PIN_7
#define RL4_GPIO_Port GPIOB
#define RL3_Pin GPIO_PIN_8
#define RL3_GPIO_Port GPIOB
#define RL2_Pin GPIO_PIN_9
#define RL2_GPIO_Port GPIOB
#define RL1_Pin GPIO_PIN_0
#define RL1_GPIO_Port GPIOE
#define RL0_Pin GPIO_PIN_1
#define RL0_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
