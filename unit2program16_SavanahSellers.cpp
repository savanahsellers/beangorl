#include <iostream>
using namespace std;

int main() {
// Write your main here
const double CARTON_LITERS = 3.78;
const double MILK_COST = 0.38;
const double MILK_PROFIT = .27;
double totalMilk;
int totalCartons;
double totalMilkCost;
double totalMilkProfit;

cout << "How much milk was produced this morning in Liters? ";
cin >> totalMilk;
  
totalCartons = totalMilk / CARTON_LITERS + 0.50;
totalMilkCost = MILK_COST * totalCartons;
totalMilkProfit = totalCartons * MILK_PROFIT;
  
cout << "The number of cartons needed to hold the milk is " << int
(totalMilk / CARTON_LITERS + 0.50) << endl;
cout << "The total cost of production is $" << totalMilkCost << endl;
cout << "The profit for todav is $" << totalMilkProfit << endl;
  
return 0;
}