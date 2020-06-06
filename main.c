#include <stdio.h>
#include "sub.h"

int mian(){

    printf("thsis is my calculator\n");
    double x = 2;
    double y = 3;
    printf("%lf - %lf = %lf\n", x, y, mySubFcn(x, y));
}
