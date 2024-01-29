#include<iostream>
using namespace std;
int main(){
    cout<<"Here are 3 ships in field of 4 rows and 4 columns. You have to find each ship and kill in minimum attempts."<<endl;
    int ships[4][4]={
        {0,0,1,0},
        {0,0,0,0},
        {0,0,0,1},
        {1,0,0,0}
    };
    int row,col;
    int count=3;
    int attempts=0;
    while(count>0 && count<=3)
    {
    cout<<"\nEnter row: ";
    cin>>row;
    cout<<"\nEnter column: ";
    cin>>col;
        if(row>=0&&row<=3 && col>=0&&col<=3)
    {
        if(ships[row][col]==1)
        {
         cout<<"\n==>No. "<<count<<" Ship found and kill at index ["<<row<<"]["<<col<<"].\n";
         ships[row][col]=0;
         count--;
         cout<<count<<" ships left.\n";
         attempts++;
        }
        else
        {
            cout<<"Sorry, No ship found. Please try again."<<endl;
          attempts++;
        }
    }
    else
    {
        cout<<"Please Enter row & column from 0-3.\n";
    }
    }
    cout<<"\nAll ships killed in "<<attempts<<" attempts.\n";
    
}