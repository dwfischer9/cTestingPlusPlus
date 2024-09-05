//
//  compareAge.cpp
//  cTestingPlusPlus
//
//  Created by Daniel Fischer on 2024-09-05.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // this is one type of C++ comment
    std::cout << "Enter your age.\n";
    int myAge;
    std::cin >> myAge;
    /* this is a C++ multiple
     line comment*/
    std::cout << "Enter a friend's age.\n";
    int friendAge;
    std::cin >> friendAge;
    
    if(myAge >friendAge)
        std::cout << "You are older\n";
    else
        if(myAge == friendAge)
            std::cout << "You and your friend are the same age.\n";
        else
            std::cout << "You are younger than your friend.\n";
    return 0;
}
