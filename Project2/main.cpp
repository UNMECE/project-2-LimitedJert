#include <iostream>
#include <vector>
#include <fstream>
#include "ArtStudent.h"
#include "PhysicsStudent.h"

int main() {
    std::vector<Art_Student*> artStudents;
    std::vector<Physics_Student*> physicsStudents;

    // Create and populate art students
    artStudents.push_back(new Art_Student());
    artStudents[0]->setName("Olivia", "Smith");
    artStudents[0]->setGPA(3.8);
    artStudents[0]->setArtEmphasis("Painting");
    artStudents[0]->setGradYear(2025);
    artStudents[0]->setGradSemester("Fall");
    artStudents[0]->setEnrolledYear(2021);
    artStudents[0]->setDegreeLevel("undergrad");

    artStudents.push_back(new Art_Student());
    artStudents[1]->setName("Ethan", "Wong");
    artStudents[1]->setGPA(3.5);
    artStudents[1]->setArtEmphasis("Digital Media");
    artStudents[1]->setGradYear(2024);
    artStudents[1]->setGradSemester("Spring");
    artStudents[1]->setEnrolledYear(2020);
    artStudents[1]->setDegreeLevel("undergrad");

    artStudents.push_back(new Art_Student());
    artStudents[2]->setName("Isabella", "Garcia");
    artStudents[2]->setGPA(3.9);
    artStudents[2]->setArtEmphasis("Sculpture");
    artStudents[2]->setGradYear(2026);
    artStudents[2]->setGradSemester("Fall");
    artStudents[2]->setEnrolledYear(2022);
    artStudents[2]->setDegreeLevel("grad");

    artStudents.push_back(new Art_Student());
    artStudents[3]->setName("Liam", "Johnson");
    artStudents[3]->setGPA(3.2);
    artStudents[3]->setArtEmphasis("Photography");
    artStudents[3]->setGradYear(2023);
    artStudents[3]->setGradSemester("Summer");
    artStudents[3]->setEnrolledYear(2019);
    artStudents[3]->setDegreeLevel("grad");

    artStudents.push_back(new Art_Student());
    artStudents[4]->setName("Ava", "Chen");
    artStudents[4]->setGPA(3.7);
    artStudents[4]->setArtEmphasis("Art History");
    artStudents[4]->setGradYear(2025);
    artStudents[4]->setGradSemester("Spring");
    artStudents[4]->setEnrolledYear(2021);
    artStudents[4]->setDegreeLevel("undergrad");

    // Create and populate physics students
    physicsStudents.push_back(new Physics_Student());
    physicsStudents[0]->setName("Frank", "Miller");
    physicsStudents[0]->setGPA(3.1);
    physicsStudents[0]->setConcentration("Biophysics");
    physicsStudents[0]->setGradYear(2025);
    physicsStudents[0]->setGradSemester("Spring");
    physicsStudents[0]->setEnrolledYear(2021);
    physicsStudents[0]->setDegreeLevel("undergrad");

    physicsStudents.push_back(new Physics_Student());
    physicsStudents[1]->setName("Emily", "Chen");
    physicsStudents[1]->setGPA(3.8);
    physicsStudents[1]->setConcentration("Astrophysics");
    physicsStudents[1]->setGradYear(2024);
    physicsStudents[1]->setGradSemester("Fall");
    physicsStudents[1]->setEnrolledYear(2020);
    physicsStudents[1]->setDegreeLevel("undergrad");

    physicsStudents.push_back(new Physics_Student());
    physicsStudents[2]->setName("Raj", "Patel");
    physicsStudents[2]->setGPA(3.5);
    physicsStudents[2]->setConcentration("Quantum Mechanics");
    physicsStudents[2]->setGradYear(2026);
    physicsStudents[2]->setGradSemester("Spring");
    physicsStudents[2]->setEnrolledYear(2022);
    physicsStudents[2]->setDegreeLevel("grad");

    physicsStudents.push_back(new Physics_Student());
    physicsStudents[3]->setName("Sophia", "Martinez");
    physicsStudents[3]->setGPA(3.9);
    physicsStudents[3]->setConcentration("Condensed Matter");
    physicsStudents[3]->setGradYear(2023);
    physicsStudents[3]->setGradSemester("Summer");
    physicsStudents[3]->setEnrolledYear(2019);
    physicsStudents[3]->setDegreeLevel("grad");

    physicsStudents.push_back(new Physics_Student());
    physicsStudents[4]->setName("David", "Kim");
    physicsStudents[4]->setGPA(3.2);
    physicsStudents[4]->setConcentration("Particle Physics");
    physicsStudents[4]->setGradYear(2025);
    physicsStudents[4]->setGradSemester("Fall");
    physicsStudents[4]->setEnrolledYear(2021);
    physicsStudents[4]->setDegreeLevel("undergrad");

    physicsStudents.push_back(new Physics_Student());
    physicsStudents[5]->setName("Aisha", "Johnson");
    physicsStudents[5]->setGPA(3.6);
    physicsStudents[5]->setConcentration("Theoretical Physics");
    physicsStudents[5]->setGradYear(2027);
    physicsStudents[5]->setGradSemester("Spring");
    physicsStudents[5]->setEnrolledYear(2023);
    physicsStudents[5]->setDegreeLevel("undergrad");



    // Write to file
    std::ofstream outfile("student_info.dat");
    if (outfile.is_open()) {
        outfile << "ART STUDENTS\n============\n";
        for (auto student : artStudents) {
            student->writeToFile(outfile);
        }

        outfile << "\nPHYSICS STUDENTS\n===============\n";
        for (auto student : physicsStudents) {
            student->writeToFile(outfile);
        }

        outfile.close();
        std::cout << "Student information written to student_info.dat\n";
    }

    // Clean up
    for (auto student : artStudents) delete student;
    for (auto student : physicsStudents) delete student;

    return 0;
}