/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#define LSE_IN_Pin GPIO_PIN_14
#define LSE_IN_GPIO_Port GPIOC
#define LSE_OUT_Pin GPIO_PIN_15
#define LSE_OUT_GPIO_Port GPIOC
#define HSE_IN_Pin GPIO_PIN_0
#define HSE_IN_GPIO_Port GPIOH
#define HSE_OUT_Pin GPIO_PIN_1
#define HSE_OUT_GPIO_Port GPIOH
#define M_CS_Pin GPIO_PIN_1
#define M_CS_GPIO_Port GPIOC
#define M_SDO_Pin GPIO_PIN_2
#define M_SDO_GPIO_Port GPIOC
#define M_SDI_Pin GPIO_PIN_3
#define M_SDI_GPIO_Port GPIOC
#define V_TX_Pin GPIO_PIN_0
#define V_TX_GPIO_Port GPIOA
#define V_RX_Pin GPIO_PIN_1
#define V_RX_GPIO_Port GPIOA
#define GPS_TX_Pin GPIO_PIN_2
#define GPS_TX_GPIO_Port GPIOA
#define GPS_RX_Pin GPIO_PIN_3
#define GPS_RX_GPIO_Port GPIOA
#define IMU_SCK_Pin GPIO_PIN_5
#define IMU_SCK_GPIO_Port GPIOA
#define IMU_SDO_Pin GPIO_PIN_6
#define IMU_SDO_GPIO_Port GPIOA
#define IMU_SDI_Pin GPIO_PIN_7
#define IMU_SDI_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_4
#define IMU_CS_GPIO_Port GPIOC
#define TELE_CS_Pin GPIO_PIN_5
#define TELE_CS_GPIO_Port GPIOC
#define TELE_MSG_Pin GPIO_PIN_0
#define TELE_MSG_GPIO_Port GPIOB
#define IMU_INT1_Pin GPIO_PIN_1
#define IMU_INT1_GPIO_Port GPIOB
#define M_SCK_Pin GPIO_PIN_10
#define M_SCK_GPIO_Port GPIOB
#define IMU_INT2_Pin GPIO_PIN_11
#define IMU_INT2_GPIO_Port GPIOB
#define BMP_INT_Pin GPIO_PIN_12
#define BMP_INT_GPIO_Port GPIOB
#define GPS_RST_Pin GPIO_PIN_13
#define GPS_RST_GPIO_Port GPIOB
#define GPS_INT_Pin GPIO_PIN_14
#define GPS_INT_GPIO_Port GPIOB
#define M_INT_Pin GPIO_PIN_15
#define M_INT_GPIO_Port GPIOB
#define TELE_RXM_Pin GPIO_PIN_6
#define TELE_RXM_GPIO_Port GPIOC
#define TELE_TXM_Pin GPIO_PIN_7
#define TELE_TXM_GPIO_Port GPIOC
#define TELE_BUSY_Pin GPIO_PIN_8
#define TELE_BUSY_GPIO_Port GPIOC
#define TELE_SCK_Pin GPIO_PIN_10
#define TELE_SCK_GPIO_Port GPIOC
#define TELE_SDO_Pin GPIO_PIN_11
#define TELE_SDO_GPIO_Port GPIOC
#define TELE_SDI_Pin GPIO_PIN_12
#define TELE_SDI_GPIO_Port GPIOC
#define BMP_SCL_Pin GPIO_PIN_6
#define BMP_SCL_GPIO_Port GPIOB
#define BMP_SDA_Pin GPIO_PIN_7
#define BMP_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
