#include <iostream>
using namespace std;

//Dimensions
const int SCREEN_WIDTH = 256;
const int SCREEN_HEIGHT = 256;

int main() 
{
    // P3: ASCII .ppm, SCREEN_WIDTH x SCREEN_HEIGHT, 255 max
    cout << "P3\n" << SCREEN_WIDTH << ' ' << SCREEN_HEIGHT << "\n255\n";

    for(int h = 0; h < SCREEN_HEIGHT; h++)
    {
        //Progress
        clog << "\rLines Remaining: " << SCREEN_HEIGHT - h << ' ' << flush;

        //Output Gradient
        for(int w = 0; w < SCREEN_WIDTH; w++)
        {
            cout << h << ' ' << w << ' ' << h << ' ' << endl;
        }
    }

    //Done
    clog << "\rDone.                  ";
}