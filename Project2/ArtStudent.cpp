#include "ArtStudent.h"

Art_Student::Art_Student() : Student(), artEmphasis("Art Studio") {}

Art_Student::~Art_Student() {}

void Art_Student::setArtEmphasis(std::string emphasis) {
    if (emphasis == "Art Studio" || emphasis == "Art History" || emphasis == "Art Education") {
        artEmphasis = emphasis;
    }
}

std::string Art_Student::getArtEmphasis() const {
    return artEmphasis;
}

void Art_Student::writeToFile(std::ofstream& outfile) const {
    Student::writeToFile(outfile);
    outfile << "Art Emphasis: " << getArtEmphasis() << "\n";
    outfile << "------------------------\n";
}