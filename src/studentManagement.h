#include <iostream>
#include <vector>


// This function allows the user to add new students to the vector
void addStudent(vector<Student> &students){
    string name, lastname;
    int age, enrollmentYear;

    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter student's lastname: ";
    cin >> lastname;
    cout << "Enter student's age: ";
    cin >> age;
    cout << "Enter student's enrollment year: ";
    cin >> enrollmentYear;

    students.push_back(Student(name, lastname, age, students.size() + 1, enrollmentYear));
    cout << "Student added successfully!" << endl;
}

// This function retrieves a student from the vector, we use the ID of the student to find the student
void retrieveStudent(const vector<Student> &students) {
    int id;
    cout << "Enter student's ID: ";
    cin >> id;

    for (const Student &student : students) {
        if (student.getId() == id) {
            student.display();
            return;
        }
    }
    cout << "Student not found.\n";
}

// This function updates a student's information in the vector
void updateStudent(vector<Student> &students) {
    int id;
    cout << "Enter student's ID: ";
    cin >> id;

    for (Student &student : students) {
        if (student.getId() == id) {
            string name, lastname;
            int age, enrollmentYear;

            cout << "Select the attribute you want to update:\n";
            cout << "1. Name\n2. Lastname\n3. Age\n4. Enrollment Year\n5. All\n";

            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter student's new name: ";
                    cin >> name;
                    student.setName(name);
                    break;
                case 2:
                    cout << "Enter student's new lastname: ";
                    cin >> lastname;
                    student.setLastname(lastname);
                    break;
                case 3:
                    cout << "Enter student's new age: ";
                    cin >> age;
                    student.setAge(age);
                    break;
                case 4:
                    cout << "Enter student's new enrollment year: ";
                    cin >> enrollmentYear;
                    student.setEnrollmentYear(enrollmentYear);
                    break;
                case 5:
                    cout << "Enter student's new name: ";
                    cin >> name;
                    cout << "Enter student's new lastname: ";
                    cin >> lastname;
                    cout << "Enter student's new age: ";
                    cin >> age;
                    cout << "Enter student's new enrollment year: ";
                    cin >> enrollmentYear;
                    student.setName(name);
                    student.setLastname(lastname);
                    student.setAge(age);
                    student.setEnrollmentYear(enrollmentYear);
                    break;
                default:
                    cout << "Invalid choice.\n";
                    return;
            }

            cout << "Student updated successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

// This function removes a student from the vector
void removeStudent(vector<Student> &students){
    int id;

    cout << "Enter the ID of the student you wish to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            cout << "Student deleted successfully!" << endl;
            return;  
        }
    }
}