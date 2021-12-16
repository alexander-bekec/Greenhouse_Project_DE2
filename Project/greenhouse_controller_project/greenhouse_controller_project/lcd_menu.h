/*
 * lcd_print.h
 *
 * Visual settings for 16x2 LCD display
 *
 * Created: 08.12.2021 11:32:06
 * Author:
 */ 

#ifndef LCD_PRINT_H_
#define LCD_PRINT_H_

#include <avr/io.h>

/* Main "menu" of greenhouse controller
*  Shows all measured values for greenhouse control
*  Input:  humidity_integer - Humidity integer value from DHT12 sensor
*          temperature_integer - Temperature integer value from DHT12 sensor
*          soil_moisture - Soil moisture value from ADC converter
*          light_level - Light level value from ADC converter
*  Output: none
*/
void lcd_main_menu(uint8_t humidity_integer, uint8_t temperature_integer, uint8_t soil_moisture, uint8_t light_level);

/* Humidity menu on LCD display
*  Shows measured value and limit value of humidity
*  Input:  humidity_integer - Humidity integer value from DHT12 sensor
*          humidity_float - Humidity float value form DHT12 sensor
*          humidity_limit - Humidity nominal value 
*  Output: none
*/
void lcd_humidity_menu(uint8_t humidity_integer, uint8_t humidity_fractional, uint8_t humidity_limit);

/* Temperature menu on LCD display
*  Shows measured value and limit value of temperature
*  Input:  temperature_integer - Temperature integer value from DHT12 sensor
*          temperature_float - Temperature float value form DHT12 sensor
*          temperature_limit - Temperature nominal value
*  Output: none
*/
void lcd_temperature_menu(uint8_t temperature_integer, uint8_t temperature_fractional, uint8_t temperature_limit);

/* Soil moisture menu on LCD display
*  Shows measured value and limit value of soil moisture
*  Input:  soil_moisture - Soil moisture value from moisture sensor V1.2
*          soil_moisture_limit - Soil moisture nominal value
*  Output: none
*/
void lcd_soil_moisture_menu(uint8_t soil_moisture, uint8_t soil_moisture_limit);

/* Light level menu on LCD display
*  Shows measured value and limit value of light
*  Input:  light_level - Light level value from photoresistor circuit
*          light_level_limit - Light level nominal value
*  Output: none
*/
void lcd_light_level_menu(uint8_t light_level, uint8_t light_level_limit);

#endif /* LCD_PRINT_H_ */