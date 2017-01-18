//
//  main.c
//  TurkeyTimer
//
//  Created by jerrysher on 18/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int totalWeight = 10;
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    return 0;
}

int showCookTimeForTurkey (int pounds) {
    int necessasyMinutes = 15 + 15 * pounds;
    printf("Cook for %d minutes. \n", necessasyMinutes);
    return 0;
}
