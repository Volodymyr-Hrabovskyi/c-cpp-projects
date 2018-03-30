class CQuadrangle {

	private:
		int uAx, uAy, uBx, uBy, uCx, uCy, uDx, uDy;

	public: 
		CQuadrangle ();                                                               // конструктор за замовчуванням
		CQuadrangle (int Ax, int Ay, int Bx, int By, int Cx, int Cy, int Dx, int Dy); // конструктор
		~CQuadrangle();

	// методи класу
	void Perimeter();
	void Area();
	void IsRectangle ();

};