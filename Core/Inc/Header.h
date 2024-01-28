#include "stm32f4xx_hal.h"
#include "stdbool.h"
#include "main.h"
#ifndef _Header_
#define _Header_

/*Variabel Global*/
#ifndef Global_Variable
extern uint32_t adcBuffer[16];
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart6;

/* GUI DATA	*/
extern unsigned int timerCount;
//extern int count; 
extern bool flagSucces;
extern bool flag;
extern int selectedSensingMode;
extern unsigned int valueSetInterval;
extern uint8_t hour;
extern uint8_t minute;
extern uint8_t second;
extern uint8_t day;
extern uint8_t month;
extern uint8_t year;
extern bool flagSensorActive[17];
extern char temp1[40],temp2[40],temp2[40],temp3[40],temp4[40],temp5[40],temp6[40],temp7[40],
	temp8[40],temp9[40],temp10[40],temp11[40],temp12[40],temp13[40],temp14[40],temp15[40],temp16[40];
/* SENSOR GLOBAL VARIABLE */
extern float currentSegment[16];
extern uint8_t dataSeg[16];
/* COMMUNICATION GLOBAL VARIABLE */
extern char tx[128];
extern bool flagRx;
extern char dateTime[128];
extern char dataF1[128];

//DISPLAY-SIZE
#endif

/* Button Initialization */
//GPIOD GPIO_PIN_0
#ifndef BUTTON
#define BUTTON_TEST_PORT			BT9_GPIO_Port
#define	BUTTON_TEST_PIN				BT9_Pin

#define BUTTON_MUTE_PORT			BT2_GPIO_Port
#define BUTTON_MUTE_PIN				BT2_Pin

#define BUTTON_RESET_PORT			BT2_GPIO_Port
#define BUTTON_RESET_PIN			BT2_Pin

#define BUTTON_SILENT_PORT		BT8_GPIO_Port
#define BUTTON_SILENT_PIN			BT8_Pin

#define BUTTON_UP_PORT				BT4_GPIO_Port
#define BUTTON_UP_PIN					BT4_Pin

#define BUTTON_DOWN_PORT			BT6_GPIO_Port
#define BUTTON_DOWN_PIN				BT6_Pin //4

#define BUTTON_LEFT_PORT			BT7_GPIO_Port
#define BUTTON_LEFT_PIN				BT7_Pin

#define BUTTON_RIGHT_PORT			BT2_GPIO_Port
#define BUTTON_RIGHT_PIN			BT2_Pin

#define BUTTON_OK_PORT				BT5_GPIO_Port
#define BUTTON_OK_PIN					BT5_Pin

//#define BUTTON_UNUSE_PORT			GPIOC
//#define BUTTON_UNUSE_PIN			GPIO_PIN_9
#endif

#define BUTTON_PROG_PORT			BT0_GPIO_Port
#define BUTTON_PROG_PIN				BT0_Pin

#define BUTTON_High(GPIOx, GPIO_Pin)		HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
#define BUTTON_Low(GPIOx, GPIO_Pin)			HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_LOW);
#define BUTTON_Read(GPIOx, GPIO_Pin)		HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);

#define HIGH	GPIO_PIN_SET 		
#define LOW		GPIO_PIN_RESET	
/* GUI */
extern void checkButton();
extern int buttonPress(GPIO_TypeDef *port, uint16_t pin, int delay);
extern void interface(void);
int menuSensingMode(void);
int menuScanSensor(void);
int menuSetThreshold(void);
int menuSetNameZone(void);
int menuSetDateTime(void);
int selectMenu(void);
/* IO */
extern void buzzerOn(int delay);
extern void buzzerOff(int delay);
extern void relayOn(int number);
extern void relayOff(int number);
extern void limitOn(int number);
extern void limitOff(int number);
extern void buzzerBlink(int delay);
/* SENSOR */
extern void getSensor(void);
extern int scanSensor(void);
extern void modeSingleWire(void);
extern void modeCrossWire(void);
extern void checkSortAndOpenCircuit(void);
extern void checkOverCurrentSensor(void);
extern void resetLimitSensor(void);
void checkSupply(void);
/* COMMUNICATION */
extern void parsingDataF1(void);
extern void sendDateTime(void);
extern void sendDataSegment(void);
extern void sendDataSegment2(void);
extern void sendDataSegment3(void);
#endif












