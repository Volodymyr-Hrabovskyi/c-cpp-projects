class CQuadrangle {

	private:
		int uAx, uAy, uBx, uBy, uCx, uCy, uDx, uDy;

	public: 
		CQuadrangle ();                                                               // ����������� �� �������������
		CQuadrangle (int Ax, int Ay, int Bx, int By, int Cx, int Cy, int Dx, int Dy); // �����������
		~CQuadrangle();

	// ������ �����
	void Perimeter();
	void Area();
	void IsRectangle ();

};