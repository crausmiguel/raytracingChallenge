#include "tuple.h"

Tuple::Tuple(float x, float y, float z, int w){
       m_x = x;
       m_y = y;
       m_z = z;
       m_w = w;
}

float Tuple::getX(){
       return m_x;
};

void Tuple::setX(float x){
       m_x = x;
};

float Tuple::getY(){
       return m_y;
};

void Tuple::setY(float y){
       m_y = y;
};

float Tuple::getZ(){
       return m_z;
};

void Tuple::setZ(float z){
       m_z = z;
};

int Tuple::getW(){
       return m_w;
};

void Tuple::setW(int w){
       m_w = w;
};

bool Tuple::isTuple(TupleType type){
       return m_w == type;
}

Tuple Vector(float x, float y, float z){
    return Tuple(x, y, z, TupleType::VECTOR);
}

Tuple Point(float x, float y, float z){
    return Tuple(x, y, z, TupleType::POINT);
}





