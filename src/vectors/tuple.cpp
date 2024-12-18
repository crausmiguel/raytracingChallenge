#include "tuple.h"
#include "utils/utils.cc"

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

bool compareTuples(Tuple& tupleX, Tuple& tupleY){
       return compareFloat(tupleX.getX(), tupleY.getX()) &&
       compareFloat(tupleX.getY(), tupleY.getY()) &&
       compareFloat(tupleX.getZ(), tupleY.getZ()) &&
       compareFloat(tupleX.getW(), tupleY.getW());
}

Tuple addTuple(Tuple& tupleX, Tuple& tupleY){
       float x = tupleX.getX() + tupleY.getX();
       float y = tupleX.getY() + tupleY.getY();
       float z = tupleX.getZ() + tupleY.getZ();
       float w = tupleX.getW() + tupleY.getW();
       return Tuple(x,y,z,w);
}

Tuple subtractTuple(Tuple& tupleX, Tuple& tupleY){
       float x = tupleX.getX() - tupleY.getX();
       float y = tupleX.getY() - tupleY.getY();
       float z = tupleX.getZ() - tupleY.getZ();
       float w = tupleX.getW() - tupleY.getW();
       return Tuple(x,y,z,w);

}

Tuple negateTuple(Tuple& tupleX){

       Tuple zeroTuple = Tuple(0,0,0,0);
       Tuple negatedTuple = subtractTuple(tupleX, zeroTuple);
       return negatedTuple;
}








