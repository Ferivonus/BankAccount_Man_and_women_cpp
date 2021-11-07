#pragma once

class Women : public People
{
private:
	string name, surname, fullName;
	int money = 0, age = 0, WomenPower = 0;

public:
	Women() {}
	Women(string name, string surname, int money, int age, int WomenPower_of_Data) : People(name, surname, money, age)
	{
		fullName = name + " " + surname;
		WomenPower = WomenPower_of_Data;
		if (age >= 18)
		{

		}
	}
	virtual void defination();
	~Women();

};

void Women::defination() {
	cout << "I am a woman who name is " << fullName << endl;
}

Women::~Women()
{
}