#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int age;
        virtual void getdata() {
            std::cin >> this->name >> this->age;
        }
        virtual void putdata() {
            std::cout << this->name << ' ' << this->age;
        }
};

class Professor : public Person {
    public:
        int publications;
        int age;
        string name;
        static int professorCount;
        int cur_id;
        void getdata() {
            std::cin >> this->name >> this->age >> this->publications;
        }
        void putdata() {
            std::cout << this->name << ' ' << this->age << ' ' << this->publications << ' ' << this->cur_id << endl;
        }
        Professor() {
            Professor::professorCount++;
            this->cur_id = Professor::professorCount;
        }
};

int Professor::professorCount = 0;

class Student : public Person {
    public:
        int marksCount = 6;
        int marks[6];
        int cur_id;
        static int studentCount;
        Student() {
            Student::studentCount++;
            this->cur_id = Student::studentCount;
        }
        void getdata() {
            std::cin >> this->name >> this->age >> this->marks[0] >> this->marks[1] >> this->marks[2] >> this->marks[3]
                     >> this->marks[4] >> this->marks[5];
        }
        void putdata() {
            int total = 0;

            for (int i = 0; i < this->marksCount; i++) {
                total += marks[i];
            }

            std::cout << this->name << ' ' << this->age << ' ' << total << ' ' << this->cur_id << endl;
            
        }
};

int Student::studentCount = 0;

int main() {

    Student *s = new Student;
    Student *c = new Student;
    Student *p = new Student;

    Professor *Vasilev = new Professor;
    //Vasilev->getdata();

    Professor *stamatov = new Professor;
    Professor *Proinov = new Professor;

    (*p).getdata();
    p->putdata();

	return 0;

}

/*
//мейна, майна

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

*/
