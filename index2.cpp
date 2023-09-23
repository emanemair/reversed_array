#include<iostream>
using namespace std; 




int reverse(int* list, int start, int end); 
void fill_array(int* list, int size); 
void print_array(int* list, int size); 


int main()
{
	int* arr; 
	int size; 
	cout << "enter the size of your array" << endl;
	cin >> size; 
	arr = new int[size]; 
	fill_array(arr, size); 
	print_array(arr, size); 
	reverse(arr, 0, size - 1); 
	cout << "array in reveresd order \n"; 
	print(arr, size); 
	return 0; 
}


void fill_array(int* list, int size)
{
	cout << "fill the array with " << size << " elements: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> list[i];  
	}
}

void print_array(int* list, int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " "; 
	cout << "\n"; 
}

int reverse(int* list, int start, int end)
{
	int temp; 
	if (start < end)
	{
		temp = list[end]; 
		list[end] = list[start]; 
		list[start] = temp; 
		return reverse(list, start + 1, end - 1); 
	}
	else 
		return 
	
}