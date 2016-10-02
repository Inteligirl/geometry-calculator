//Tammy Gibson
//COP2000.0M1 
//Geometry Calculator

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>


using namespace std;

int main()
{
	//Variables
	double base, height, triangle_area;
	double length, width, rectangle_area;
	double radius, circle_area;
	int choice;    //menu choice
	string stars;

	//Constants
	const double PI = 3.14159;


	//Program Purpose Displayed Menu

	cout << "This program is a Geometry Calculator.\n" << endl;
	cout<< "1. Calculate the area of a Circle.\n"
		<< "2. Calculate the area of a Rectangle.\n"
		<< "3. Calculate the area of a Triangle.\n"
		<< "4. Quit\n" << endl;
	cout << "Enter your choice (1-4): ";
	cin >> choice;

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	stars.assign(20, '*');

	//Display choice circle area	
	if (choice == 1)
	{
		cout << endl;
		cout << stars << endl;
		cout << "Area of a Circle.\n";
		cout << stars << endl << endl;
		cout << "Enter the radius: ";
		cin >> radius;
		if (radius > 0)		//Check for zero or negative number
		{
			circle_area = PI * radius * radius;   //This should be a call to circle function with return value to main?
			cout << endl;
			cout << "The area of the circle is " << circle_area << ".\n" << endl;
		}
		else 
			cout << "You must enter a value greater than 0." << endl;
	}
	//Display choice rectangle area
	else if (choice == 2)
	{
		cout << endl;
		cout << stars << endl;
		cout << "Area of a Rectangle.\n";
		cout << stars << endl << endl;
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;
		if (width > 0 && length > 0)  //Check for zero or negative number
		{
			rectangle_area = length * width;  //This should be a call to rectangle function with return value to main?
			cout << endl;
			cout << "The area of the rectangle is " << rectangle_area << "." << endl;
		}
		else
			cout << "You must enter a value greater than 0." << endl;
	}
	//Display choice triangle area
	else if (choice == 3)
	{
		cout << endl;
		cout << stars << endl;
		cout << "Area of a Triangle.\n";
		cout << stars << endl << endl;
		cout << "Enter the base measurement: ";
		cin >> base;
		cout << "Enter the height: ";
		cin >> height;
		if (base > 0 && height > 0)  //Check for zero or negative number
		{
		triangle_area = 0.5 * base * height;   //This should be a call to triangle function with return value to main?
		cout << endl;
		cout << "The area of the triangle is " << triangle_area << "." << endl;
		}
		else
			cout << "You must enter a value greater than 0." << endl;
	}

	//Display message for quit
	else if (choice == 4)
	{
		cout << "Thank you for using my program.\n";
	}

	//No valid menu choice
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of these.\n";
	}
	return 0;

}