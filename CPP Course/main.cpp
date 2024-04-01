//
//  main.cpp
//  CPP Course
//
//  Created by Anderson Sprenger on 01/04/24.
//

#include <iostream>
#include "Account.hpp"

int main(int argc, const char * argv[]) {
    Account act1{};
    act1.setName("Anderson");
    act1.setBalance(400);
    
    std::cout << act1.str() << std::endl;
    
    act1.setName("Anderson Sprenger");
    if (act1.withdraw(500)) {
        std::cout << "Withdraw OK\n" << std::endl;
    } else {
        std::cout << "Withdraw FAIL\n" << std::endl;
    }
    
    std::cout << act1.str();
    
    return 0;
}
