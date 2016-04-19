#include "HW06_1.h"
#include "HW06_2.h"
#include <iostream>
#include <string>

using namespace std;



int main()
{
	//EX05_01
	
	string f = "Jump";
	string l = "apple";
	const string list1[2] = { f, l };
	double list2[2] = {2.00, 7.45};
	int list3[2] = { 1 , 2 };

	int r = linearSearch(list1, f, 2);
	int s = linearSearch(list2, 7.45, 2);
	int t = linearSearch(list3, 0, 2);
	cout << "string list: " << r << ". Double list: " << s << ". Int List: " << t << "." << endl;

	//EX05_02
	int list4[5] = { 7, 1, 5, 2, 4 }; //made this long one to test a long array
	
	bool a = isSorted(list4, 5); 
	bool b = isSorted(list1, 2); //refer to EX05_01 for the arrays
	bool c = isSorted(list2, 2);
	cout << "int list sorted? " << a << " string list sorted? " << b << " double list sorted? " << c << endl;

	return 0;
}