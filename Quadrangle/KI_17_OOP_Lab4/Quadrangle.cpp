#include <iostream>
#include "Quadrangle.h"

using namespace std;
int Lenght(int X, int Y);
// реалізація конструктора по замовчуваню
CQuadrangle::CQuadrangle(){
	uAx, uAy = 0;
	uBx, uBy = 0;
	uCx, uCy = 0;
	uDx, uDy = 0;
}

// реалізація конструктора з параметрами
CQuadrangle::CQuadrangle(int Ax, int Ay, int Bx, int By, int Cx, int Cy, int Dx, int Dy){
	uAx = Ax;
	uAy = Ay;
	uBx = Bx;
	uBy = By;
	uCx = Cx;
	uCy = Cy;
	uDx = Dx;
	uDy = Dy;
}

// деструктор
CQuadrangle::~CQuadrangle(){
	cout << "Об'єкти CQuadrangle знищено" << endl;
}

//  знаходження периметру чотирикутника
void CQuadrangle::Perimeter(){
	int per = 0;
	int AB = 0, BC = 0, CD = 0, DA = 0;

	AB = Lenght(uAx, uAy);
	BC = Lenght(uBx, uBy);
	CD = Lenght(uCx, uCy);
	DA = Lenght(uDx, uDy);

	per = AB + BC + CD + DA;

	cout << "Perimeter is " << per << endl;
}


// знаходження площі чотирикутника
void CQuadrangle::Area(){
	int area = 0;
	int AB = 0, BC = 0, CD = 0, DA = 0;

	AB = Lenght(uAx, uAy);
	BC = Lenght(uBx, uBy);

	area = AB * BC;

	cout << "Area is " << area << endl;
}

// перевірка чи чотирикутник прямокутний

void CQuadrangle::IsRectangle(){
	int AB = 0, BC = 0, CD = 0, DA = 0;

	AB = Lenght(uAx, uAy);
	BC = Lenght(uBx, uBy);
	CD = Lenght(uCx, uCy);
	DA = Lenght(uDx, uDy);

	if ((AB == CD && BC == DA) || (AB == BC && CD == DA)){
		cout << "Чотирикутник є прямокутний" << endl;
	}
	else {
		cout << "Чотирикутник НЕ є прямокутний" << endl;
	}
}
// знаходження довжини сторони (більше із значень)
int Lenght(int X, int Y){

	int len = 0;

	if (X >= Y){
		len = X;
	}
	else {
		len = Y;
	}

	return len;
}