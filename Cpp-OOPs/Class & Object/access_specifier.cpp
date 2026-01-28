/*
Access Specifier -> Private, Public, & Protected
Title:- Placement Cell
Candidate Name, Age, Years of Experience
*/

#include<iostream>
using namespace std;

class candidate
{
	string name;
	float exp;
	int age;
	
	public:
			void get();
			void display();
			
};

void candidate::get()
{
	cout<<"\nEnter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your Experience(in years): ";
	cin>>exp;
}

void candidate::display()
{
	cout<<"\nName of candidate:-\t"<<name;
	cout<<"\nAge of candidate:-\t"<<age;
	cout<<"\nIndustrial experience:-\t"<<exp<<"yrs";
}

int main()
{
	candidate obj;
	int choice;
	bool data = false;
	
	
	do
    {
        cout << "\n\n=== Placement Cell Menu ===\n";
        cout << "1. Enter candidate details\n";
        cout << "2. Display candidate details\n";
        cout << "3. Exit\n";
        
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
			obj.get();
			data = true;
			break;
			
		case 2:
			if(data)
				obj.display();
			else
				cout << "No details entered yet!\n";
            break;
			
		case 3:
			cout << "Exiting Program...\n";
			break;
			
		default:
			cout << "Invalid choice! Try again.\n";
		}
	}
	while(choice != 3);
	
	return 0;
}



/********** OUTPUT **********

=== Placement Cell Menu ===
1. Enter candidate details
2. Display candidate details
3. Exit

Enter your choice: 1

Enter your name: Om
Enter your age: 19
Enter your Experience(in years): 1.2


=== Placement Cell Menu ===
1. Enter candidate details
2. Display candidate details
3. Exit

Enter your choice: 2

Name of candidate:-     Om
Age of candidate:-      19
Industrial experience:- 1.2yrs

=== Placement Cell Menu ===
1. Enter candidate details
2. Display candidate details
3. Exit

Enter your choice: 3
Exiting Program...

--------------------------------
Process exited after 14.87 seconds with return value 0
Press any key to continue . . .

********** OUTPUT **********/