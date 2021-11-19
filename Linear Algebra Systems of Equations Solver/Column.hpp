//
//  Column.hpp
//  Linear Algebra Systems of Equations Solver
//
//  Created by Ashok Canchi on 11/13/21.
//

#ifndef Column_hpp
#define Column_hpp

#include <iostream>
#include <vector>
using namespace std;
class Column
{
public:
    void setColumn(vector<int>&);
    int getSize() const;
    bool is_zero(int) const;
private:
    vector<int> nums;
};

#endif /* Column_hpp */
