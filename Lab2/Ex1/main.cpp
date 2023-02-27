#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
	NumberList list;

	list.Init();
	list.Add(50);
	list.Add(3);
	list.Add(23);
	list.Sort();
	list.Add(4);
	list.Print();
	return 0;
}