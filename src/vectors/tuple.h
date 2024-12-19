#pragma once

enum TupleType{
    VECTOR = 0,
    POINT = 1
};

class Tuple{
public:
        Tuple(float x,float y, float z, float w);
        Tuple operator-() const {
                return Tuple(-m_x,-m_y,-m_z,-m_w);
        }
        float getX();
        float getY();
        float getZ();
        float getW();
        void setX(float x);
        void setY(float y);
        void setZ(float z);
        void setW(float w);
public:
        bool isTuple(TupleType type);

private:
        float m_x, m_y, m_z, m_w;
};

Tuple Point(float x,float y, float z);

Tuple Vector(float x,float y, float z);

Tuple addTuple(Tuple& tupleX, Tuple& tupleY);

Tuple subtractTuple(Tuple& tupleX, Tuple& tupleY);

Tuple negateTuple(Tuple& tuple);

Tuple scalarTuple(Tuple& tuple, float scalar);

bool compareTuples(Tuple& tupleX, Tuple& tupleY);

