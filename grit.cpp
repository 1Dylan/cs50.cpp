#include <iostream>
using namespace std;

int main()
{
int x = 0, sum = 0, total = 0;
double grit = 0.0;

total++;
cout << "New ideas and projects sometimes distract me from previous ones" << endl;
cout << "Not all - 5; Not much - 4; Somewhat - 3; Mostly - 2; Very much - 1: ";
cin >> x;
sum += x;

grit = sum / total;
cout << "Hello" << grit << endl;
return 0;
}
