#pragma once
#include <string>
class Fruit {
public:

	Fruit();
	~Fruit();

protected:
	int randRange(int min, int max);
	float randRange(float min, float max);

public:
	//print the stats of the fruit and returns it name
	std::string inspect();
	//calculates damage of pick
	float calculateDamage();
	//harvests the fruit
	int pick();

	// The fruit's name 
	std::string name = "fruit";
	// The juicy deliciousness that bursts with flavor (0.0f, 10.0f]
	float ripeness = 0;
	// The gargantuan hulking heft (0.0f, 10.0f]
	float size = 0;
	// The glistening vibrance that fills you with awe (0.0f, 10.0f]
	float appeal = 0;
	// The HP of the fruit
	float hp = 0;

	//The list of fruit names
	std::string names[7] = {
		"peach",
		"apple",
		"orange",
		"mango",
		"banana",
		"cherry",
		"pineapple"
	};

};