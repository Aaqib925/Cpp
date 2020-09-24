#include<iostream>
using namespace std;

class Student
{
	protected:
		int id;
		string name;
	public:
		void getData()
		{
			cin.ignore();
			cout << "Your Name: ";
			getline(cin, name);
			cout << "Your id: ";
			cin >> id;
		}
		
		virtual void goToNextClassroom() = 0;
		
		void feedback()
		{
			cout << "Collect the feedback form and fill it." << endl;
		}
};

class Regular : public Student
{
	public:
		void getData()
		{
			Student :: getData();
		}

		void goToNextClassroom()
		{
			cout << "Attend the session and then go to next classroom." << endl;
		}
};

class PostGraduate : public Student
{
	public:
		void getData()
		{
			Student :: getData();
		}

		void feedback()
		{
			Student :: feedback();
		}

		void goToNextClassroom()
		{
			cout << "After collecting feedback, go to the next classroom." << endl;
		}
};

int main()
{
	char std;
	Regular r1;
	PostGraduate p1;
	Student* arr[2];
    arr[0] = &r1;
    arr[1] = &p1;
	cout << "Are you a regular or postgraduate student? Write R or P.";
	cin >> std;
	if (std == 'R' || std == 'r')
	{
		r1.getData();
		arr[0]->goToNextClassroom();
	}
	else if (std == 'P' || std == 'p')
	{
		p1.getData();
		p1.feedback();
		arr[1]->goToNextClassroom();
	}
	return 0;
}
