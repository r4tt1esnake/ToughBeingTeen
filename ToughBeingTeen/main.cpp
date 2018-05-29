//
//  main.cpp
//  ToughBeingTeen
//
//  Created by Alex Yu Chen Ni on 2018-05-25.
//  Copyright © 2018 Alex Yu Chen Ni. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    /* http://www.cemc.uwaterloo.ca/contests/computing/2006/stage1/juniorEn.pdf */
    
    bool taskList[7][7] = {false};
    taskList[0][6] = true;
    taskList[0][3] = true;
    taskList[1][0] = true;
    taskList[2][3] = true;
    taskList[2][4] = true;
    
    while(true) {
        
        int a, b;
        std::cin >> a;
        std::cin >> b;
        
        if(a == 0 && b == 0) {
            break;
        }
        
        a--;
        b--;
        
        taskList[a][b] = true;
        
    }
    
    
    
    return 0;
}
