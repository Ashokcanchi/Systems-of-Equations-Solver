#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Equation.hpp"
using namespace std;


void getequations(vector<Equation> &);
void Interchange_Rows(vector<Equation>&);

int main() {
    unsigned int i;
    vector<Equation> num;
    string equation;
    getequations(num);
    Interchange_Rows(num);
    for (i = 0; i < num.size(); i++)
    {
        num.at(i).printCoefs();
    }
    return 0;
}
void getequations(vector<Equation> &num)
{
    istringstream ins;
    Equation temp;
    char c = 'y';
    string user;//consider using one getline in this line so you can just read in the user's variables once and store them
    while(c == 'y')
    {
        cout << "enter in an equation (e to exit):" << endl;
        getline(cin, user);
        temp.setRow(user);
        num.push_back(temp);
        cout << "Would you like to enter another equation?: ";
        cin >> c;
        cin.ignore();
        temp.clear();
    }
}

void Interchange_Rows(vector<Equation>& matrix)
{
    int i = 0;
    int entry;
    Equation temp;
    bool is_enough_entries = true;
    while(i < matrix.size() && i < matrix.at(0).getSize() - 1)
    {
        entry = i + 1;
        while(matrix.at(i).is_zero(i) && entry < matrix.size())
        {
               if(!matrix.at(entry).is_zero(i))
               {
                    temp = matrix.at(i);
                    matrix.at(i) = matrix.at(entry);
                    matrix.at(entry) = temp;
                    entry++;
               }
        }
        i++; //output step
    }
}
