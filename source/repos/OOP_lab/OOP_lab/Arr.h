#pragma once

class Arr
{
public:
	
	Arr();
	Arr(int);
	Arr(Arr&);
	~Arr();
	
	bool setBorder(int);
	bool setArr(int*, int);

	int getBorder();
	int getCur();
	int* getArr();

	bool add(int);
	int removeByIdx(int);
	int removeByValue(int);
	bool search(int);
	bool swapByValue(int, int);
	bool swapByIdx(int, int);
	void printArray();

private:
	int border,
		cur;
	int* arr;
};

