#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
    public:
        float x;
        float y;

        //Operator Overloads
        Coordinate operator+(Coordinate const& obj) const { return Coordinate(x + obj.x, y + obj.y); }; // +
        Coordinate operator-(Coordinate const& obj) const { return Coordinate(x - obj.x, y - obj.y); }; // -
        Coordinate operator*(float const& mult) const { return Coordinate(x * mult, y * mult); };
        Coordinate operator/(float const& mult) const { return Coordinate(x / mult, y / mult); };

        //Constructors
        Coordinate() : x(0), y(0) { };
        Coordinate(float x_coord, float y_coord) : x(x_coord), y(y_coord) { };
};

#endif