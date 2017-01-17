//
//  main.c
//  TwoFloats
//
//  Created by jerrysher on 17/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>
#include <objc/objc.h>

int main(int argc, const char * argv[]) {
    float a = 0;
    a = 3.14;
    float b = 0;
    b = 42.0;
    double c = a + b;
    
    printf("%f + %f =  %f \n", a, b, c);
    //输出结果是、2.800000 + 81.800003 =  84.600006
    
    BOOL isOK = a > 0 && b > 0 && c < 80;
    //BOOL 在 oc 中常用，c 中需要导入 objc/objc.h
    if (isOK) {
        printf("this is no too large.\n");
    }
    
    
    //if /else & else if
    int i = 20;
    int j = 25;
    int k = ( i > j ) ? 10 : 5;
    
    if ( 5 < j - k ) {
        printf("The first expression is true\n");
    } else  if (j > 1) {
        printf("The second expression is true\n");
    } else {
        printf("Neither expresion is true\n");
    }
    return 0;
}
