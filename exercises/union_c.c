#include <stdio.h>

typedef union
{
    int temperature;
    double humidity;
} SensorData;

typedef struct
{
    int temperature;
    float humidity;
} SensorInfo;

int main(void)
{
    SensorData data;
    SensorInfo s_data;

    // printf("1. Enter value of temperature a: ");
    // scanf("%d", &data.temperature);
    // printf("temperature: %d\n", data.temperature);

    // printf("value for humidity: ");
    // scanf("%lf", &data.humidity);

    // printf("humidity: %.2f\n", data.humidity);
    // printf("sizeof union 'SensorData': %lu\n", sizeof(data));

    // using structures.
    printf("2. Re-Enter value of temperature and value for humidity: ");
    scanf("%d", &s_data.temperature);
    scanf("%f", &s_data.humidity);

    printf("temperature: %d\n", s_data.temperature);
    printf("humidity: %.2f\n", s_data.humidity);
    printf("sizeof union 'SensorData': %lu\n", sizeof(s_data));

    return 0;
}