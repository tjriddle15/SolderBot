#ifndef GCODE_DECODER_H
#define GCODE_DECODER_H

typedef struct location Location;

struct location{
    int x_loc;
    int y_loc;
    int z_loc;
};

//enum Gcode{"G00"};
//G00 is a rapid positioning(moves 2 axis at once)
//G01 is a linear interpolation(moves 1 axis at once)


void gcode_generation(Location *loc,char *gcodeloc);

Location *location_new(int x,int y,int z);

void location_free(Location * loc);

#endif