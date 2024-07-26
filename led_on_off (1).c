// If prediction ON
if ((int)classification == 1) {
  HAL_GPIO_Write(GPIO_6, 1);
} else {
  HAL_GPIO_Write(GPIO_6, 0);
}