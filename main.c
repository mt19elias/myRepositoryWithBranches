#include <stdio.h>
#include "sub.h"
#include "add.h"

int mian(){
    printf("thsis is my calculator\n");
    
    double x = 1;
    double y = 2;
    printf("%lf + %lf = %lf\n", x,y,myAddFcn(x,y));


    double x = 2;
    double y = 3;
    printf("%lf - %lf = %lf\n", x, y, mySubFcn(x, y));

}
