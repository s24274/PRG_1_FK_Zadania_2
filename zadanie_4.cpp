#include <iostream>
#include <vector>
#include <string>

struct student 
{
	std::string name;
	std::string surname;
	std::vector<float> marks;
	
	student (std::string n, std::string s, std::vector<float> m)
	{
		name = n;
		surname = s;
		marks = m;
	}
};
auto average_of(std::vector<float> v) -> double
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
	std::vector<float> studmarks = {3.5, 3, 4, 5};
	student stud1 = {"Alicja", "Wieloch", studmarks};
	double average_marks = average_of(stud1.marks);
	
	std::cout << "Srednia ocen studenta " << stud1.name << " " << stud1.surname << " wynosi: " << average_marks << "\n";
	std::cout << "\n";
	
return 0;
}

//Duplikacja funkcji powoduje błąd. Trzeba zamienić (std::vector<int> v) na (std::vector<float> v).



		
