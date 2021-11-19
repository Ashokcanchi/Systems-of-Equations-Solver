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
    vector<int> getCoefs();
    vector<int> operator+(Equation &);
    vector<int> operator*(int &);
    void setCoefs();
    void settingCoefs(vector<int> &user) {coefs = user;}
    Equation(vector<int>&);
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
    vector<int> coefs;
    
};
#endif /* Equation_hpp */
