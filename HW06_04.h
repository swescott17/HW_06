#ifndef _h_06_
#define _h_06_

#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	int fsize = v.size();
	srand(time(NULL));
	for (int i = 0; i < fsize; i++)
	{
		int l = i + rand() % (fsize - i);
		swap(v[i], v[l]);
	}
}

#endif
