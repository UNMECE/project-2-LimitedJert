#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"

class Art_Student : public Student {
private:
    std::string artEmphasis;

public:
    Art_Student();
    ~Art_Student() override;

    void setArtEmphasis(std::string emphasis);
    std::string getArtEmphasis() const;

    void writeToFile(std::ofstream& outfile) const override;
};

#endif