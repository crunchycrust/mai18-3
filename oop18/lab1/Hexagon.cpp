#include "Hexagon.h"
#include <iostream>
#include <cmath>

Hexagon::Hexagon() : Hexagon(0) {
}
Hexagon::Hexagon(size_t i) : side_a(i) {
	std::cout << "Hexagon created: " << side_a << std::endl;
}

Hexagon::Hexagon(std::istream &is) {
	is >> side_a;
}

double Hexagon::Square() {
	return 3*sqrt(3)*(side_a)*(side_a)/2;

}

void Hexagon::Print() {
	std::cout << "a=" << side_a << std::endl;
}

Hexagon::~Hexagon() {
	std::cout << "Hexagon deleted" << std::endl;
}
