//
// Created by Bartek on 07.12.2021.
//

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={11,22,33,44,55,66};
    cout<<"Elementy: ";
    for(auto& var : vec)
    {
        cout<<var<<" ";
    }
    return 0;
}