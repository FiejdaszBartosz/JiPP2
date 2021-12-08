//
// Created by Bartek on 07.12.2021.
//

#include<iostream>
using namespace std;
int main()
{
    int array[]={1,4,7,4,8,4};
    cout<<"Elementy: ";
    for(auto& var : array)
    {
        cout<<var<<" ";
    }
    return 0;
}