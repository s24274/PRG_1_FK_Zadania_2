#include <iostream>
#include <vector>


auto contains(int a, std::vector<int> b, int leng)
{
	for (int i = 0; i < leng; i++)
	{
		if (a == b[i])
		{
			return true;
		}
	}
return false;
}

auto contains_all(std::vector<int> a, std::vector<int> b) -> bool
{
	int l1 = a.size();
	int l2 = b.size();
	
	for (int i = 0; i < l1; i++)
	{
		for (int j = 0; j < l2; j++)
		{ 
			if (contains(a[i], b, l2) == false)
			{
				return false;
			}
		}
	}
return true;
}

auto main() -> int 
{
	std::vector<int> ab = {1,2,3,4,5,6,7,8};
	std::vector<int> ba = {2,4,6,8};
	
	std::cout << "Sprawdze, czy wektor: { ";
	for (auto elements : ba)
		{
			std::cout << elements << " ";
		}
		
	std::cout << "} zawiera sie w wektorze: { ";
	for (auto elements : ab)
		{
			std::cout << elements << " ";
		}
	std::cout << "}.\n";
	
	bool rozwiazanie = contains_all(ba,ab);
	
	if (rozwiazanie)
	{
		std::cout << "Zawiera sie.";
	}
	else 
		std::cout << "Nie zawiera sie.";
		
	std::cout << "\n";
	
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

