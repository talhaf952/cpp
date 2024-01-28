#include<iostream>
using namespace std;
int main(){
    cout<<"Here we have Multidimensional Array of 0 and 1. We have to find ships and count them.\n";
    cout<<"1. Find number of ships available.\n";
    cout<<"2. Find coordinate of each ship found.\n"<<endl;
    int ships[4][4]={
        {0,1,0,0},
        {0,0,1,0},
        {1,0,0,1},
        {1,0,1,0}
    };
    int count=0;int pointer;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(ships[i][j]==1)
            {
                count++;
                cout<<count<<" Ship found at index ["<<i<<"]["<<j<<"].\n";
            }
        }
    }
    cout<<"\nThere are "<<count<<" Ships in this area."<<endl;
}
