#include <iostream>
#include "Quadrangle.h"

using namespace std;
int Lenght(int X, int Y);
// ��������� ������������ �� �����������
CQuadrangle::CQuadrangle(){
	uAx, uAy = 0;
	uBx, uBy = 0;
	uCx, uCy = 0;
	uDx, uDy = 0;
}

// ��������� ������������ � �����������
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

// ����������
CQuadrangle::~CQuadrangle(){
	cout << "��'���� CQuadrangle �������" << endl;
}

//  ����������� ��������� �������������
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


// ����������� ����� �������������
void CQuadrangle::Area(){
	int area = 0;
	int AB = 0, BC = 0, CD = 0, DA = 0;

	AB = Lenght(uAx, uAy);
	BC = Lenght(uBx, uBy);

	area = AB * BC;

	cout << "Area is " << area << endl;
}

// �������� �� ������������ �����������

void CQuadrangle::IsRectangle(){
	int AB = 0, BC = 0, CD = 0, DA = 0;

	AB = Lenght(uAx, uAy);
	BC = Lenght(uBx, uBy);
	CD = Lenght(uCx, uCy);
	DA = Lenght(uDx, uDy);

	if ((AB == CD && BC == DA) || (AB == BC && CD == DA)){
		cout << "������������ � �����������" << endl;
	}
	else {
		cout << "������������ �� � �����������" << endl;
	}
}
// ����������� ������� ������� (����� �� �������)
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