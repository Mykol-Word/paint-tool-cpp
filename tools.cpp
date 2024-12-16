#include "tools.h"
#include "coordinate.h"
#include "color.h"
#include "canvas.h"

void draw_line(Canvas& canvas, Coordinate const& start_point, Coordinate const& end_point, Color const& color)
{
    Coordinate line_vector = (end_point - start_point)/(CANVAS_WIDTH*2);
    for(int i = 0; i < CANVAS_WIDTH*2; i++)
    {
        canvas.write(start_point + line_vector * i, color);
    }
}
