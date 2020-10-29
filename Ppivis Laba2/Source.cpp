
#include <iostream>
#include<string>
#include "Hd.h"

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	Zoopark randomZoo(2020, 130, 250, "Иванов Иван Иванович");


	cout << "Общее кол-во животных " << randomZoo.numbAnimals(150) << endl;
	cout << "Общее кол-во птиц " << randomZoo.numbBirds(30) << endl;
	cout << "Общее кол-во рыб " << randomZoo.numbFishes(40) << endl;
	randomZoo.Info();
	cout << "________---_____" << endl;
	cout << "количество редких животных составляет " << randomZoo.numberOfRareAnimals(50) << endl;
	cout << "количество редких птиц составляет " << randomZoo.numberOfRareBirds(20) << endl;
	cout << "количество редких рыб составляет " << randomZoo.numberOfRareFishes(10) << endl;


	
}
