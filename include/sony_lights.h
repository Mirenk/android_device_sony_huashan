/*
 * Copyright (C) 2012-2013 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

char const*const LCD_BACKLIGHT_FILE  = "/sys/devices/i2c-10/10-0040/leds/lcd-backlight1/brightness";
char const*const LCD_BACKLIGHT2_FILE = "/sys/devices/i2c-10/10-0040/leds/lcd-backlight2/brightness";
char const*const MAX_BRIGHTNESS_FILE = "/sys/devices/i2c-10/10-0040/leds/lcd-backlight1/max_brightness";

const int LCD_BRIGHTNESS_MIN         = 10;
