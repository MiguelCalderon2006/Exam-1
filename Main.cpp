//Miguel Calderon
//10-1-22
//Calculate and display surface area and size in order of each shape
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "\n";
	cout << "\t  *********         *             * * *         * * * * * **        *         *          ****\n";
	cout << "\t *       **       * ***         *     ****    *            ***     * *      *    *     ********\n";
	cout << "\t***********     *   *****     *        ***** *              ***   *  **   ************ **    **\n";
	cout << "\t*       ***   *     *******   *        ***** *              ***  *   ***  *          *     **\n";
	cout << "\t*       *** *       ********* *        ***** *              *** *    **** *          *    **\n";
	cout << "\t*       **      *   *****       *     ****    *            ***  *    ***  *          *    **\n";
	cout << "\t*********          **             * * *         * * * * * **       * **   ************\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t  **\n";
	cout << "\t3D geometry shapes are objects that have three dimensions, which are length, width, and height.\n";
	cout << "\tSurface area and volume are calculated for any three-dimensional geometrical shape.\n";
	cout << "\tThe surface area of any given object is the area or region occupied by the surface of the object.\n";
	cout << "\tWhereas volume is the amount of space available in an object.\n";
	cout << "\n\tCMPR120 - Exam#1A 3D Geometry Shapes Calculator by (Miguel Calderon)\n";
	cout << "\t====================================================================================================\n";
	cout << "\t\tA. Sphere\n";
	cout << "\t\tB. Spherocylinder\n";
	cout << "\t\tC. Cone\n";
	cout << "\t\tD. Tetrahedron\n";
	cout << "\t\tE. Hexahedron\n";
	cout << "\t\tF. Octahedron\n";
	cout << "\t\tG. Dodecahedron\n";
	cout << "\t\tH. Icosahedron\n";
	cout << "\t\tI. Cuboid\n";
	cout << "\t\tJ. Triangular prism\n";
	cout << "\t----------------------------------------------------------------------------------------------------\n";
	cout << "\t\tK. Find randomized smallest and largest shape\n";
	cout << "\t\tL. Find interactive smallest and largest shape\n";
	cout << "\t----------------------------------------------------------------------------------------------------\n";
	cout << "\t\tQ. Quit\n";
	cout << "\t====================================================================================================\n";
	cout << "\n\tSelect Option: ";

	const double PI = 3.1415926535898;
	char option;
	cin >> option;
	cout << "\n";
	switch (option)
	{
	case 'A':
	case 'a':
	{
		int figures = 0;
		cout << "\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t1) A sphere is a round object and has a surface with every point on its surface equidistant from its center.\n";
			figures = 2;
		}
		else {
			cout << "\n\t1) A sphere is a round object and has a surface with every point on its surface equidistant from its center.\n";
		}

		double radius = 0.0;
		cout << "\n\tEnter a positive numeric value for the radius (r) of a sphere:";
		cin >> radius;

		if (radius <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 1;
		}
		double surface = 4 * PI * pow(radius, 2);
		double volume = (4.0 / 3.0) * PI * pow(radius, 3);

		cout << "\n\tSphere Output: ";
		cout << "\n\t\tradius       (r):" << setw(11) << setprecision(figures) << fixed << radius;
		cout << "\n\t\tvolume       (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area (S):" << setw(11) << setprecision(figures) << fixed << surface;
	}break;

	case 'B':
	case 'b':
	{
		int figures = 0;
		cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t2) A spherocylinder is made up of two hemispheres connected by a cylinder.\n";
			figures = 2;
		}
		else {
			cout << "\n\t2) A spherocylinder is made up of two hemispheres connected by a cylinder.\n";
		}

		double radius = 0.0;
		cout << "\n\tEnter a positive numeric value for the radius (r) of a spherocylinder: ";
		cin >> radius;

		if (radius <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 2;
		}

		double length1 = 0.0;
		cout << "\n\tEnter a positive numeric value for the length (l) of the spherocylinder: ";
		cin >> length1;

		if (length1 <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 3;
		}
		double volume = PI * pow(radius, 2) * ((4.0 / 3.0) * radius + length1);
		double surface = 2 * PI * radius * (2 * radius + length1);

		cout << "\n\tSpherocylinder Output: ";
		cout << "\n\t\tradius       (r):" << setw(11) << setprecision(figures) << fixed << radius;
		cout << "\n\t\tlength       (l):" << setw(11) << setprecision(figures) << fixed << length1;
		cout << "\n\t\tvolume       (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area (S):" << setw(11) << setprecision(figures) << fixed << surface;
	}break;

	case 'C':
	case 'c':
	{
		int figures = 0;
		cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t3) A cone is a solid shape which tapers from a circular base to a point.\n";
			figures = 2;
		}
		else {
			cout << "\n\t3) A cone is a solid shape which tapers from a circular base to a point.\n";
		}

		double radius = 0.0;
		cout << "\n\tEnter a positive numeric value for the radius (r) of a cone: ";
		cin >> radius;

		if (radius <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 2;
		}

		double height = 0.0;
		cout << "\n\tEnter a positive numeric value for the height (h) of a cone:";
		cin >> height;

		if (height <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 3;
		}
		double volume = PI * pow(radius, 2) * (height / 3.0);
		double surface = PI * radius * (radius + sqrt(pow(height, 2.0) + (pow(radius, 2.0))));
		
		cout << "\n\tCone Output: ";
		cout << "\n\t\tradius       (r):" << setw(11) << setprecision(figures) << fixed << radius;
		cout << "\n\t\theight       (h):" << setw(11) << setprecision(figures) << fixed << height;
		cout << "\n\t\tvolume       (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area (S):" << setw(11) << setprecision(figures) << fixed << surface;
	}break;

	case'D':
	case'd':
	{

		int figures = 0;
		cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t4) A regular tetrahedron is a solid triangular pyramid.\n";
			figures = 2;
		}
		else {
			cout << "\n\t4) A regular tetrahedron is a solid triangular pyramid.\n";
		}

		double edge = 0.0;
		cout << "\n\tEnter a positive numeric value for the edge length (a) of a tetrahedron:";
		cin >> edge;
		if (edge <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 4;
		}

		double volume = pow(edge, 3.0) / (6.0 * sqrt(2.0));
		double surface = sqrt(3) * pow(edge, 2);

		cout << "\n\tTetrahedron Output:";
		cout << "\n\t\tlength of edge (a):" << setw(11) << setprecision(figures) << fixed << edge;
		cout << "\n\t\tvolume         (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area   (S):" << setw(11) << setprecision(figures) << fixed << surface;
	}break;

	case 'E':
	case 'e':
	{
		int figures = 0;
		cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t5) A regular hexahedron is a solid figure with six plane faces.\n";
			figures = 2;
		}
		else {
			cout << "\n\t5) A regular hexahedron is a solid figure with six plane faces.\n";
		}
		double edge = 0.0;
		cout << "\n\tEnter a positive numeric value for the edge length (a) of a hexahedron: ";
		cin >> edge;
		if (edge <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 5;
		}

		double volume = pow(edge, 3);
		double surface = 6 * pow(edge, 2);

		cout << "\n\tTetrahedron Output:";
		cout << "\n\t\tlength of edge (a):" << setw(11) << setprecision(figures) << fixed << edge;
		cout << "\n\t\tvolume         (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area   (S):" << setw(11) << setprecision(figures) << fixed << surface;
	}break;

	case 'f':
	case 'F':
	{
		int figures = 0;
		cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t6) An octahedron is a solid shape that has eight equal triangular faces.\n";
			figures = 2;
		}
		else {
			cout << "\n\t6) An octahedron is a solid shape that has eight equal triangular faces.\n";
		}
		double edge = 0.0;
		cout << "\n\tEnter a positive numeric value for the edge length (a) of an octahedron:";
		cin >> edge;
		if (edge <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 6;
		}

		double volume = (sqrt(2.0)) / 3.0 * (pow(edge, 3));
		double surface = 2 * sqrt(3.0) * pow(edge, 2);
		switch (figures)

		cout << "\n\tOctahedron Output:";
		cout << "\n\t\tlength of edge (a):" << setw(11) << setprecision(figures) << fixed << edge;
		cout << "\n\t\tvolume         (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area   (S):" << setw(11) << setprecision(figures) << fixed << surface;
	}break;

	case'l':
	case'L':
	{
		int figures = 0;
		cout << "\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: ";
		cin >> figures;

		if (figures <= 0 || figures >= 10)
		{
			cout << "\tERROR: Input significant number must be in range(1...10).Therefore, it will be defaulted to 2.\n";
			cout << "\n\t1) A sphere is a round object and has a surface with every point on its surface equidistant from its center.\n";
			figures = 2;
		}
		else {
			cout << "\n\t1) A sphere is a round object and has a surface with every point on its surface equidistant from its center.\n";
		}

		double radius = 0.0;
		
		cout << "\n\tEnter a positive numeric value for the radius (r) of a sphere:";
		cin >> radius;

		if (radius <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 1;
		}
		double surface = 4 * PI * pow(radius, 2);
		double volume = (4.0 / 3.0) * PI * pow(radius, 3);

		double sphereSurface = surface;
		double sphereVolume = volume;

		cout << "\n\tSphere Output: ";
		cout << "\n\t\tradius       (r):" << setw(11) << setprecision(figures) << fixed << radius;
		cout << "\n\t\tvolume       (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area (S):" << setw(11) << setprecision(figures) << fixed << surface;

		//CASE B
		

		
		cout << "\n\t2) A spherocylinder is made up of two hemispheres connected by a cylinder.\n";
	
		
		cout << "\n\tEnter a positive numeric value for the radius (r) of a spherocylinder: ";
		cin >> radius;

	
		double length1 = 0.0;
		cout << "\n\tEnter a positive numeric value for the length (l) of the spherocylinder: ";
		cin >> length1;

		if (radius <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 2;
		}
		if (length1 <= 0)
		{
			cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n";
			return 3;
		}
		double volume = PI * pow(radius, 2) * ((4.0 / 3.0) * radius + length1);
		double surface = 2 * PI * radius * (2 * radius + length1);

		double spherocylinderVolume = volume;
		double spherocylinderSurface = surface;

		cout << "\n\tSpherocylinder Output: ";
		cout << "\n\t\tradius       (r):" << setw(11) << setprecision(figures) << fixed << radius;
		cout << "\n\t\tlength       (l):" << setw(11) << setprecision(figures) << fixed << length1;
		cout << "\n\t\tvolume       (V):" << setw(11) << setprecision(figures) << fixed << volume;
		cout << "\n\t\tsurface area (S):" << setw(11) << setprecision(figures) << fixed << surface;

		
	}break;

	//CASE Q

	case'q':
	case'Q':
	{
		return 12;
	}break;
	
		

	}

	


	

	
	return 0;
}
