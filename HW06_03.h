

template<typename T>
	class vector
	{
	private:
		T *elemente;
		int size;
		T value; //value for the third constructor
	public:
		vector() : size(4) //default constructor
		{
			elements = new T[size];
			for (int i = 0; i < size; i++)
			{
				elements[i] = 1;
			}
		}
		vector(int n) : size(n) //size dependent constructor
		{
			elements = new T[size];
			for (int i = 0; i < size; i++)
			{
				elements[i] = 1;
			}
		}
		vector(int f, T defaultValue) : size(f), value(defaultValue) //size and specified value constructor
		{
			elements = new T[size];
			for (int i = 0; i < size; i++)
			{
				elements[i] = defaultValue;
			}
		}

		void push_back(T elements) //entes a new value at the end
		{
			T valv;
			int capacity = 0;
			for (int i = 0; i < size; i++)
			{
				if (elements[i].empty())
				{
					capacity++;
				}
			}
			cout << "Enter a new value to append." << endl;
			cin >> valv;
			elements[size - capacity] = valv;
		}
		void pop_back() //find the last filled array element and then clears it
		{
			int capacity = 0;
			for (int i = 0; i < size; i++)
			{
				if (elements[i].empty())
				{
					capacity++;
				}
			}
			clear.elements[size-capacity];
		}
		unsigned const size() //returns all of the filled elements in the array
		{
			int capacity = 0;
			for (int i = 0; i < size; i++)
			{
				if (elements[i].empty())
				{
					capacity++;
				}
			}
			return size-capacity;
		}

		T const at(int index)//returns specified element
		{
			return elements[index];
		}
		bool const empty() //checks if the vector is empty
		{
			if (elements.empty())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void clear() //clears the array
		{
			clear.elements[];
		}
		void swap(T vector& v2) //swaps the elements in another array with this away
		{
			T* p;
			while (size < v2.size)
			{
				p = doubleCapacity(elements, size); //if the size of the other array is larger, then the size will 
			};

			elements = p;
			for (int i = 0; i < v2.size; i++)
			{
				elements[i] = v2.elements[i];
			}
		
		}
	T* doubleCapacity(const T* list, int size) //enter a pointer array and its size
	{
		T *doubleit = new T[2 * size]; //doubles the size
		for (int i = 0; i < size; i++)
		{
			doubleit[i] = list[i]; //puts the original array into the new array

		}
		return doubleit; //returns the new, larger array

	}
	};

