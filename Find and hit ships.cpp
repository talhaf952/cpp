#include<iostream>
using namespace std;
int main(){
    cout<<"Here we have Multidimensional Array of 0 and 1. There are 6 ships. We have to find ships and kill them. Also tell remaining ships.\n";
    cout<<"1. Find & kill ships.\n";
    cout<<"2. Find coordinate of each ship found.\n";
    cout<<"3. Tell Ships left after killing each.\n"<<endl;
    int ships[4][4]={
        {0,1,0,0},
        {0,0,1,0},
        {1,0,0,1},
        {1,0,1,0}
    };
    int count=6;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(ships[i][j]==1)
            {
                cout<<"==>No. "<<count<<" Ship found and kill at index ["<<i<<"]["<<j<<"].\n";
                count--;
                cout<<count<<" ships left.\n";
            }
        }
    }
    cout<<"\nAll ships killed.\n"<<endl;
}
