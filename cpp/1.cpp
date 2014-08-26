#include <iostream>

int main()
{
	int n;
	std::cout << "Enter n:";
	std::cin >> n;

	int s = 0;
	for(int i = 0; i < n; i++)
	{
		if(i%3 ==0 || i%5 == 0)
		{
			s = s+i;
		}
	}

	std::cout << "sum: " << s << std::endl;
}
