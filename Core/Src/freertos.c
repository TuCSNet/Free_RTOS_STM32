/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"


/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

extern UART_HandleTypeDef huart2;
const int STDIN_FILENO = 0;
const int STDOUT_FILENO = 1;
const int STDERR_FILENO = 2;

//Print using printf in C library
int _write(int file, char* ptr, int len)
{
	if(file == STDOUT_FILENO || file == STDERR_FILENO)
	{
		HAL_StatusTypeDef status;
		status = HAL_UART_Transmit(&huart2, (uint8_t*)ptr, len, HAL_MAX_DELAY);
		if(status == HAL_OK)
		{
			return 1;
		}
	}
	return -1;
}

//Writing using scanf in C library
int _read(int file, char* ptr, int len)
{
	if(file == STDIN_FILENO)
	{
		HAL_StatusTypeDef status;
		status =HAL_UART_Receive(&huart2, (uint8_t*)ptr, 1, HAL_MAX_DELAY);

		if(status == HAL_OK)
			return 1;
	}
	return -1;
}
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

