//EX05_02

template<typename T>
bool isSorted(const T list[], int size) //returns true is array goes from largest to smallest
{
	int p = 0; //counter for the amount of times the array is not sorted
	for (int i = 0; i < size; i++)
	{
		
		for (int f = 0; f < size; f++)
		{
			if (i > f) //is the first number checked larger or smaller than the second number?
			{
				if (list[i] < list[f]) //the second part (f) in the array comes before the first (i)
				{
					p++; //if the second number is larger, then it adds to the counter
				}
			}
			if (i < f)
			{
				if (list[i] > list[f]) //opposite of above
				{
					p++; //if the second number is smaller, then it a
				}
			}
		}
	}
	if (p > 1) //if the counter counted any unsorted numbers it will return false
	{
		return false;
	}
	else //there are no unsorted numbers! it's sorted
	{
		return true;
	}
}
