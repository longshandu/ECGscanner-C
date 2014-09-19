#ifndef SENSOR_H
#define SENSOR_H

#include <stdio.h>
#include <stdlib.h>
#include "globals.h"
#include "utils.h"

int getNextData(); // Please implement me in Sensor.c
int movAvg(int ym0, int xold, int xnew, int N);


#endif
