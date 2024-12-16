#include "color.h"
#include <algorithm>

Color::Color(int r_val, int g_val, int b_val)
{
    r = std::clamp(r_val, 0, 255);
    g = std::clamp(g_val, 0, 255);
    b = std::clamp(b_val, 0, 255);
}