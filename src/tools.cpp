#include <math.h>
#include "tools.h"
#include "coordinate.h"
#include "color.h"
#include "canvas.h"


void draw_line(Canvas& canvas, Coordinate const& start_point, Coordinate const& end_point, Color const& color, int const thickness = 1)
{
    Coordinate line_vector = (end_point - start_point);
    float dist = sqrt(pow(line_vector.x,2) + pow(line_vector.y,2)); // Maybe make coord funtion which does this instead
    line_vector = line_vector/dist;

    for(int i = 0; i < (int)(dist + 1); i++)
    {
        for(int h = -thickness; h < thickness; h++)
        {
            for(int w = -thickness; w < thickness; w++)
            {
                canvas.write(start_point + Coordinate(0,1) * h + Coordinate(1,0) * w + line_vector * i, color);
            }
        }
    }
}
