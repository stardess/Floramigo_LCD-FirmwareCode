// main/Floramigo_Sensors.c
#include <stdio.h>
#include "Floramigo_Sensors.h"

// Definitions (with sensible defaults)
float humidity_percent = 0.0f;
float temp_c           = 0.0f;
// const char *soil_state = "Unknown";
// const char *light_level= "Unknown";

char soil_state[FLORAMIGO_STR_MAX]  = "Unknown";
char light_level[FLORAMIGO_STR_MAX] = "Unknown";

void floramigo_set_env(float humidity, float temp,
                       const char *soil, const char *light)
{
    humidity_percent = humidity;
    temp_c           = temp;
    // soil_state       = soil ? soil : "Unknown";
    // light_level      = light ? light : "Unknown";
    snprintf(soil_state,  FLORAMIGO_STR_MAX, "%s", soil  ? soil  : "Unknown");
    snprintf(light_level, FLORAMIGO_STR_MAX, "%s", light ? light : "Unknown");
}
