#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[USART0]
// [USART0]$

// $[UART1]
// [UART1]$

// $[ULP_UART]
// [ULP_UART]$

// $[I2C0]
// I2C0 SCL on GPIO_7
#ifndef I2C0_SCL_PORT                           
#define I2C0_SCL_PORT                            HP
#endif
#ifndef I2C0_SCL_PIN                            
#define I2C0_SCL_PIN                             7
#endif
#ifndef I2C0_SCL_LOC                            
#define I2C0_SCL_LOC                             0
#endif

// I2C0 SDA on GPIO_6
#ifndef I2C0_SDA_PORT                           
#define I2C0_SDA_PORT                            HP
#endif
#ifndef I2C0_SDA_PIN                            
#define I2C0_SDA_PIN                             6
#endif
#ifndef I2C0_SDA_LOC                            
#define I2C0_SDA_LOC                             3
#endif

// [I2C0]$

// $[I2C1]
// I2C1 SCL on GPIO_54
#ifndef I2C1_SCL_PORT                           
#define I2C1_SCL_PORT                            HP
#endif
#ifndef I2C1_SCL_PIN                            
#define I2C1_SCL_PIN                             54
#endif
#ifndef I2C1_SCL_LOC                            
#define I2C1_SCL_LOC                             3
#endif

// I2C1 SDA on GPIO_55
#ifndef I2C1_SDA_PORT                           
#define I2C1_SDA_PORT                            HP
#endif
#ifndef I2C1_SDA_PIN                            
#define I2C1_SDA_PIN                             55
#endif
#ifndef I2C1_SDA_LOC                            
#define I2C1_SDA_LOC                             9
#endif

// [I2C1]$

// $[ULP_I2C]
// ULP_I2C SCL on ULP_GPIO_7/GPIO_71
#ifndef ULP_I2C_SCL_PORT                        
#define ULP_I2C_SCL_PORT                         ULP
#endif
#ifndef ULP_I2C_SCL_PIN                         
#define ULP_I2C_SCL_PIN                          7
#endif
#ifndef ULP_I2C_SCL_LOC                         
#define ULP_I2C_SCL_LOC                          2
#endif

// ULP_I2C SDA on ULP_GPIO_6/GPIO_70
#ifndef ULP_I2C_SDA_PORT                        
#define ULP_I2C_SDA_PORT                         ULP
#endif
#ifndef ULP_I2C_SDA_PIN                         
#define ULP_I2C_SDA_PIN                          6
#endif
#ifndef ULP_I2C_SDA_LOC                         
#define ULP_I2C_SDA_LOC                          6
#endif

// [ULP_I2C]$

// $[SSI_MASTER]
// [SSI_MASTER]$

// $[SSI_SLAVE]
// [SSI_SLAVE]$

// $[ULP_SSI]
// [ULP_SSI]$

// $[GSPI_MASTER]
// [GSPI_MASTER]$

// $[I2S0]
// [I2S0]$

// $[ULP_I2S]
// [ULP_I2S]$

// $[SCT]
// [SCT]$

// $[SIO]
// [SIO]$

// $[PWM]
// [PWM]$

// $[PWM_CH0]
// [PWM_CH0]$

// $[PWM_CH1]
// [PWM_CH1]$

// $[PWM_CH2]
// [PWM_CH2]$

// $[PWM_CH3]
// [PWM_CH3]$

// $[ADC_CH1]
// ADC_CH1 P on ULP_GPIO_1/GPIO_65
#ifndef ADC_CH1_P_PORT                          
#define ADC_CH1_P_PORT                           ULP
#endif
#ifndef ADC_CH1_P_PIN                           
#define ADC_CH1_P_PIN                            1
#endif
#ifndef ADC_CH1_P_LOC                           
#define ADC_CH1_P_LOC                            10
#endif

// ADC_CH1 N on GPIO_28
#ifndef ADC_CH1_N_PORT                          
#define ADC_CH1_N_PORT                           HP
#endif
#ifndef ADC_CH1_N_PIN                           
#define ADC_CH1_N_PIN                            28
#endif
#ifndef ADC_CH1_N_LOC                           
#define ADC_CH1_N_LOC                            350
#endif

// [ADC_CH1]$

// $[ADC_CH2]
// ADC_CH2 P on GPIO_27
#ifndef ADC_CH2_P_PORT                          
#define ADC_CH2_P_PORT                           HP
#endif
#ifndef ADC_CH2_P_PIN                           
#define ADC_CH2_P_PIN                            27
#endif
#ifndef ADC_CH2_P_LOC                           
#define ADC_CH2_P_LOC                            26
#endif

// ADC_CH2 N on GPIO_30
#ifndef ADC_CH2_N_PORT                          
#define ADC_CH2_N_PORT                           HP
#endif
#ifndef ADC_CH2_N_PIN                           
#define ADC_CH2_N_PIN                            30
#endif
#ifndef ADC_CH2_N_LOC                           
#define ADC_CH2_N_LOC                            360
#endif

// [ADC_CH2]$

// $[ADC_CH3]
// ADC_CH3 P on ULP_GPIO_8/GPIO_72
#ifndef ADC_CH3_P_PORT                          
#define ADC_CH3_P_PORT                           ULP
#endif
#ifndef ADC_CH3_P_PIN                           
#define ADC_CH3_P_PIN                            8
#endif
#ifndef ADC_CH3_P_LOC                           
#define ADC_CH3_P_LOC                            42
#endif

// ADC_CH3 N on GPIO_26
#ifndef ADC_CH3_N_PORT                          
#define ADC_CH3_N_PORT                           HP
#endif
#ifndef ADC_CH3_N_PIN                           
#define ADC_CH3_N_PIN                            26
#endif
#ifndef ADC_CH3_N_LOC                           
#define ADC_CH3_N_LOC                            367
#endif

// [ADC_CH3]$

// $[ADC_CH4]
// [ADC_CH4]$

// $[ADC_CH5]
// [ADC_CH5]$

// $[ADC_CH6]
// [ADC_CH6]$

// $[ADC_CH7]
// [ADC_CH7]$

// $[ADC_CH8]
// [ADC_CH8]$

// $[ADC_CH9]
// [ADC_CH9]$

// $[ADC_CH10]
// [ADC_CH10]$

// $[ADC_CH11]
// [ADC_CH11]$

// $[ADC_CH12]
// [ADC_CH12]$

// $[ADC_CH13]
// [ADC_CH13]$

// $[ADC_CH14]
// [ADC_CH14]$

// $[ADC_CH15]
// [ADC_CH15]$

// $[ADC_CH16]
// [ADC_CH16]$

// $[ADC_CH17]
// [ADC_CH17]$

// $[ADC_CH18]
// [ADC_CH18]$

// $[ADC_CH19]
// [ADC_CH19]$

// $[COMP1]
// [COMP1]$

// $[COMP2]
// [COMP2]$

// $[DAC0]
// [DAC0]$

// $[DAC1]
// [DAC1]$

// $[SYSRTC]
// [SYSRTC]$

// $[UULP_VBAT_GPIO]
// [UULP_VBAT_GPIO]$

// $[GPIO]
// [GPIO]$

// $[QEI]
// [QEI]$

// $[CUSTOM_PIN_NAME]
#ifndef _PORT                                   
#define _PORT                                    HP
#endif
#ifndef _PIN                                    
#define _PIN                                     6
#endif

// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H
