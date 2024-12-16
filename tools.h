#ifndef TOOLS_H
#define TOOLS_H

class Coordinate;
class Color;
class Canvas;

void draw_line(Canvas& canvas, Coordinate const& start_point, Coordinate const& end_point, Color const& color);

#endif