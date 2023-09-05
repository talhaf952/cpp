#include<iostream>
#include<string>>
using namespace std;

//create Person Class

class Person
{
	//Access Specifier
	public:
		//initialize variables
		string name;
		int age;
		
		//function
		
		void DisplayInfo()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
		
		
};

int main()
		{
			//Main Function
			//create obj
			Person person1;
			
			//Access data members
			person1.name="ALi";
			person1.age=24;
			
			Person person2;
				//Access data members
			person2.name="MALi";
			person2.age=34;
			
			person1.DisplayInfo();
    		person2.DisplayInfo();
			
			return 0;
		}
