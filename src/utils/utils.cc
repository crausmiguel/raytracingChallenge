#include <math.h>

const float EPSILON = 1e5;

inline bool compareFloat(float x, float y){
    return abs(x - y) < EPSILON;
}
