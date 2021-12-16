/*
 * button.h
 *
 * Library for button conversion
 *
 * Created: 15. 12. 2021 0:18:10
 * Author: 
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include <avr/io.h>

// Converting ADC value of button to value for state control
// Input:  adc_input_value - Button value from ADC converter
// Output: Button value for state control
uint8_t button_analog(uint16_t adc_input_value);

#endif /* BUTTON_H_ */