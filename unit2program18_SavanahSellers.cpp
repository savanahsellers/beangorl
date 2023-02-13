#include <iostream>
using namespace std;

int main() {
  
// VARIABLES
  double perHour;
  double weekOne;
  double weekTwo;
  double weekThree;
  double weekFour;
  double weekFive;
  double totalIncome;
  double netIncome;
  double clothes;
  double schoolSupplies;
  double afterSpending;
  double savingsBonds;
  double parentSavingsBonds;

  // INPUT
  cout << "What were you paid per hour? $";
  cin >> perHour;
  cout << "How many hours did you work the first week? ";
  cin >> weekOne;
  cout << "How many hours did you work the second week? ";
  cin >> weekTwo;
  cout << "How many hours did you work the third week? ";
  cin >> weekThree;
  cout << "How many hours did you work the fourth week? ";
  cin >> weekFour;
  cout << "How many hours did you work the fifth week? ";
  cin >> weekFive;

  //MATH
  totalIncome = (weekOne + weekTwo + weekThree + weekFour + weekFive) * perHour;
  netIncome = totalIncome - (totalIncome * 0.14);
  clothes = netIncome * 0.1;
  schoolSupplies = netIncome * 0.01;
  afterSpending =  netIncome - (clothes + schoolSupplies);
  savingsBonds = (afterSpending * 0.25);
  parentSavingsBonds = savingsBonds * 0.5;
  
// OUTPUT
  cout << "Total Income before tax: $" << totalIncome << endl;
  cout << "Net Income: $" << netIncome << endl;
  cout << "Money spent on clothes and other accessories: $" << clothes << endl;
  cout << "Money spent on school supplies: $" << schoolSupplies << endl;
  cout << "Money spent to buy savings bonds: $" << savingsBonds << endl;
  cout << "Money spent by parents to buy savings bonds: $" << parentSavingsBonds << endl;
  
  return 0;
}