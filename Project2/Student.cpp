#include "Student.h"

Student::Student() : firstName(""), lastName(""), gpa(0.0), gradYear(2025), gradSemester("Spring"),
                    enrolledYear(2021), enrolledSemester("Fall"), degreeLevel("undergrad") {}

Student::~Student() {}

void Student::setName(std::string first, std::string last) {
    firstName = first;
    lastName = last;
}

std::string Student::getName() const {
    return firstName + " " + lastName;
}

void Student::setGPA(double g) {
    gpa = g;
}

double Student::getGPA() const {
    return gpa;
}

void Student::setGradYear(int year) {
    gradYear = year;
}

int Student::getGradYear() const {
    return gradYear;
}

void Student::setGradSemester(std::string semester) {
    gradSemester = semester;
}

std::string Student::getGradSemester() const {
    return gradSemester;
}

void Student::setEnrolledYear(int year) {
    enrolledYear = year;
}

int Student::getEnrolledYear() const {
    return enrolledYear;
}

void Student::setEnrolledSemester(std::string semester) {
    enrolledSemester = semester;
}

std::string Student::getEnrolledSemester() const {
    return enrolledSemester;
}

void Student::setDegreeLevel(std::string level) {
    degreeLevel = level;
}

std::string Student::getDegreeLevel() const {
    return degreeLevel;
}

void Student::writeToFile(std::ofstream& outfile) const {
    outfile << "Name: " << getName() << "\n";
    outfile << "GPA: " << getGPA() << "\n";
    outfile << "Graduation Year: " << getGradYear() << "\n";
    outfile << "Graduation Semester: " << getGradSemester() << "\n";
    outfile << "Enrolled Year: " << getEnrolledYear() << "\n";
    outfile << "Enrolled Semester: " << getEnrolledSemester() << "\n";
    outfile << "Degree Level: " << getDegreeLevel() << "\n";
}