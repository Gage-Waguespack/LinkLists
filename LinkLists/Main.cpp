#include "List.h"
#include <iostream>

int main()
{
	List<int>* testList = new List<int>();

	testList->pushFront(5);
	testList->pushFront(6);
	testList->pushFront(2);
	testList->pushFront(4);
	testList->pushFront(1);
	testList->pushFront(9);

	testList->print();
	system("pause");
}