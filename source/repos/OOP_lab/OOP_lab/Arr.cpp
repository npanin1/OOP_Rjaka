#include "Arr.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>

Arr::Arr() {
	
	cur = 0;
	border = 10;
	arr = new int[border];
}

Arr::Arr(int pBorder) {

	cur = 0;

	if (pBorder < 0) {
	
		std::cout << "\nGot a negative value, array will be initialized in the default way\n";
		border = 10;
	}
	else {

		border = pBorder;		
	}

	arr = new int[border];
}

Arr::Arr(Arr& temp) {

	cur = temp.getCur();
	border = temp.getBorder();
	arr = temp.getArr();
}

Arr::~Arr() {

	delete arr;
}

bool Arr::setBorder(int pBorder) {

	if (pBorder > border) {
	
		arr = (int*) realloc(arr, pBorder);

		if (arr == NULL) {

			exit(EXIT_FAILURE);
		}

		border = pBorder;
		return true;
	}
	
	if ( (pBorder < border) && (pBorder >= cur) ) {
	
		arr = (int*) realloc(arr, pBorder);

		if (arr == NULL) {

			exit(EXIT_FAILURE);
		}

		border = pBorder;
		return true;
	}

	return false;
}

bool Arr::setArr(int* pArr, int length) {

	if (pArr != NULL) {

		delete arr;
		arr = new int[length];
		memcpy(arr, pArr, sizeof(int) * length);

		cur = length;
		border = length;

		return true;
	}

	return false;
}

int Arr::getBorder() {

	return border;
}

int Arr::getCur() {

	return cur;
}

int* Arr::getArr() {

	int* res = new int[cur];
	memcpy(res, arr, sizeof(int) * cur);

	return res;
}

bool Arr::add(int num) {

}