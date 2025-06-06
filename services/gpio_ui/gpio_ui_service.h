#ifndef HSS_GPIOUI_SERVICE_H
#define HSS_GPIOUI_SERVICE_H

/*******************************************************************************
 * Copyright 2019-2025 Microchip FPGA Embedded Systems Solutions.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 *
 * Hart Software Services - GPIO User Interface
 *
 */

#ifdef __cplusplus
extern "C" {
#endif

#include "hss_state_machine.h"

void GPIO_UI_Init(void);
void GPIO_UI_Shutdown(void);

bool HSS_GPIO_UI_user_button_pressed(void);
bool HSS_GPIO_UI_Preboot_Check_Button(void);

void HSS_GPIO_UI_ShowProgress(size_t totalNumTasks, size_t numTasksRemaining);
void HSS_GPIO_UI_ReportDDRInitStart(void);
void HSS_GPIO_UI_ReportDDRInitEnd(void);
void HSS_GPIO_UI_ReportImageGoodCRC(void);
void HSS_GPIO_UI_ReportUSBProgress(uint32_t writeCount, uint32_t readCount);

extern struct StateMachine gpio_ui_service;

#ifdef __cplusplus
}
#endif

#endif

