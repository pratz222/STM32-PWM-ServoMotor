#include "main.h"
#include "Pratz/SERVO.h"
 
#define SERVO_Motor1   0
 
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
 
int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    SERVO_Init(SERVO_Motor1);
    while (1)
    {
        SERVO_MoveTo(SERVO_Motor1, 0);
        HAL_Delay(1000);
        SERVO_MoveTo(SERVO_Motor1, 45);
        HAL_Delay(500);
        SERVO_MoveTo(SERVO_Motor1, 90);
        HAL_Delay(500);
        SERVO_MoveTo(SERVO_Motor1, 120);
        HAL_Delay(500);
        SERVO_MoveTo(SERVO_Motor1, 180);
        HAL_Delay(500);
        SERVO_MoveTo(SERVO_Motor1, 90);
        HAL_Delay(1000);
    }
