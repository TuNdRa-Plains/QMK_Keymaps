 /* Copyright 2022 Alex Lee
  * 2021 HellSingCoder
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */


  #pragma once


//#define USE_MATRIX_I2C

/* Select hand configuration */

///https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/

#define SPLIT_USB_DETECT
//#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// Communication between sides
#define SOFT_SERIAL_PIN D2 //May Break depending on board layout.

#define TAPPING_FORCE_HOLD
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif
#define ENCODER_DIRECTION_FLIP

// OLED settings
#ifdef OLED_ENABLE
	#define OLED_TIMEOUT 6000      		//6000ms - 60 seconds
	#define OLED_BRIGHTNESS 90			//Default is 100.
	#define SPLIT_OLED_ENABLE			//Synx on/off OLED state between halves (+100).
	#ifdef WPM_ENABLE
		#define SPLIT_WPM_ENABLE			//Enable WPM across split keyboards (+106-268).
	#endif
	#define OLED_LOGO					//Enable to print snakey custom logo on slave side (+108).
	//#define SNEAK_DISABLE				//Disable snakey keyboard pet sneak animation to save space (-132).
	//#define OLED_NO_SLAVE				//Disable snakey minimal keyboard pet slave OLED rendering (-160).
	//#define OLED_NO_MASTER				//Disable snakey minimal keyboard pet master OLED rendering and render status on the slave (+96).
	#ifdef OLED_NO_MASTER
		#define SPLIT_LAYER_STATE_ENABLE	//Keep on master to save space (+142).
		#define SPLIT_LED_STATE_ENABLE		//Keep on master to save space (+112).
		#undef SPLIT_OLED_ENABLE			//Do not sync OLED state with one OLED only (+100).
	#endif
	//#define SPLIT_MODS_ENABLE			//Keep on master to save space (+138).
#endif

// Setup RGB Lighting
/* ws2812 RGB LED */
#define RGB_DI_PIN D3
#define DRIVER_LED_TOTAL 36
#define RGB_MATRIX_SPLIT { 36, 36 } 
#undef RGB_LEDNUM
#define RGBLED_NUM 72
#define RGBLED_SPLIT {36, 36}

#define RGBLIGHT_LIMIT_VAL 120 //Sufficient LEDs on both boards to outrun USB Power over approx 127. 120 should keep it within safe bounds.
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT

/* Define RGB Effects.
 * These are pretty space intensive, so only enable what is wanted. 
 */
#define RGBLIGHT_MODE_STATIC_LIGHT
 //#define RGBLIGHT_MODE_BREATHING
#define RGBLIGHT_MODE_RAINBOW_MOOD
 //#define RGBLIGHT_MODE_RAINBOW_SWIRL
 //#define RGBLIGHT_MODE_SNAKE
 //#define RGBLIGHT_MODE_KNIGHT
 //#define RGBLIGHT_MODE_CHRISTMAS
#define RGBLIGHT_MODE_STATIC_GRADIENT
 //#define RGBLIGHT_MODE_RGB_TEST
 //#define RGBLIGHT_MODE_ALTERNATING
 //#define RGBLIGHT_MODE_TWINKLE
 
 