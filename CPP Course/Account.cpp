//
//  Account.cpp
//  CPP Course
//
//  Created by Anderson Sprenger on 01/04/24.
//

#include "Account.hpp"
#include <sstream>


// MARK: - Builder

Account::Account(std::string n, double b) {
    name = n;
    balance = b;
}

// MARK: - Getters & Setters

double Account::getBalance() {
    return balance;
}

void Account::setBalance(double newBalance) {
    balance = newBalance;
}

std::string Account::getName() {
    return name;
}

void Account::setName(std::string newName) {
    name = newName;
}

// MARK: Methods

bool Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        return true;
    } 
    // else
    return false;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    // else
    return false;
}

std::string Account::str() {
    std::ostringstream aux; // something like java stringbuilder...
    
    aux << "Name: " << getName() << std::endl;
    aux << "Balance: " << getBalance() << std::endl;
    
    return aux.str();
}


