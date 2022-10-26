#include <iostream>

void Numbers(bool b, int n)

{
	for(int i = b; i <= n; i += 2)
	std::cout << i << '\n';
}

int main()
{
	const int n = 100;
	Numbers(false, n);
}