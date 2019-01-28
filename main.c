#include <stdio.h>
#include <stdlib.h>
#include "gcode_decoder.h"
int main()
{
    printf("TEST\n");
    Location * loc = location_new(26,13,14);
    printf("X:%d,Y:%d,Z:%d\n",loc->x_loc,loc->y_loc,loc->z_loc);
    location_free(loc);
    return 0;
}