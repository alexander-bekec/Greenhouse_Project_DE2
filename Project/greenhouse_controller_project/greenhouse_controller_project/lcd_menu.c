/*
 * lcd_menu.c
 *
 * Visual settings for 16x2 LCD display
 *
 * Created: 08.12.2021 11:40:18
 * Author:
 */ 

#include "lcd_menu.h"
#include "lcd_definitions.h"
#include "lcd.h"
#include <stdlib.h>

/* Main "menu" of greenhouse controller
*  Shows all measured values for greenhouse control
*  Input:  humidity_integer - Humidity integer value from DHT12 sensor
*          temperature_integer - Temperature integer value from DHT12 sensor
*          soil_moisture - Soil moisture value from ADC converter
*          light_level - Light level value from ADC converter
*  Output: none
*/
void lcd_main_menu(uint8_t humidity_integer, uint8_t temperature_integer, uint8_t soil_moisture, uint8_t light_level)
{
    char lcd_hum_int[] = "0000";
    char lcd_temp_int[] = "0000";
    char lcd_soil_moi[] = "0000";
    char lcd_light_level[] = "0000";
    
    itoa(humidity_integer, lcd_hum_int, 10);
    itoa(temperature_integer, lcd_temp_int, 10);
    itoa(soil_moisture, lcd_soil_moi, 10);
    itoa(light_level, lcd_light_level, 10);
    
    lcd_gotoxy(0,0);
    lcd_puts("AH:");
    lcd_puts(lcd_hum_int);
    lcd_puts("%  ");
    lcd_gotoxy(8,0);
    lcd_puts("SM:");
    lcd_puts(lcd_soil_moi);
    lcd_puts("%  ");
    lcd_gotoxy(0,1);
    lcd_puts("AT:");
    lcd_puts(lcd_temp_int);
    lcd_puts("C  ");
    lcd_gotoxy(8,1);
    lcd_puts("LL:");
    lcd_puts(lcd_light_level);
    lcd_puts("%  ");
};

/* Humidity menu on LCD display
*  Shows measured value and limit value of humidity
*  Input:  humidity_integer - Humidity integer value from DHT12 sensor
*          humidity_float - Humidity float value form DHT12 sensor
*          humidity_limit - Humidity nominal value
*  Output: none
*/
void lcd_humidity_menu(uint8_t humidity_integer, uint8_t humidity_fractional, uint8_t humidity_limit)
{
    char lcd_hum_int[] = "0000";
    char lcd_hum_frac[] = "0000";    
    char lcd_hum_limit[] = "0000";
    
    itoa(humidity_integer, lcd_hum_int, 10);
    itoa(humidity_fractional, lcd_hum_frac, 10);
    itoa(humidity_limit, lcd_hum_limit, 10);
    
    lcd_gotoxy(0,0);
    lcd_puts("Air Hum.: ");
    lcd_puts(lcd_hum_int);
    lcd_puts(".");
    lcd_puts(lcd_hum_frac);
    lcd_puts("%  ");
    lcd_gotoxy(0,1);
    lcd_puts("Nominal: ");
    lcd_puts(lcd_hum_limit);
    lcd_puts("%  ");
    lcd_gotoxy(12,1);
    lcd_puts("    ");
};

/* Temperature menu on LCD display
*  Shows measured value and limit value of temperature
*  Input:  temperature_integer - Temperature integer value from DHT12 sensor
*          temperature_float - Temperature float value form DHT12 sensor
*          temperature_limit - Temperature nominal value
*  Output: none
*/
void lcd_temperature_menu(uint8_t temperature_integer, uint8_t temperature_fractional, uint8_t temperature_limit)
{
    char lcd_temp_int[] = "0000";
    char lcd_temp_frac[] = "0000";
    char lcd_temp_limit[] = "0000";
    
    itoa(temperature_integer, lcd_temp_int, 10);
    itoa(temperature_fractional, lcd_temp_frac, 10);
    itoa(temperature_limit, lcd_temp_limit, 10);
    
    lcd_gotoxy(0,0);
    lcd_puts("Air Temp.: ");
    lcd_puts(lcd_temp_int);
    lcd_puts(".");
    lcd_puts(lcd_temp_frac);
    lcd_puts("C  ");
    lcd_gotoxy(0,1);
    lcd_puts("Nominal: ");
    lcd_puts(lcd_temp_limit);
    lcd_puts("C  ");
};

/* Soil moisture menu on LCD display
*  Shows measured value and limit value of soil moisture
*  Input:  soil_moisture - Soil moisture value from moisture sensor V1.2
*          soil_moisture_limit - Soil moisture nominal value
*  Output: none
*/
void lcd_soil_moisture_menu(uint8_t soil_moisture, uint8_t soil_moisture_limit)
{
    char lcd_soil_moi_int[] = "0000";
    char lcd_soil_moi_limit[] = "0000";
    
    itoa(soil_moisture, lcd_soil_moi_int, 10);
    itoa(soil_moisture_limit, lcd_soil_moi_limit, 10);
    
    lcd_gotoxy(0,0);
    lcd_puts("Soil Moist.: ");
    lcd_puts(lcd_soil_moi_int);
    lcd_puts("%  ");
    lcd_gotoxy(0,1);
    lcd_puts("Nominal: ");
    lcd_puts(lcd_soil_moi_limit);
    lcd_puts("%  ");
    lcd_gotoxy(12,1);
    lcd_puts("    ");
};

/* Light level menu on LCD display
*  Shows measured value and limit value of light
*  Input:  light_level - Light level value from photoresistor circuit
*          light_level_limit - Light level nominal value
*  Output: none
*/
void lcd_light_level_menu(uint8_t light_level, uint8_t light_level_limit)
{
    char lcd_light_level_int[] = "0000";
    char lcd_light_level_limit[] = "0000";
    
    itoa(light_level, lcd_light_level_int, 10);
    itoa(light_level_limit, lcd_light_level_limit, 10);
    
    lcd_gotoxy(0,0);
    lcd_puts("Light Lvl.: ");
    lcd_puts(lcd_light_level_int);
    lcd_puts("% ");
    lcd_gotoxy(0,1);
    lcd_puts("Nominal: ");
    lcd_puts(lcd_light_level_limit);
    lcd_puts("%  ");
    lcd_gotoxy(12,1);
    lcd_puts("    ");
};

