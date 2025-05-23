//This is a sample run of a results analysis system  using C++
//Author: Kapembwa Kangali
// next I have to intrduce files
#include <iostream>
#include <string>
#include <iomanip> //for std::setprecision
#include <cstdlib> //for system("cls") and system("pause")
#include <fstream> //for file operations



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

    //File variable
    std::fstream dataFile;


    //local var
    int _id;
    std::string fName;
    std::string lName;
    char grade;
    double _score;

    //prompts
	std::cout << "******************************************************" << std::endl;
    std::cout << "\t WELCOME TO THE STUDENT REGISTRATION SYSTEM" << std::endl;
	std::cout << "******************************************************" << std::endl;
	std::cout << "Please enter the following details: \n";
	std::cout << "******************************************************" << std::endl;
	std::cout << "New Student Details" << std::endl;
    std::cout << "Id: ";
    std::cin >> _id;
    std::cout << "FirstName: ";
    std::cin >> fName;
    std::cout << "Surname: ";
    std::cin >> lName;
    std::cout << "Score: ";
    std::cin >> _score;
    std::cout << "Grade: ";
    std::cin >> grade;
    std::cout << std::endl;

    //setting up variables 
    stud1.setId(_id);
    stud1.setFirstName(fName);
    stud1.setLastName(lName);
    stud1.setScore(_score);
    stud1.setCourseGrade(grade);

    //Console output
    std::cout << "******************************************************"<<std::endl;
    std::cout << "\t Here is your registered student" << std::endl;
    std::cout << "******************************************************" << std::endl;

    std::cout << "Student ID: " << stud1.getId() << std::endl;
    std::cout << "First Name: " << stud1.getFirstName() << std::endl;
    std::cout << "Last Name: " << stud1.getLastName() << std::endl;
    std::cout << "Score: " << stud1.getScore() << std::endl;
    std::cout << "Course Grade: " << stud1.getCourseGrade() << std::endl;

    //storage on a text file
    std::cout << "Opening File" << std::endl;
    dataFile.open("students.txt", std::ios::out); // Open for output

    dataFile << "Student ID: " << stud1.getId() << std::endl;
    dataFile << "First Name: " << stud1.getFirstName() << std::endl;
    dataFile << "Last Name: " << stud1.getLastName() << std::endl;
    dataFile << "Score: " << stud1.getScore() << std::endl;
    dataFile << "Course Grade: " << stud1.getCourseGrade() << std::endl;

    std::cout << "Written to text file named: student.txt" << std::endl;


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
