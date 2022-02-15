//
//  Equation.cpp
//  C++
//
//  Created by Ashok Canchi on 10/20/21.
//

#include "Equation.hpp"
#include <sstream>
Equation Equation::operator*(double num)//letting an equation be multiplied by a number
{
    Equation product;
    unsigned int i;
    for(i = 0; i < coefs.size(); i++)
    {
        product.coefs.push_back(coefs.at(i) * num);
    }
    return product;
    
}
Equation Equation::operator+(Equation &rhs)//Adding two equations(two rows of equations) together
{
    unsigned int i;
    Equation sum;
    for(i = 0; i < coefs.size(); i++)
    {
        sum.coefs.push_back(coefs.at(i) + rhs.coefs.at(i));
    }
    return sum; 
}
void Equation::setCoefs() //storing the coefficients from the user-inputted equation
{
    double coef;
    char sign, sign2;
    istringstream ins;
    ins.str(user);
    while(ins >> coef)
    {
        ins >> sign >> sign2;
        coefs.push_back(coef);
        size++;
    }   
}
double Equation::getCoef(int index)
{
    return coefs.at(index);
}
void Equation::printCoefs()
{
    unsigned int i;
    for(i = 0; i < coefs.size(); i++)
    {
        cout << coefs.at(i) << " ";
    }
    cout << endl;
}
void Equation::printRow()
{
    cout << user << endl;
}
void Equation::setRow(string user_r)
{
    user = user_r;
    setCoefs();
}
void Equation::setRow_num(int user)
{
    _row = user;
}

Equation::Equation(vector<double>& user_r)
{
    coefs = user_r;
}

int Equation::getSize() const
{
    return coefs.size();
}
void Equation::resize(int new_size)
{
    coefs.resize(new_size, 0);//research what resize does
}
bool Equation::is_zero(int index) const
{
    bool temp;
    if(coefs.at(index) == 0)
        temp = true;
    else
        temp = false;
    return temp;
}
void Equation::clear()
{
    coefs.clear();
}
