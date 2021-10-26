#include <iostream>
#include <math.h>
using namespace std;

double calcDistacne(double x1,double x2,double y1 ,double y2)
{
	return sqrt (( pow ((x2-x1),2) + ( pow ((y2-y1),2))));
}

int main()
{
	double x1, x2, y1, y2,distance;
	cout << "Enter x1 = ";
	cin >> x1;
	cout << "Enter y1 = ";
	cin >> y1;
	cout << "Enter x2 = ";
	cin >> x2;
	cout << "Enter y2 = ";
	cin >> y2;
	
	distance = calcDistacne(x1,x2,y1,y2);
	
	cout << "The distance between two points = " << distance << endl;
	
	return 0;
	
}
