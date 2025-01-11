#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Merge sort implementation for sorting students by Enrollment Year
void merge(vector<Student> &students, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<Student> leftPart(n1);
    vector<Student> rightPart(n2);

    for (int i = 0; i < n1; ++i)
        leftPart[i] = students[left + i];
    for (int j = 0; j < n2; ++j)
        rightPart[j] = students[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftPart[i].getEnrollmentYear() <= rightPart[j].getEnrollmentYear()) {
            students[k] = leftPart[i];
            ++i;
        } else {
            students[k] = rightPart[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        students[k] = leftPart[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        students[k] = rightPart[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<Student> &students, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(students, left, mid);
    mergeSort(students, mid + 1, right);
    merge(students, left, mid, right);
}


// Comparison function for ID
bool compareById(const Student &a, const Student &b) {
    return a.getId() < b.getId();  
}

// Comparison function for Name
bool compareByName(const Student &a, const Student &b) {
    return a.getName() < b.getName();  
}

// Comparison function for Lastname
bool compareByLastname(const Student &a, const Student &b) {
    return a.getLastname() < b.getLastname(); 
}

// Comparison function for Age
bool compareByAge(const Student &a, const Student &b) {
    return a.getAge() < b.getAge();  
}

// Comparison function for Enrollment Year (for merge sort)
bool compareByEnrollmentYear(const Student &a, const Student &b) {
    return a.getEnrollmentYear() < b.getEnrollmentYear(); 
}


// Sorting function for Enrollment Year using merge sort
void sortStudentsByEnrollmentYear(vector<Student> &students) {
    mergeSort(students, 0, students.size() - 1);
    cout << "Students sorted by Enrollment Year successfully!\n";
}

// Main sorting function to choose the attribute
void sortStudents(vector<Student> &students) {
    int choice;
    cout << "Select the attribute you want to sort by:\n";
    cout << "1. ID\n2. Name\n3. Lastname\n4. Age\n5. Enrollment Year\n";
    cin >> choice;

    switch (choice) {
        case 1:
            sort(students.begin(), students.end(), compareById);
            cout << "Students sorted by ID successfully!\n";
            break;
        case 2:
            sort(students.begin(), students.end(), compareByName);
            cout << "Students sorted by Name successfully!\n";
            break;
        case 3:
            sort(students.begin(), students.end(), compareByLastname);
            cout << "Students sorted by Lastname successfully!\n";
            break;
        case 4:
            sort(students.begin(), students.end(), compareByAge);
            cout << "Students sorted by Age successfully!\n";
            break;
        case 5:
            sortStudentsByEnrollmentYear(students);
            cout << "Students sorted by Enrollment Year successfully!\n";
            break;
        default:
            cout << "Invalid choice.\n";
            return;
    }

    // Debugging message to confirm we are back to the main loop
    cout << "Returning to main menu...\n";
}



