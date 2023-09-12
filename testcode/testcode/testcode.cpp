#include <iostream>
using namespace std;

int sum(int* a, int* b)
{
	*a += 15;
	return *a + *b;
}
int main(int argc, char const* argv[])
{

	int a = 23, b = 40;
	cout << sum(&a, &b) << endl;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	return 0;
}