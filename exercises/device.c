#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int serialNumber;
    char model[30];
    float batteryLevel;

} Device;
 
int main()
{

    Device *d = NULL;
    d = malloc(sizeof(Device));
    d->serialNumber = 5555;
    strcpy(d->model, "Sensor-X");
    d->batteryLevel = 76.5;

    printf("Device Serial: %d\n", d->serialNumber);
    printf("Device Model: %s\n", d->model);
    printf("Device Level: %.1f\n", d->batteryLevel);

    return 0;
}
