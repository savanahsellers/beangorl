#include <iostream>
#include <string>

using namespace std;

int main() {
  
  //variable declarations
string name;
double studyHours;
  
cout << "Please enter your name: ";
cin >> name;
cout << endl;

cout << "How many hours will you be studying? ";
cin >> studyHours;
cout << endl;

cout << "Hello " << name << "! You need to study " << studyHours << " hours for the exam.";
    return 0;
}