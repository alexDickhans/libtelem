#include "telemetry.h"

void Telemetry::setSerial(pros::Serial* serial) {
	this->serial = serial;
}

void Telemetry::send(const std::string& string) {
	if (this->serial != nullptr) {
		serial->write((uint8_t *) string.c_str(), string.size());
	}

	std::cout << string;
}