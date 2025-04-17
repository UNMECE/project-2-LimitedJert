#include "PhysicsStudent.h"

Physics_Student::Physics_Student() : Student(), concentration("Biophysics") {}

Physics_Student::~Physics_Student() {}

void Physics_Student::setConcentration(std::string conc) {
    if (conc == "Biophysics" || conc == "Earth and Planetary Sciences") {
        concentration = conc;
    }
}

std::string Physics_Student::getConcentration() const {
    return concentration;
}

void Physics_Student::writeToFile(std::ofstream& outfile) const {
    Student::writeToFile(outfile);
    outfile << "Concentration: " << getConcentration() << "\n";
    outfile << "------------------------\n";
}