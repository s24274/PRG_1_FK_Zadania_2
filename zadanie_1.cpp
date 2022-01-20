#include <iostream>
#include <vector>

auto average_of(std::vector<int> v) -> double
{ 
	double srednia = 0;
	int l = v.size();
	
		for (int i = 0; i < l; i++)
		{
			srednia = srednia + v[i];
		}
return srednia/l;
}

auto main() -> int 
{
	std::vector<int> v = {1,2,3,4,5,6};
	double srednia = average_of(v);
	std::cout << "Srednia arytmetyczna liczb : ";
		
		for (auto elements : v)
		{
			std::cout << elements << " ";
		}
	std::cout << " to: " << srednia << "!" << "\n";
return 0;
}
	
	
	
	
	
	
