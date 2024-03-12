class Car {
public:
	double speed;
	void gas();
	double getFuel() {
		return this->fuel;
	}
	Car() {
		speed = 0;
		fuel = 200;
	}

private:
	double fuel;
};

void Car::gas() {
	if (fuel > 0) {
		++speed;
		--fuel;
	}
}

class Truck : public Car {
public:
	const unsigned wheels = 8;
};

class Motocycle : public Car {
public:
	const unsigned wheels = 2;
};
