#include <iostream>
#include <string>
#include <vector>


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

struct group 
{
	std::string name;
	std::vector<student> members;
};

auto add_st (group& x, student stu) -> void
{
	(x.members).push_back(stu);
}

auto members_of_gr(group x) -> void
{ 
	int l = (x.members).size();
	std::vector<student> y = x.members;
	std::cout << "Nazwa grupy: " << x.name << "\n";
	std::cout << "Studenci: \n";
	
	for (int i = 0; i < l; i++)
	{
		std::cout << y[i].name << " " << y[i].surname << "\n";
	}
	std::cout << "\n";
}

auto main() -> int 
{
	
	std::vector<student> students = {};
	student st1 = {"Alicja", "Wieloch", {3, 3.5, 5}};
	student st2 = {"John", "Smith", {5, 4, 5}};
	student st3 = {"Toru", "Okada", {5, 3.5, 5}};
	student st4 = {"Kumiko", "Wataya", {4, 4, 5}};
	
	group gr1 = {"Grupa 1", {st1, st2}};
	members_of_gr(gr1);
	add_st(gr1,st3);
	members_of_gr(gr1);
	
	std::cout << "\n";
}








