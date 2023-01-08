//This is a sample run of a results analysis system  using C++
//Author: Kapembwa Kangali

#include <iostream>

class Student {
private:
    int id;
    std::string firstName;
    std::string lastName;
    char courseGrade;
    double score;
public:
    //setters
    void setId(int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setCourseGrade(char);
    void setScore(double);

    //getters
    int getId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    char getCourseGrade() const;
    double getScore() const;

    //constructor
    Student() {
        this->id = 0;
        this->firstName = "";
        this->lastName = "";
        this->courseGrade = NULL;
        this->score = 0.0;
    }
};

int main()
{
    Student stud1; //object 1

    //local var
    int _id;
    std::string fName;
    std::string lName;
    char grade;
    double _score;

    //prompts

    std::cout << "Hello there!";
    return 0;
}

void Student::setId(int _id) {
    id = _id;
}

void Student::setFirstName(std::string fName) {
    firstName = fName;
}

void Student::setLastName(std::string lName) {
    lastName = lName;
}

void Student::setCourseGrade(char grade) {
    courseGrade = grade;
}

void Student::setScore(double _score) {
    score = _score;
}

//getter functions
int Student::getId() const {
    return id;
}

std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

char Student::getCourseGrade() const {
    return courseGrade;
}

double Student::getScore() const {
    return score;
}