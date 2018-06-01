//
//  main.cpp
//  ToughBeingTeen
//
//  Created by Alex Yu Chen Ni on 2018-05-25.
//  Copyright © 2018 Alex Yu Chen Ni. All rights reserved.
//

/* http://www.cemc.uwaterloo.ca/contests/computing/2006/stage1/juniorEn.pdf */

#include <iostream>
#include <vector>
#include <queue>

struct node {
    std::vector<int> prev;
};

node* takeInput();
int* sort(node* a);

int main(int argc, const char * argv[]) {

    int* arr = sort(takeInput());

    if(arr[0] == -1) {
        std::cout << "The tasks cannot be completed.\n";
    }
    else {
        for(int i = 0; i < 7; i++) {
            std::cout << arr[i] << "\n";
        }
    }
    
    return 0;
}

node* takeInput() {

    node list[15];
    list[0].prev.push_back(6);
    list[0].prev.push_back(3);
    list[1].prev.push_back(0);
    list[2].prev.push_back(3);
    list[2].prev.push_back(4);

    while(true) {

        int a, b;
        std::cin >> a;
        std::cin >> b;

        if(a == 0 && b == 0) {
            break;
        }

        list[a - 1].prev.push_back(b);

    }

}

int* sort(node* a) {

    int* arr = new int[7];

    

    return arr;

}