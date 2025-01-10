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
#include <random>


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

Student generateRandomStudent(int id){
    string names[] = {"John", "Enzo", "Michel", "Lucas", "Laura-Lee", "Clementine", "Thibaud"};
    string lastnames[] = {"Doe", "Guillouche", "Riff", "Megnan", "Hollande", "Curel", "Marlier"};
    
    string name = names[rand() % 7];
    string lastname = lastnames[rand() % 7];
    int age = rand() % 10 + 18;
    int enrollmentYear = rand() % 5 + 2015;

    return Student(name, lastname, age, id, enrollmentYear);
}

void populateStudents(vector<Student> &students, int count) {
    for (int i = 0; i < count; ++i) {
        students.push_back(generateRandomStudent(i + 1));
    }
}

int main() {
    vector<Student> students;

    int numberOfStudents = 9;
    populateStudents(students, numberOfStudents);

    // Display the students
    for (const auto &student : students) {
        student.display();
    }

    return 0;
}