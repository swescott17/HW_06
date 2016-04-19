
//function for 12.2 or EX05_1
template<typename T>
int linearSearch(const T list[], T key, int arraySize) //enter an array of any type and an "item" of the same type to search in the array
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
		{
			return i; //returns which number in the array the item was found
		}
	}
	return -1; //returns that nothing was found
}

