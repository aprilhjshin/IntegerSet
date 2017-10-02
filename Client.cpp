/*
April Shin
Jonah Moon
CS 137
Homework 2
*/

#include "IntegerSet.h"
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int arr[10] = {1,1,1,1,1,1,1,1,1,1 };
	IntegerSet testArr(arr, 10);
	testArr.printSet();

	IntegerSet test1(10);
	test1.insertElement(3);
	test1.insertElement(1);
	test1.insertElement(5);
	test1.insertElement(7);
	test1.insertElement(9);
	test1.printSet();

	IntegerSet test2(10);
	test2.insertElement(2);
	test2.insertElement(4);
	test2.insertElement(6);
	test2.insertElement(8);
	test2.insertElement(10);
	test2.printSet();
	
	IntegerSet test3(10);
	test3.insertElement(0);
	test3.insertElement(5);
	test3.insertElement(9);
	test3.insertElement(2);

	IntegerSet test4(10);
	test4.insertElement(3);
	test4.insertElement(5);
	test4.insertElement(7);

	IntegerSet unionSet(10);
	IntegerSet* setPtr = nullptr;
	setPtr = &unionSet;
	setPtr = test3.unionOfSets(&test4, &unionSet);
	unionSet.printSet();

	IntegerSet interSet(10);
	setPtr = nullptr;
	setPtr = &interSet;
	setPtr = test3.intersectionOfSets(&test4, &interSet);
	interSet.printSet();

	system("PAUSE");
	return 0;
}