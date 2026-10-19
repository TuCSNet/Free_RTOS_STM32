# Free_RTOS_STM32

## Overview

This project demonstrates FreeRTOS synchronization and task management features on an STM32 microcontroller using the CMSIS-RTOS API.

It explores message queues, semaphores, event flags, and task run-time statistics to demonstrate inter-thread communication, synchronization, and task monitoring. UART communication is used to interact with a PC terminal and observe thread behavior and run-time statistics.

## Hardware

- STM32 Nucleo-F446RE development board
- USB connection to PC

## Software and Tools

- STM32CubeIDE
- STM32CubeMX
- STM32 HAL
- C programming language

## Features

- Message Queues: Exchange data between threads.
- Semaphores: Synchronize threads and coordinate access to shared resources.
- Event Flags: Synchronize threads using event notifications.
- Task Monitoring: Retrieve task states and run-time statistics using uxTaskGetSystemState().
- UART Communication: Communicate with a PC terminal to observe thread behavior and display task run-time statistics.

## Project Structure

- `Core/Inc/` — application header files
- `Core/Src/` — application source files
- `Drivers/` — STM32 HAL and CMSIS dependencies
- `.ioc` — STM32CubeMX configuration file
