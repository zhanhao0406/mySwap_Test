#include "swap.h"

//º¯ÊýµÄ¶¨Òå
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout<< "After Swap"<< endl;
	cout << "Now a = " << a << endl;
	cout << "Now b = " << b << endl;

}
