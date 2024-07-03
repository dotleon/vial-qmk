// Copyright 2023 dotleon (@dotleon)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define QMK_ESC_OUTPUT F4 // usually COL
#define QMK_ESC_INPUT D5 // usually ROW
#define RGBLIGHT_LIMIT_VAL 40
#define RGBLIGHT_SLEEP
#define FORCE_NKRO
#define USB_POLLING_INTERVAL_MS 1

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
