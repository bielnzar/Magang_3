#include <iostream>
#include <string>

using namespace std;

// Base class (kelas dasar)
class Person {
protected:
    string name;
    int age;

    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

// Derived class (kelas turunan) dari Person
class Student : public Person {
public:
    int studentID;

    void study() {
        cout << name << " is studying." << endl;
    }
};

// Derived class (kelas turunan) dari Person
class Teacher : public Person {
public:
    string subject;

    void teach() {
        cout << name << " is teaching " << subject << "." << endl;
    }
};

int main() {
    // Membuat objek dari kelas Student
    Student student1;
    student1.name = "Alice";
    student1.age = 20;
    student1.studentID = 12345;
    student1.introduce();
    student1.study();

    // Membuat objek dari kelas Teacher
    Teacher teacher1;
    teacher1.name = "Mr. Bob";
    teacher1.age = 45;
    teacher1.subject = "Mathematics";
    teacher1.introduce();
    teacher1.teach();

    return 0;
}