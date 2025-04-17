#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "Student.h"

class Physics_Student : public Student {
private:
    std::string concentration;

public:
    Physics_Student();
    ~Physics_Student() override;

    void setConcentration(std::string conc);
    std::string getConcentration() const;

    void writeToFile(std::ofstream& outfile) const override;
};

#endif