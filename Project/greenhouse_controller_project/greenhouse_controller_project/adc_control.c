/*
 * adc_control.c
 * 
 * ADC control function(s)
 *
 * Created: 24.11.2021 12:24:56
 * Author: Bekec
 */ 

#include "adc_control.h"

// ADC converter initialization and settings
// Input:  none
// Output: none
void adc_init()
{
    ADMUX &= ~(1<<REFS1); ADMUX |= (1<<REFS0); //Voltage reference selection: AVcc
    ADMUX &= ~((1<<MUX3) | (1<<MUX2) | (1<<MUX1) | (1<<MUX0)); //Initial input channel selection: ADC0
    ADCSRA |= (1<<ADEN); //ADC enable
    ADCSRA |= (1<<ADIE); //ADC interrupt enable
    ADCSRA &= ~((1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0)); //ADC prescaler selection: 128
};