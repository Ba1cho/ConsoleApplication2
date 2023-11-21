#include "Elevator2.h"
void HumanElevator :: set_humans() {
	cout << "please input max humans: ";
	cin >> this->max_human;
}
int HumanElevator :: get_humans() {
	return this->max_human;
}
void HumanElevator :: set_human() {
	cout << "please input humans: ";
	cin >> this->humans;
}
int HumanElevator :: get_human() {
	return this->humans;
}
HumanElevator::HumanElevator() {
	set_humans();
	set_human();
	while (this->humans >= this->max_human || this->humans < 0)
	{
		if (humans < 0) {
			DontMove();
			cout << "sum human >0: ";
			LiftMove();
		}
		else if (humans >= max_human) {
			DontMove();
			cout << " overload: ";
			LiftMove();
		}
		set_human();
	}
	Moves();
	LiftMove();
	

}
void ServiceElevator::set_cargo_max() {
	cout << "please input max cargo: ";
	cin >> this->max_cargo;
}
int ServiceElevator::get_cargo_max() {
	return this->max_cargo;
}
void ServiceElevator::set_cargo() {
	cout << "please input cargo: ";
	cin >> this->cargo;
}
int ServiceElevator::get_cargo() {
	return this->cargo;
}
ServiceElevator::ServiceElevator() {
	set_cargo_max();
	set_cargo();
	while (cargo >= max_cargo && cargo < 0)
	{
		if (cargo < 0) {
			DontMove();
			cout << "sum cargo >0: ";
			LiftMove();
		}
		else if (cargo >= max_cargo) {
			DontMove();
			cout << " overload: ";
			LiftMove();
		}
		set_cargo();
	}
	Moves();
	LiftMove();
}