/**
 * @file xmc_pau.c
 *
 * @cond
 *****************************************************************************
 * XMClib - XMC Peripheral Driver Library
 *
 * Copyright (c) 2015-2020, Infineon Technologies AG
 * All rights reserved.
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * To improve the quality of the software, users are encouraged to share
 * modifications, enhancements or bug fixes with Infineon Technologies AG
 * at XMCSupport@infineon.com.
 *****************************************************************************
 *
 * @endcond
 *
 */

/**
 *
 * @brief PAU driver for XMC1 microcontroller family.
 *
 */

/*********************************************************************************************************************
 * HEADER FILES
 *********************************************************************************************************************/
#include "xmc_pau.h"

#if defined(PAU)

/**********************************************************************************************************************
 * API IMPLEMENTATION
 *********************************************************************************************************************/

/*
 * Enable peripheral access
 */
void XMC_PAU_EnablePeripheralAccess(XMC_PAU_PERIPHERAL_t peripheral)
{
  uint32_t reg_num;

  reg_num = ((uint32_t)peripheral & 0xf0000000U) >> 28U;
  XMC_PAU->PRIVDIS[reg_num] &= (uint32_t)~((uint32_t)peripheral & 0x0fffffffUL);
}

/*
 * Disable peripheral access
 */
void XMC_PAU_DisablePeripheralAccess(XMC_PAU_PERIPHERAL_t peripheral)
{
  uint32_t reg_num;

  reg_num = ((uint32_t)peripheral & 0xf0000000U) >> 28U;
  XMC_PAU->PRIVDIS[reg_num] |= (uint32_t)((uint32_t)peripheral & 0x0fffffffUL);
}

/*
 * Check if peripheral access is enabled
 */
bool XMC_PAU_IsPeripheralAccessEnabled(XMC_PAU_PERIPHERAL_t peripheral)
{
  uint32_t reg_num;

  reg_num = ((uint32_t)peripheral & 0xf0000000U) >> 28U;
  return (bool)(XMC_PAU->PRIVDIS[reg_num] & ((uint32_t)peripheral & 0x0fffffffUL));
}

/*
 * Check if peripheral is available
 */
bool XMC_PAU_IsPeripheralAvailable(XMC_PAU_PERIPHERAL_t peripheral)
{
  uint32_t reg_num;

  reg_num = ((uint32_t)peripheral & 0xf0000000U) >> 28U;
  return (bool)(XMC_PAU->AVAIL[reg_num] & ((uint32_t)peripheral & 0x0fffffffUL));
}

#endif /* defined(PAU) */
