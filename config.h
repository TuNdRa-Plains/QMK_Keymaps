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


#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define CUSTOM_FONT

#define CUSTOM_LAYER_READ //if you remove this it causes issues - needs better guarding

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
	#define OLED_TIMEOUt 6000      		//6000ms - 60 seconds
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

#define RGBLIGHT_SLEEP
//
#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define RGB_DI_PIN D3


/*#ifdef RGB_MATRIX_ENABLE
#define RGBLED_NUM 36   // Number of LEDs
#define RGBLED_NUM 36   // Number of LEDs
#define DRIVER_LED_TOTAL RGBLED_NUM
#endif */

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM

    #define RGBLIGHT_ANIMATIONS
	//#define RGBLIGHT_EFFECT_BREATHING
	//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	//#define RGBLIGHT_EFFECT_SNAKE
	//#define RGBLIGHT_EFFECT_KNIGHT
	//#define RGBLIGHT_EFFECT_CHRISTMAS
	//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	//#define RGBLIGHT_EFFECT_RGB_TEST
	//#define RGBLIGHT_EFFECT_ALTERNATING
	//#define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLED_NUM 72
	//#define RGBLED_SPLIT
	#define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet

	//#define RGBLED_NUM 30
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

/*#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE

#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

 * Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. 
  #    undef ENABLE_RGB_MATRIX_ALPHAS_MODS
  #    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
  #    undef ENABLE_RGB_MATRIX_BREATHING
//#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
//#    undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//#    undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
//#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
//#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
//#    undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
//#    undef ENABLE_RGB_MATRIX_DUAL_BEACON
//#    undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
//#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
//#    undef ENABLE_RGB_MATRIX_RAINDROPS
//#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
  #    undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
  #    undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
  #    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
  #    undef ENABLE_RGB_MATRIX_SPLASH
  #    undef ENABLE_RGB_MATRIX_MULTISPLASH
  #    undef ENABLE_RGB_MATRIX_SOLID_SPLASH
  #    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif */
