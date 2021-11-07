#pragma once

class Men : public People
{
private:
	string name, surname, fullName;
	int money = 0, age = 0, MenPower = 0;

public:
	Men() {}
	Men(string name, string surname, int money, int age, int MenPower_of_Data) : People(name, surname, money, age)
	{
		fullName = name + " " + surname;
		MenPower = MenPower_of_Data;
		if (age >= 18)
		{

		}
	}
	~Men() {}
	virtual void defination();

};

void Men::defination() {
	cout << "I am a man who name is " << fullName << endl;
}