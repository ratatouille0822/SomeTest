#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	string name;
	int id;
	
	Student()
	{
		cout << "------------------------------------------------------------" << endl;
		cout << "Please fullfill the info!" << endl;
		this->GetInfo();
		this->ShowInfo();
	}

	Student(string name, int id)
	{
		cout << "------------------------------------------------------------" << endl;
		this->name = name;
		this->id = id;
		cout << "Student with name "<< name<<" and id "<<id<<" was created. " << endl;
		this->ShowInfo();

	}

	Student(string name)
	{
		cout << "------------------------------------------------------------" << endl;
		cout << "Student with name " <<name<<" was created. " << endl;
		this->name = name;
		this->GetId();
		this->ShowInfo();
	}

	Student(int id)
	{ 
		cout << "------------------------------------------------------------" << endl;
		cout << "Student with ID "<< id <<" was created. " << endl;
		this->id = id;
		this->GetName();
		this->ShowInfo();

	}

	int ShowInfo()
	{
		cout << "The name is " << this->name << endl;
		cout << "The id is " << this->id << endl;
		return 0;
	}
private:
	int GetInfo()
	{
		this->GetName();
		this->GetId();
		return 0;
	}
	int GetName()
	{
		cout << "Please input a name" << endl;
		cin >> this->name;
		return 0;
	}
	int GetId()
	{
		cout << "Please input a id number" << endl;
		cin >> this->id;
		return 0;
	}
};

int main()
{
	Student student_with_none;
	Student student_with_name_and_id("Áõ±¸",1);
	Student student_with_name_without_id("¹ØÓð");
	Student student_without_name_with_id(3);
	
	system("Pause");
	return 0;
}