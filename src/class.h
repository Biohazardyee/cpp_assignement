#include <string>
#include <iostream>
using namespace std;

class Student {
    // declaring the attributes of the Student class in private because I dont want these to be modified directly
    private:
        string name;
        string lastname; 
        int age;
        int id;
        int enrollmentYear;

    public:
        // constructor for the student class
        Student(string name, string lastname, int age, int id, int enrollmentYear){
            this->name = name;
            this->lastname = lastname;
            this->age = age;
            this->id = id;
            this->enrollmentYear = enrollmentYear;
        }

    // display function to display the student's information when prompted
        void display() const {
        cout << "ID: " << id << ", Name: " << name << " " << lastname
            << ", Age: " << age << ", Enrollment Year: " << enrollmentYear << endl;
    }

    // getters and setters for the attributes of the student class

    // ID getter
    int getId() const {
        return id;
    }

    // Attributes setters to modify information of the student
    void setName(const string &newName) { name = newName; }
    void setLastname(const string &newLastname) { lastname = newLastname; }
    void setAge(int newAge) { age = newAge; }
    void setEnrollmentYear(int newEnrollmentYear) { enrollmentYear = newEnrollmentYear; }

};