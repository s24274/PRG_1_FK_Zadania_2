#include <iostream>
#include <string>
#include <vector>

auto miejsce(std::string x, std::string xyz) -> int
{
	int n = xyz.size();
	
	for (int i = 0; i < n; i++)
	{
		if (xyz[i] == x[0])
		{
			return i;
		}
	}
return -1;
}

auto zakres(std::vector<std::string> s, std::string xyz) -> std::vector<std::string>
{
	int l1 = s.size();
	std::string x, y;
	int n = 0;
	std::vector<std::string> rozw = {};
	std::string wers = {};
	
	for (int i = 0; i < l1; i++)
	{
		if(s[i] != "stop")
		{
			x = s[i][0];
			int j = 1;
			while (s[i][j] ==' ')
			j++;
			y = s[i][j];
			
			if (x == y)
			{
				rozw.push_back(x);
			}
			else
			{
				if (x < y)
				{
					wers = {};
					n = miejsce(x,xyz);
					while (xyz[n] != y[0])
					{
						wers = wers + xyz[n];
						n++;
					}
					
					wers = wers + xyz[n];
					rozw.push_back(wers);
				}
				else 
				{
					wers = {};
					n = miejsce(y, xyz);
					
					while (xyz[n] != x[0])
					{
						wers = wers + xyz[n];
						n++;
					}
					wers = wers + xyz[n];
					rozw.push_back(wers);
				}
			}
		}
	}
return rozw;				
			
}

auto main() -> int
{
	std::string abc = {"abcdefghijklmnopqrstuvwxyz"};
	std::vector<std::string> pary = {};
	std::cout << "Podawaj pary liter lub napisz stop: ";
	
	for (std::string para = {}; std::getline(std::cin, para) && para != "stop"; pary.push_back(para))
	{
		std::cout << para << "\n";
		std::cout << "Podaj pary liter: ";
	}
	std::cin.ignore();
	
	//pary = {"a b", "b a", "a z", "z a", "x x", "stop"};
	
	std::vector<std::string> z = zakres(pary, abc);
	
	for (auto elements : z)
		{
			std::cout << elements << " ";
		}
	std::cout << "\n";
	
return 0;

	
}
