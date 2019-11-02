#ifndef WPROGRAM_H
#define WPROGRAM_H

#include <stdint.h>
#include <math.h>
#include "esp_timer.h"

#define TWO_PI M_TWOPI
#define sq(x) ((x)*(x))
#define radians(x) ((x)*M_PI/180)
#define degrees(x) ((x)*180/M_PI)
#define millis() (esp_timer_get_time() / 1000)

typedef uint8_t byte;

#endif