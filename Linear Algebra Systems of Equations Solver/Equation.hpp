//
//  Equation.hpp
//  C++
//
//  Created by Ashok Canchi on 10/20/21.
//

#ifndef Equation_hpp
#define Equation_hpp

#include <iostream>
#include <vector>
using namespace std;
class Equation {
public:
    Equation() { _row = 0;};
    void setRow(string);
    void printRow();
    void printCoefs();
    void setRow_num(int);
    double getCoef(int);
    Equation operator+(Equation &);
    Equation operator*(double);
    void setCoefs();
    void settingCoefs(vector<double> &user) {coefs = user;}
    Equation(vector<double>&);
    //void setRow(vector<int>&);
    int getSize() const;
    void resize(int);
    bool is_zero(int) const;
    void clear();
private:
    int _row;
    int size = 0;
    unsigned int _column;
    string user;
    vector<double> coefs;
    
};
#endif /* Equation_hpp */
