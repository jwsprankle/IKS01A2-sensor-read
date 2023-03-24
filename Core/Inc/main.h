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
#include "stm32l4xx_hal.h"

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
#define TIM_CLOCK_ENV 2000U
#define ALGO_FREQ_CP_GR_PM 50U
#define ALGO_FREQ_AR_ID 16U
#define FREQ_ACC_GYRO_MAG 20U
#define DEFAULT_uhCCR1_Val (10000U / ALGO_FREQ_FX)
#define ALGO_FREQ_ENV 2U
#define ALGO_FREQ_FX 100U
#define DEFAULT_uhCCR4_Val (10000U / FREQ_ACC_GYRO_MAG)
#define DEFAULT_uhCCR3_Val (10000U / ALGO_FREQ_AR_ID)
#define DEFAULT_uhCCR2_Val (10000U / ALGO_FREQ_CP_GR_PM)
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define MEMS_ACC_INT_Pin GPIO_PIN_5
#define MEMS_ACC_INT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
