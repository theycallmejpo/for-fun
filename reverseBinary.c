#include "stdio.h"
#include "math.h"



int GetPositionOfFirstOnBit(unsigned int num)
{
	double result = log(num) / log(2);
	return (int)result;
}

int reverseBinary(unsigned int firstOnBit, unsigned int number)
{
	unsigned int result = 0;
	unsigned int mask = 1;
	for(int i = 0; i <= firstOnBit; i++) {
		result = result << 1;
		if(((number >> i) & mask) == mask)
			result |= mask;	
	}
	return result;
}


int Binary(int arr[], int key, int *times)
{
	int low = 0;
	int high = 9;
	while(low <= high) {
		int mid = (low + high) / 2;
		*times += 1;
		if(arr[mid] == key) {
		return mid;
		}
		else if(arr[mid] < key) low = mid+1;
		else high = mid -1;
	
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int random = atoi(argv[1]);
	int times = 0;
	Binary(arr, random, &times);
	printf("%d\n", times);
	//unsigned int num;
	//scanf("%d", &num);
	//unsigned int firstOnBit = GetPositionOfFirstOnBit(num);
	//int result = reverseBinary(firstOnBit, num);
	//printf("%d\n", result);
	return 0;
}
