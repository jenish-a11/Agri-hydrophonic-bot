qorc_ssi_adc.begin();
//Set parameters for sample rate to read ADC
qorc_ssi_adc.setSampleRate(sensor_ssss_config.rate_hz);
int16_t *p_adc_data = (int16_t *)p_dest;
int16_t chanA0 = qorc_ssi_adc.getSingleEnded(0); //pH
int16_t chanA1 = qorc_ssi_adc.getSingleEnded(1); //Soil Moisture
int16_t chanA2 = qorc_ssi_adc.getSingleEnded(2); //Temperature