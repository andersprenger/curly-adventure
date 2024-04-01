//
//  Account.hpp
//  CPP Course
//
//  Created by Anderson Sprenger on 01/04/24.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>

class Account {
private:
    std::string name;
    double balance;
    
public:
    Account(std::string name, double balance);
    double getBalance();
    void setBalance(double newBalance);
    std::string getName();
    void setName(std::string newName);
    bool deposit(double amount);
    bool withdraw(double amount);
    std::string str();
};

#endif /* Account_hpp */
