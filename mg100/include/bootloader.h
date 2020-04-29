/**
 * @file bootloader.h
 * @brief
 *
 * Copyright (c) 2020 Laird Connectivity
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __BOOTLOADER_H__
#define __BOOTLOADER_H__

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/* Global Function Prototypes                                                 */
/******************************************************************************/

/**
 * @brief Init the bootloader query functionality, returns false on failure
 */
bool bootloader_init(void);

/**
 * @brief Fetches information from the bootloader and updates it in BLE
 */
void bootloader_fetch(void);

#ifdef __cplusplus
}
#endif

#endif /* __BOOTLOADER_H__ */