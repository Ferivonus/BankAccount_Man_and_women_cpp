// 
// codded by Fahrettin Basturk.
// Bank accounts for People who are men and women. 
// version: Last.
//

#include <iostream>
#include <string>
using namespace std;
#include "BankClass.h"
#include "PeopleClass.h"
#include "Men.h"
#include "Women.h"
int PeopleCounterFunc(string);



int main()
{

    string name = "", surname = "";
    int money = 0, age = 0, HowManyPeople, HowManyWomen, HowManyMen;
    int MenPower = 0, WomenPower = 0;
    HowManyPeople = PeopleCounterFunc("People");
    HowManyWomen = PeopleCounterFunc("Women");
    HowManyMen = PeopleCounterFunc("Men");
    People* MyPeople[5] = { 0 };
    Women* MyWomen[5] = { 0 };
    Men* MyMen[5] = { 0 };

    // For People class:
    for (int i = 0; i < HowManyPeople; i++)
    {
        i++;
        cout << "Type " << i << " person's name and surname: ";
        i--;
        cin >> name >> surname;
        cout << "type " << name + " " + surname << "'s money and age: ";
        cin >> money >> age;
        MyPeople[i] = new People(name, surname, money, age);
        if (MyPeople[i]->BankAccountCheck())
        {
            MyPeople[i]->Manage_BankAccount(money);
        }
    }

    //For men class:
    for (int i = 0; i < HowManyMen; i++)
    {
        i++;
        cout << "Type " << i << " man's name and surname: ";
        i--;
        cin >> name >> surname;
        cout << "type " << name + " " + surname << "'s money and age: ";
        cin >> money >> age;
        cout << "So, how much man power does he have: ";
        cin >> MenPower;
        MyMen[i] = new Men(name, surname, money, age, MenPower);
        if (MyMen[i]->BankAccountCheck())
        {
            MyMen[i]->Manage_BankAccount(money);
        }
    }

    //For women class:
    for (int i = 0; i < HowManyWomen; i++)
    {
        i++;
        cout << "Type " << i << " woman's name and surname: ";
        i--;
        cin >> name >> surname;
        cout << "type " << name + " " + surname << "'s money and age: ";
        cin >> money >> age;
        cout << "So, how much woman power does she have: ";
        cin >> WomenPower;
        MyWomen[i] = new Women(name, surname, money, age, WomenPower);
        if (MyWomen[i]->BankAccountCheck())
        {
            MyWomen[i]->Manage_BankAccount(money);
        }
    }


    //For checking virtual functions:
    People Mine;
    Mine.defination();
    Men Man;
    Man.defination();
    Women Woman;
    Woman.defination();

    cout << "Hello World!\n";

    return 0;

}


int PeopleCounterFunc(string identity)
{
    int returner;
    cout << "How many " << identity << " do we have (max number is 5): ";
    cin >> returner;
    return returner;
}