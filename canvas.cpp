#include "canvas.h"
#include "coordinate.h"
#include "color.h"

bool Canvas::write(Coordinate const& coordinate, Color const& color)
{
    if(coordinate.x < 0 || coordinate.x > 255 || coordinate.y < 0 || coordinate.y > 255) { return false; }
    color_matrix[(int)coordinate.y][(int)coordinate.x] = color;
    return true;
}

void Canvas::clear()
{
    for(int h = 0; h < CANVAS_HEIGHT; h++)
    {
        for(int w = 0; w < CANVAS_WIDTH; w++)
        {
            color_matrix[h][w] = Color();
        }
    }
}

Color Canvas::get_color(Coordinate const& coordinate)
{
    return color_matrix[(int)coordinate.y][(int)coordinate.x];
}