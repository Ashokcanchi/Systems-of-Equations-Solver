//
//  Column.cpp
//  Linear Algebra Systems of Equations Solver
//
//  Created by Ashok Canchi on 11/13/21.
//

#include "Column.hpp"
void Column::setColumn(vector<int>& user_c)
{
    nums = user_c;
}
int Column::getSize() const
{
    return nums.size();
}
bool Column::is_zero(int index) const
{
    bool temp;
    if(nums.at(index) == 0)
        temp = true;
    else
        temp = false;
    return temp;
}
