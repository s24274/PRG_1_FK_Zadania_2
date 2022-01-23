#include <iostream>
#include <string>
#include <vector>

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

auto get_best_student(std::vector<student> students) -> student
{
	int l = students.size();
	double best = average_of(students[0].marks);
	int best_average = 0;
	
	for (int i = 0; i < l; i++)
	{
		if (average_of(students[i].marks) > best)
		{ 
			best = average_of(students[i].marks);
			best_average = i;
		}
	}
	
return students[best_average];
}

auto main() -> int
{
	std::vector<student> students = {};
	student st1 = {"Alicja", "Wieloch", {3, 3.5, 5}};
	student st2 = {"John", "Smith", {5, 4, 5}};
	student st3 = {"Toru", "Okada", {5, 3.5, 5}};
	student st4 = {"Kumiko", "Wataya", {4, 4, 5}};
	
	students.push_back(st1);
	students.push_back(st2);
	students.push_back(st3);
	students.push_back(st4);
	
	student best = get_best_student(students);
	std::cout << "Studentem z najlepsza srednia jest: " << best.name << " " << best.surname << "\n";
	std::cout << "\n";
	
return 0;
	
}



