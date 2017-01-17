//
//  main.c
//  ClassCertificates
//
//  Created by jerrysher on 17/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    congratulateStudent("Kate", "Cocoa", 5);
    congratulateStudent("Bo", "Objective-C", 2);
    congratulateStudent("Mike", "Python", 5);
    congratulateStudent("Liz", "iOS", 5);
    return 0;
}

int congratulateStudent (char *student, char *course, int numDays) {
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
    return 0;
}
