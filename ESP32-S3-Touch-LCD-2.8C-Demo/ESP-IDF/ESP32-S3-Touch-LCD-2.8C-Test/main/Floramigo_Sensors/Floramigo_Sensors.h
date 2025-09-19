// main/Floramigo_Sensors.h
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FLORAMIGO_STR_MAX 16

extern char soil_state[FLORAMIGO_STR_MAX];  // e.g., "Dry", "Wet", "Moist"
extern char light_level[FLORAMIGO_STR_MAX]; // e.g., "Dark", "Bright", "Dim"

// Live sensor values you want to show on the LCD
extern float humidity_percent;   // e.g., 66.0
extern float temp_c;             // e.g., 30.2

// (Optional) helpers to update them safely from other tasks
void floramigo_set_env(float humidity, float temp,
                       const char *soil, const char *light);

#ifdef __cplusplus
}
#endif
