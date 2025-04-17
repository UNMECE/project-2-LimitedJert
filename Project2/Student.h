#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

class Student {
protected:
    std::string firstName;
    std::string lastName;
    double gpa;
    int gradYear;
    std::string gradSemester;
    int enrolledYear;
    std::string enrolledSemester;
    std::string degreeLevel;

public:
    Student();
    virtual ~Student();

    void setName(std::string first, std::string last);
    std::string getName() const;
    void setGPA(double g);
    double getGPA() const;
    void setGradYear(int year);
    int getGradYear() const;
    void setGradSemester(std::string semester);
    std::string getGradSemester() const;
    void setEnrolledYear(int year);
    int getEnrolledYear() const;
    void setEnrolledSemester(std::string semester);
    std::string getEnrolledSemester() const;
    void setDegreeLevel(std::string level);
    std::string getDegreeLevel() const;

    virtual void writeToFile(std::ofstream& outfile) const;
};

#endif