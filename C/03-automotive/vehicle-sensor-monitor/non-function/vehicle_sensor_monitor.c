#include <stdio.h>

int main(void) {

    printf("Car Sensor Checker Initialized.\n");
    printf("Please enter the sensor status (0-100): ");

    int sensorStatus = 0;

    if (scanf("%d", &sensorStatus) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Sensor Status: %d\n", sensorStatus);

    if (sensorStatus >= 20 && sensorStatus <= 80) {
        printf("Sensor is within normal range.\n");
    } else if (sensorStatus > 80 && sensorStatus <= 100) {
        printf("Sensor is high range, please check!\n");
    } else if (sensorStatus < 20 && sensorStatus > 0) {
        printf("Sensor is low range, please check!\n");
    } else if (sensorStatus == 0) {
        printf("Sensor is off, please check!\n");
    } else if (sensorStatus > 100) {
        printf("Sensor is out of range, please check!\n");
    } else if (sensorStatus < 0) {
        printf("Sensor status cannot be negative, please check!\n");
    }

    return 0;
}
