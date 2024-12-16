#pragma once

enum TupleType{
    VECTOR = 0,
    POINT = 1
};

class Tuple{
public:
        Tuple(float x,float y, float z, int w);
        bool isTuple(TupleType type);
        float getX();
        float getY();
        float getZ();
        int getW();
        void setX(float x);
        void setY(float y);
        void setZ(float z);
        void setW(int w);
private:
        float m_x, m_y, m_z;
        int m_w;

};


Tuple Point(float x,float y, float z);

Tuple Vector(float x,float y, float z);
