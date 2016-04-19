//EX05_02

template<typename T>
bool isSorted(const T list[], int size)
{
	int p = 0;
	for (int i = 0; i < size; i++)
	{
		
		for (int f = 0; f < size; f++)
		{
			if (i > f)
			{
				if (list[i] < list[f])
				{
					p++;
				}
			}
			if (i < f)
			{
				if (list[i] > list[f])
				{
					p++;
				}
			}
		}
	}
	if (p > 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
