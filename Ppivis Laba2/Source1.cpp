
#include<stdlib.h>
#include <iostream>
#include <string>
#include"Hd.h"
using namespace std;





Zoo::Zoo(int yearoffoundation, int numberofemployers, int numberofcages, string director)
{
	this->yearoffoundation = yearoffoundation;
	this->numberofemployers = numberofemployers;
	this->numberofcages = numberofcages;
	this->director = director;
}
int Zoo::numberOfRareAnimals(int numbofrareAnimals)
{
	this->rareAnimals = numbofrareAnimals;
	return rareAnimals;
}
int Zoo::numberOfRareBirds(int numbofrarebirds)
{
	this->rareBirds = numbofrarebirds;
	return rareBirds;
}
int Zoo::numberOfRareFishes(int numbofrareFishes)
{
	this->rareFishes = numbofrareFishes;
	return rareFishes;
}

Animals::Animals(){
}
int Animals::numbAnimals(int amountOFanimals)
{
	this->numberOFanimals = amountOFanimals;
	return numberOFanimals;
}

Birds::Birds(){
}
int Birds::numbBirds(int amountOFbirds)
{
	this->numberOFbirds = amountOFbirds;
	return numberOFbirds;
}

Fishes::Fishes(){
}
int Fishes::numbFishes(int amountOFfishes)
{
	this->numberOFfishes = amountOFfishes;
	return numberOFfishes;
}

Zoopark::Zoopark(int yearoffoundation, int numberofemployers, int numberofcages, string director):Zoo( yearoffoundation,  numberofemployers,  numberofcages, director),Animals(),Birds(),Fishes() {}

void Zoopark::Info()
{
	cout << "Зоопарк основан в  " << yearoffoundation<<" количество работников в зоопарке " << numberofemployers<<" количество клеток для животных " << numberofcages<<" директором зоопарка является " << director << endl;
}