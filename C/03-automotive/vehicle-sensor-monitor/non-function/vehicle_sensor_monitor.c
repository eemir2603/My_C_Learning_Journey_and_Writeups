#include <stdio.h>

int main(void) {

    printf("Car Sensor Checker Initialized.\n");
    // Additional code for checking car sensors would go here
    printf("Please enter the sensor status (0-100): ");
    int sensorStatus = 0; // Placeholder for sensor status
    scanf("%d", &sensorStatus); // Simulate reading sensor status from user input
    printf("Sensor Status: %d\n", sensorStatus);
    
    // If statements 
    if (sensorStatus <= 80 && sensorStatus >= 20) {   // normal range
        printf("Sensor is within normal range.\n");
    } else if (sensorStatus > 80 && sensorStatus <= 100)   // high range
        printf("Sensor is high range, please check!\n");
    else if (sensorStatus < 20 && sensorStatus > 0)   // low range
        printf("Sensor is low range, please check!\n");
    else if (sensorStatus == 0)   // sensor is off range
        printf("Sensor is off, please check!\n");
    else if (sensorStatus > 100)   // sensor is out of range
        printf("Sensor is out of range, please check!\n");
    else if (sensorStatus < 0)   // sensor is negative
        printf("Sensor status cannot be negative, please check!\n");
    else    
        printf("Invalid sensor status input.\n");  // Handle unexpected input. 
        

    return 0;
}
