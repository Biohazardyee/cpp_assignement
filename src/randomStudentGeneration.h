#include <iostream>
#include <vector>
#include <random>
#include "class.h"

/* This function generates random students with random attributes that I defined, such as a dictionary of names and lastnames
   Then, I select randomly through the dictionary to generate a random student with random attributes 
*/
Student generateRandomStudent(int id){
    string names[] = {"John", "Enzo", "Michel", "Lucas", "Laura-Lee", "Clementine", "Thibaud"};
    string lastnames[] = {"Doe", "Guillouche", "Riff", "Megnan", "Hollande", "Curel", "Marlier"};
    
    string name = names[rand() % 7];
    string lastname = lastnames[rand() % 7];
    int age = rand() % 10 + 18;
    int enrollmentYear = rand() % 5 + 2015;

    return Student(name, lastname, age, id, enrollmentYear);
}

// This function populates the students vector with random students for initial testing
void populateStudents(vector<Student> &students, int count) {
    for (int i = 0; i < count; ++i) {
        students.push_back(generateRandomStudent(i + 1));
    }
}