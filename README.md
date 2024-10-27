# STM32 Servo Motor Control using PWM

This project demonstrates the control of a servo motor using PWM (Pulse Width Modulation) on the STM32 microcontroller. The servo motor angle is adjusted by generating PWM signals with varying duty cycles. This project uses an external servo library (`Pratz/SERVO.h`) to streamline control commands and enhance modularity.

## Project Overview

### Features
- Control a servo motor with STM32 using PWM signals.
- Adjust servo motor positions with precise angle values.
- Simple interface for initializing and controlling servo motors.

### Requirements
- **Hardware**:
  - STM32 microcontroller
  - Servo motor
  - External power supply (if needed by the servo motor)

- **Software**:
  - STM32CubeIDE or any compatible STM32 development environment
  - Servo control library (`Pratz/SERVO.h`)

### Connections
- Connect the servo signal pin to a PWM-capable GPIO pin on the STM32 microcontroller.
- Provide appropriate power (5V or 6V) to the servo motor according to its specifications.

### Code Functions
1. **Initialization**:
   - `HAL_Init()`, `SystemClock_Config()`, and `MX_GPIO_Init()` initialize the STM32 HAL, configure the system clock, and set up GPIO.
   - `SERVO_Init(SERVO_Motor1)` initializes the servo motor for control on the specified channel.

2. **Servo Movement**:
   - `SERVO_MoveTo(SERVO_Motor1, angle)` adjusts the servo to the specified angle.
   - The code cycles through angles 0°, 45°, 90°, 120°, 180°, and back to 90°, pausing for a defined time between each transition.

## Usage Instructions

1. **Compile and Upload**:
   - Open the project in STM32CubeIDE or your preferred STM32 development environment.
   - Compile the code and upload it to the STM32 microcontroller.

2. **Observe Servo Movements**:
   - Power the setup, and observe the servo motor moving to each specified angle.
   - Modify angles or delays to customize the behavior.

## Pin Configuration

Configure the following pins as per your STM32 model’s capabilities for PWM control:
- `PWM Pin`: Connect this to the servo motor signal pin (choose a PWM-capable GPIO pin).

## Further Customization

- Modify the angles in `SERVO_MoveTo()` and the delay values to create different movement patterns.
- Use additional servo motors by defining more channels and configuring corresponding PWM pins.

## References
- [STM32 HAL documentation](https://www.st.com/)
- [Servo Motor PWM Control Guide](https://en.wikipedia.org/wiki/Servo_control)
