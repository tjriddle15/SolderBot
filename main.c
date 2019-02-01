#include <stdio.h>
#include <stdlib.h>
#include "gcode_decoder.h"
int main()
{

    Location * loc = location_new(26,13,14);///dynamically allocates and constructs a location struct and returns a pointer to that struct
    printf("X:%d,Y:%d,Z:%d\n",loc->x_loc,loc->y_loc,loc->z_loc);
    char *gcode = gcode_generation(loc);
    printf(gcode);
    location_free(loc);
    return 0;
}