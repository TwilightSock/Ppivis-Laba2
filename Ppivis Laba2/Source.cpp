
#include <iostream>
#include<string>
#include "Hd.h"

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	Zoopark randomZoo(2020, 130, 250, "������ ���� ��������");


	cout << "����� ���-�� �������� " << randomZoo.numbAnimals(150) << endl;
	cout << "����� ���-�� ���� " << randomZoo.numbBirds(30) << endl;
	cout << "����� ���-�� ��� " << randomZoo.numbFishes(40) << endl;
	randomZoo.Info();
	cout << "________---_____" << endl;
	cout << "���������� ������ �������� ���������� " << randomZoo.numberOfRareAnimals(50) << endl;
	cout << "���������� ������ ���� ���������� " << randomZoo.numberOfRareBirds(20) << endl;
	cout << "���������� ������ ��� ���������� " << randomZoo.numberOfRareFishes(10) << endl;


	
}
