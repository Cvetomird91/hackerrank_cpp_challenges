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
        virtual int putdata() {
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
        int putdata() {
            std::cout << this->name << ' ' << this->age << ' ' << this->cur_id << endl;
        }
        Professor() {
            Professor::professorCount++;
            this->cur_id = Professor::professorCount;
        }
};

int Professor::professorCount = 0;

class Student : public Person {
    public:
        int marks[6];
        int cur_id;
        static int studentCount;
        Student() {
            Student::studentCount++;
            this->cur_id = Student::studentCount;
        }
};

int Student::studentCount = 0;

int main() {

	Student s;
	Student p;

    Professor *Vasilev = new Professor;
    Vasilev->getdata();

    Professor *stamatov = new Professor;
    Professor *Proinov = new Professor;

    // (*a).member and a->member do the same
    Proinov->getdata();
    (*Proinov).putdata();
    // Vasilev->putdata();

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