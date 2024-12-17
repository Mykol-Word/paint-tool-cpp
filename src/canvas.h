#ifndef CANVAS_H
#define CANVAS_H

#define CANVAS_WIDTH 256
#define CANVAS_HEIGHT 256

#include "color.h"
class Coordinate;

class Canvas
{
    public:
        //Set functions
        bool write(Coordinate const& coordinate, Color const& color);
        void clear();

        //Get functions
        Color get_color(Coordinate const& coordinate);
    private:
        Color color_matrix [CANVAS_HEIGHT][CANVAS_WIDTH];
};

#endif