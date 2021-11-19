//
//  Equation.hpp
//  C++
//
//  Created by Ashok Canchi on 10/20/21.
//

#ifndef Equation_h
#define Equation_h

#include <iostream>
#include <vector>
using namespace std;
class Equation {
public:
    void setRow(string);
    void printRow();
    void printCoefs();
    vector<int> getCoefs();
    vector<int> operator+(Equation &);
    vector<int> operator*(int &);
private:
    void setCoefs();
    string user;
    vector<int> coefs;
    
};
#endif /* Equation_hpp */
