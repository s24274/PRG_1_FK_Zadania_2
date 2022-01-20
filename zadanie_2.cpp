#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

auto is_palindrome(std::string str) -> bool
{ 
	int i = 0, j = str.size()-1;
	
	while (i != j)
	{ 
		if (str[i] != str[j]) 
		return false;
		
		i++;
		j--;
	}
	
	return true;
}

auto filter_palindromes(std::vector<std::string> v) -> std::vector<std::string>
{
	int l = v.size();
	std::vector<std::string> x = {};
	
	
		for (int i = 0; i < l; i++)
		{
			bool rozwiazanie = is_palindrome(v[i]);
			
			if (rozwiazanie) 
			{
				x.push_back(v[i]);
			}
			
		}
return x;
}


auto main() -> int 
{
	std::vector<std::string> v_str = {"ala", "kajak", "klawiatura"};
	std::vector<std::string> v_palin = filter_palindromes(v_str);
	
	std::cout << "Znalezione palindromy: ";
	
	for (auto elements : v_palin)
		{
			std::cout << elements << " ";
		}
	std::cout << "\n";

return 0;
}
	
	
	
	
	
	
	
