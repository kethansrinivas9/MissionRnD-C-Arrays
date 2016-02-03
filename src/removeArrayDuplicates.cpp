#include<algorithm>
/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
using namespace std;
void * removeArrayDuplicates(int *Arr, int len)
{
	if (Arr == NULL || len <= 0)
		return NULL;
	std::sort(Arr, Arr + len);
	int i = 0, j = 1;
	while (j < len)
	{
		if (Arr[i] == Arr[j])
			j++;
		else
		{
			i++;
			Arr[i] = Arr[j];
			j++;
		}
	}
	return Arr;
}