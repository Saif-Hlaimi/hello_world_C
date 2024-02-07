#include <stdio.h>

enum level {
    high = 'a',
    medium ,
    low
};

int main(){

    enum level nv;
    nv = medium;
    printf("%d",nv);



    return 0;
}