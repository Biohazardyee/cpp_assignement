/* 

Simple data handling (input, updating, retrieval and removal) using C++ Data Structures and Binary Search
For this exercise you will need to:

1. Build a data type of your choice (class, struct), to represent one real-world set of entities 
    (e.g. Students, Cars, Products, etc.). Think of appropriate attributes in each case (e.g. year of enrolment, name, etc.)
2. Create instances/objects of your data type and store them in a Data Structure of your choice 
    (e.g. list, vector, BST). Optimally, the data structure should follow your own implementation. Data can be randomly generated.
3. Implement addition, retrieval, updating and removal functionalities, through a simple console menu.
4. Implement a version of Merge Sort, to sort your data structure based on a "sortable" attribute (e.g. year of enrolment, name)
5. Support any function that depends on search (retrieval, updating and removal), with your implementation of Binary Search (or, optionally, a suitable tree structure).

Maintain a public remote repository on GitHub, with just the necessary documentation on how to build and run your code. 
Include a short description about what your project does and what limitations it may have (bugs, unfinished tasks, etc.).
*/

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Student {
    private:
        string name;
        string lastname; 
        int age;
        int id;
        int enrollmentYear;

    public:
        Student(string name, string lastname, int age, int id, int enrollmentYear){
            this->name = name;
            this->lastname = lastname;
            this->age = age;
            this->id = id;
            this->enrollmentYear = enrollmentYear;
        }

        void display() const {
        cout << "ID: " << id << ", Name: " << name << " " << lastname
            << ", Age: " << age << ", Enrollment Year: " << enrollmentYear << endl;
    }

};

void originalStudents(vector<Student> &students) {
    students.emplace_back("Enzo", "Guillouche", 19, 1, 2024);
    students.emplace_back("Camille", "Gayat", 19, 2, 2024);
    students.emplace_back("Clementine", "Cruel", 24, 3, 2021);
}

int main() {
    vector<Student> students;
    originalStudents(students);

    for (const auto &student : students) {
        student.display();
    }

    return 0;
}