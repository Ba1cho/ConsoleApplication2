#include "Elevator.h"
void Elevator :: LiftMove() {
	if (this->move) {
		cout << "Lift moving";
	}
	else
	{
		cout << "Lift don't moving";
	}
}
void Elevator :: Moves() {
	this->move = true;
}
void Elevator::DontMove() {
	this->move = false;
}