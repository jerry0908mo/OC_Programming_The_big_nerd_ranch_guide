//
//  main.c
//  Adrress
//
//  Created by jerrysher on 19/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    printf("i stores its value at %p\n", &i);
    printf("this function starts at %p\n", &main);
    
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    printf("the int stored at addressOfI is %d\n", *addressOfI);
    *addressOfI = 89;
    printf("now i is %d\n", i);
    return 0;
}
