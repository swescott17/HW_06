
//#include "HW06_03.h"

template<typename T>
vector<T>::vector()
{
	vectorsize = 5;
}

template<typename T>
vector<T>::vector: size(0)
{
	vectorsize = size;
	for (int i = 0; i < size; i++)
	{
		value[i] = 1;
	}
}

template<typename T>
vector<T>::vector(int size, T defaultValue)
{

	for (int i = 0; i < size; i++)
	{	
	value[i] = defaultValue;
	}
}

template<typename T>
void vector<T>::push_back()
{

}