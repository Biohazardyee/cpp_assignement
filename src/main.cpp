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
#include <vector>
#include <random>
#include "randomStudentGeneration.h"
#include "studentManagement.h"


using namespace std;

int main() {
    vector<Student> students;
    int initialStudents = 5;

    // Populate initial students using random generation and creating a set of students initially.
    populateStudents(students, initialStudents);

    int choice;
    do {
        // Display menu options
        cout << "\nStudent Management System\n";
        cout << "1. Display All Students\n";
        cout << "2. Add Student\n";
        cout << "3. Retrieve Student by ID\n";
        cout << "4. Update Student by ID\n";
        cout << "5. Remove Student by ID\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Display all students
                for (const auto &student : students) {
                    student.display();
                }
                break;
            case 2:
                addStudent(students);
                break;
            case 3:
                retrieveStudent(students);
                break;
            case 4:
                updateStudent(students);
                break;
            case 5:
                removeStudent(students);
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
