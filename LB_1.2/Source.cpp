#include "Book.h"
#include <iostream>

using namespace std;

int main()
{
	Book b;
	b.Read();
	b.Init();
	b.Display();
	b.Search("Book1");
	return 0;
}
