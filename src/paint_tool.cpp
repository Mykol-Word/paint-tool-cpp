#include <iostream>
#include "tools.h"
#include "coordinate.h"
#include "color.h"
#include "canvas.h"

using namespace std;

int main() 
{
    Canvas canvas;
    draw_line(canvas, Coordinate(0,0), Coordinate(255,255), Color(0,0,0), 3);
    draw_line(canvas, Coordinate(20,40), Coordinate(255,200), Color(56,23,180), 5);
    draw_line(canvas, Coordinate(255,0), Coordinate(0,255), Color(100,0,0), 1);

    // P3: ASCII .ppm, CANVAS_WIDTH x CANVAS_HEIGHT, 255 max
    cout << "P3\n" << CANVAS_WIDTH << ' ' << CANVAS_HEIGHT << "\n255\n";

    for(int h = CANVAS_HEIGHT - 1; h >= 0; h--)
    {
        //Progress
        clog << "\rLines Remaining: " << h << ' ' << flush;

        //Output
        for(int w = 0; w < CANVAS_WIDTH; w++)
        {
            cout << canvas.get_color(Coordinate(w,h)).r << ' ' << canvas.get_color(Coordinate(w,h)).g << ' ' << canvas.get_color(Coordinate(w,h)).b << ' ' << endl;
        }
    }

    //Done
    clog << "\rDone.                  ";
}