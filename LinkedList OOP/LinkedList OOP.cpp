// LinkedList OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "List.h"

using namespace std;

int main()
{
	List ihs;

	ihs.AddNode(2);
	ihs.AddNode(3);
	ihs.AddNode(4);
	ihs.AddNode(50);
	ihs.AddNode(8);
	ihs.AddNode(9);
	ihs.AddNode(11);
	ihs.AddNode(13);

	ihs.PrintList();

	ihs.DeleteNode(4);

	ihs.PrintList();

    return 0;
}

