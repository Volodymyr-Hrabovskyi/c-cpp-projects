#include <iostream>
#include "Quadrangle.h"

using namespace std;

int main(){

	setlocale(LC_ALL, "Ukrainian");
	cout << "First quadrangle:" << endl;
	CQuadrangle q1(1,2,3,4,5,6,7,8);
	q1.Perimeter();
	q1.Area();
	q1.IsRectangle();
	cout << "-------------------------------------" << endl;
	cout << "Second quadrangle:" << endl;
	CQuadrangle q2(1,2,5,6,2,1,6,4);
	q2.Perimeter();
	q2.Area();
	q2.IsRectangle();

	return 0;
}