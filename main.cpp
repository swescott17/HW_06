#include "HW06_1.h"
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


	return 0;
}