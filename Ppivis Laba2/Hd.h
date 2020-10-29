#pragma once
#include <iostream>
#include <string>
using namespace std;

class Zoo
{
protected:
	int yearoffoundation;
	int numberofemployers;
	int numberofcages;
	int rareAnimals;
	int rareBirds;
	int rareFishes;
	string director;

public:
	Zoo(int yearoffoundation, int numberofemployers, int numberofcages, string director);
	int numberOfRareAnimals(int numbofrareAnimals);
	int numberOfRareBirds(int numbofrarebirds);
	int numberOfRareFishes(int numbofrareFishes);
	virtual void Info()=0;
};

class Animals : protected virtual Zoo
{
protected:
	int numberOFanimals;
public:
	Animals();
	int numbAnimals(int amountOFanimals);
};

class Birds :protected virtual Zoo
{
protected:
	int numberOFbirds;
public:
	Birds();
	int numbBirds(int amountOFbirds);
};
 
class Fishes : public virtual Zoo
{
protected:
	int numberOFfishes;
public:
	Fishes();
	int numbFishes(int amountOFfishes);
};

class Zoopark : public Animals, public Birds, public Fishes
{
public:
	Zoopark(int yearoffoundation, int numberofemployers, int numberofcages, string director);
    void Info();
};