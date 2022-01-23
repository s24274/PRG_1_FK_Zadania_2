#include <iostream>
#include <string>
#include <vector>

auto split(std::string s) -> std::vector<std::string>
{
	
	int l = s.size();
	int i = 0;
	std::vector<std::string> a = {};
	std::string b = {};
	
	while (i < l)
	{
		b = {};
			
		if (s[i] != ' ')
		{
			while (s[i] != ' ' && i < l)
			{
				b = b + s[i];
				i++;
			}
	a.push_back("+");
		a.push_back(b);
		}
	i++;
	}
return a;
}

auto main() -> int 
{
	std::string zdanie = {};
	std::cout << "Prosze podac zdanie: ";
	
	std::cin.ignore();
	std::getline(std::cin,zdanie);
	
	std::cout << zdanie << "\n";
	
	std::vector<std::string> output = split(zdanie);
	
	for (auto elements : output)
		{
			std::cout << elements << " ";
		}
	std::cout << "\n";
}
