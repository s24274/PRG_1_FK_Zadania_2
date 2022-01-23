#include <iostream>
#include <vector>

auto dot_product(std::vector<double> v1, std::vector<double> v2) -> double
{
	double x = 0;
	int l = v1.size();
	
	if (v1.size()==v2.size())
	{
		for (int i = 0; i < l; i++)
		{
			x = x + v1[i]*v2[i];
		}
	}
	return x;
}
 auto main() -> int
{
 
 int a;
 
	std::vector<double> v1 = {};
	std::vector<double> v2 = {};
	
	std::cout << "Podaj wartosc pierwszego wektora: ";
	std::cin >> a;
	v1.push_back(a);
	std::cout << "Podaj wartosc drugiego wektora: ";
	std::cin >> a;
	v2.push_back(a);
	
	double prod = dot_product(v1,v2);
	std::cout << "Iloczyn skalarny wynosi: " << prod << "\n";
	std::cout << "\n";

return 0;
}
	

