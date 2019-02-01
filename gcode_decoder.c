#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gcode_decoder.h"


///Reference
///struct_var.int_member = 0;
///struct_var->int_number = 0; // this statement is equivalent to: *struct_var.int_number = 0;


Location * location_new(int x,int y, int z)
{
    Location *loc = NULL;
    loc = (Location*)malloc(sizeof(Location));
    loc->x_loc = x;
    loc->y_loc = y;
    loc->z_loc = z;
    return loc;
}


void location_free(Location * loc){
    free(loc);
}

char * gcode_generation(Location *loc){
    char gcodeloc[75];
    strcpy(gcodeloc, "G00 X%d Y%d Z%d F400\n",loc->x_loc,loc->y_loc,loc->z_loc);
    return gcodeloc;
}

