/*
Copyright 2024 TuNdRa_Plains

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#define RP2040_FLASH_GD25Q64CS 		//Define Flash Chip to ensure proper function of Sea-Picro
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_RX_PIN GP1     // USART RX pin
#define SERIAL_USART_TX_PIN GP0     // USART TX pin

#define SPLIT_TRANSPORT_MIRROR 		//Ensure states mirrored on device.
#define SPLIT_LED_STATE_ENABLE 		//Ensures LED states match on both halves

//Pointing particulars setup.
#define POINTING_DEVICE_CS_PIN GP21	//CS Pin confirmation. QMK Defaults are against ATMEGA pin definitions.
#define PMW3389_CPI 16000 			//Preferred CPI. Change as needed.
#define SPLIT_POINTING_ENABLE		//Tells QMK to transmit pointing info across serial link.
#define ROTATIONAL_TRANSFORM_ANGLE  -25 //Sensor is not directly square to user, so input has to be rotated to make sense. Else "Up" would be diagonally up/left.
#define POINTING_DEVICE_INVERT_Y	//Sensor is upside-down vs expected, so Y gets flipped.
#define POINTING_DEVICE_RIGHT 		//informs QMK trackball is on the right half.
#define POINTING_DEVICE_TASK_THROTTLE_MS 1 //forces 1 milisecond refresh rates vs 10ms default. Ensures trackball feels responsive as possible.
#define PMW3389_LIFTOFF_DISTANCE 0x02 //Ensures that sensor can still track the ball if tolerances vary between Sensor & Ball.

#define SPI_DRIVER SPID0 			//Nothing after SPID0 exists/is accepted. QMK Defaults seem to be wrong for the Sea-Picro.
//Define SPI pins, else it tries using ATMEGA pin assignment & errors.
#define SPI_MOSI_PIN GP23
#define SPI_MISO_PIN GP20
#define SPI_SCK_PIN GP22

//RGB Defines
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_PIXEL_RAIN

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT // Sets the default mode
#define RGB_MATRIX_TIMEOUT 000 // number of milliseconds to wait until rgb automatically turns off
#define RGB_MATRIX_SLEEP // turn off effects when suspended