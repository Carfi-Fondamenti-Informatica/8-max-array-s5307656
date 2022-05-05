#include "lib.h"
float max (float array [], int d )
{
    float m = array [0];
    for (int i =1; i<d; i++){
        if (array[i]>m){
            m= array [i];
        }
    }
    return m;
}
