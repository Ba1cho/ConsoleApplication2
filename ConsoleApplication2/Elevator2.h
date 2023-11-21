#pragma once
#include "Elevator.h"
class HumanElevator :  Elevator
{
private:
	int max_human;
	int humans;
public:
	void set_humans();
	int get_humans();
	void set_human();
	int get_human();
	HumanElevator();
};

class ServiceElevator : Elevator {
private:
	int max_cargo;
	int cargo;
public:
	void set_cargo_max();
	int get_cargo_max();
	void set_cargo();
	int get_cargo();
	ServiceElevator();
};

