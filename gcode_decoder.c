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

void gcode_generation(Location *loc, char *gcodeloc){
    char tempgloc[15];
    strcpy(gcodeloc, "G00 X");
    sprintf(tempgloc, "%d Y", loc->x_loc);
    strcat(gcodeloc, tempgloc);
    sprintf(tempgloc, "%d Z", loc->y_loc);
    strcat(gcodeloc, tempgloc);
    sprintf(tempgloc, "%d f400", loc->z_loc);
    strcat(gcodeloc, tempgloc);

}

