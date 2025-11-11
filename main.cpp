#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;
class Person{
      void Person(string name , int id){
   this-> name=name;
   this->id=id;
   }
   void display(){
  cout<<"Name:"<<endl;
  cout<<"id:"<<endl;
  }
};
 
   class Student : Person{
       void Student (int yearLevel , string major):Person(string name , int id){
       this-> yearLevel=yearLevel;
       this-> major=major;
       }
       void display(){
       cout<<"yearLevel:"<<endl;
       cout<<"major:"<<endl;
       Student::display;
       }
   };
   class Instructor : Person{
    void Instructor(string department , int experienceYears):Person(string name , int id){
    this-> department=department;
    this-> experienceYears =experienceYears;
    }
    void display(){
    cout<<"department:"<<endl;
    cout<<"experienceYears:"<<endl;
    Instructor:: display;
    }
   };
  class Course{
   void Course(string courseCode ,string coursename, int maxStudents, int currentStudents){
       this-> courseCode=courseCode;
       this-> coursename= coursename;
       this-> maxStudents=maxStudents;
       this-> currentStudents=currentStudents;
       Student*student=nullptr;
   }
   void addStudent(const Student& s){
       add += student;
   }
Student *student=new student{
int count=n;
for(int i;i<n;i++)
   {
}
   void dispalyCourseInfo(){
   cout<<"courseCode:"<<endl;
   cout<<"coursename:"<<endl;
   cout<<"maxStudent:"<<endl;
   cout<<"currentStudent:"<<endl;
   }
  };
  int main(){
      
      Student S1("Aisha","Cs","5","133004912");
      S1.display();
     Instructor I2("Dr.Lina","ComputerScience","4");
      I2.display();
      Course C3("Nabil", "3","programming");
      C3.displayCourseInfo();
      return 0;
  }

