#ifndef GCODE_DECODER_H
#define GCODE_DECODER_H

typedef struct location Location;

struct location{
    int x_loc;
    int y_loc;
    int z_loc;
};

Location *location_new(int x,int y,int z);

void location_free(Location * loc);

#endif