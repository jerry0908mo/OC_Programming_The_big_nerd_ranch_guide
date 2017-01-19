//
//  main.c
//  Triangle
//
//  Created by jerrysher on 18/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angleA, float angleB){
//    return 180 - angleA - angleB;
    if (angleB <=0 || angleA <= 0){
        return -1;
    }
    if (angleA >= 180 || angleB >= 180) {
        return -1;
    }
    return 180 - angleA - angleB;
}

void getAndShowSquarer(int value) {
    printf("\"%d\" squared is \"%d\"\n", value, (value * value));
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0f;
    float angleB = 60.0f;
    float angleC = remainingAngle(angleA, angleB);
    if (angleC < 0){
        printf("input angle has something wrong.\n");
    } else {
        printf("The third angle is %.2f.\n", angleC);
    }
    
    getAndShowSquarer(5);
    
    printf("\"It doesn't happen all at once\", said the Skin Horse.\n");
    return 0;
}
