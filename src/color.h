#ifndef COLOR_H
#define COLOR_H

class Color
{
    public:
        int r;
        int g;
        int b;

        //Constructors
        Color() : r(255), g(255), b(255) {};
        Color(int r_val, int g_val, int b_val);
};

#endif