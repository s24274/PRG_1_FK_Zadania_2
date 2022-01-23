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

auto sort(std::vector<float>& x) -> void 
{
	int l = x.size();
	
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < l-1; j++)
		{
			if (x[j] > x[j + 1]) 
			{	
				std::swap(x[j], x[j + 1]);
			}
		}
	}
}

auto b_sort(std::vector<float>& x) -> void
{
	int l = x.size();
	bool srt = true;
	
	for (int i = 0; i < l && srt; i++)
	{
		srt  = false;
		
		for (int j = 0; j < l - 1; j++)
		{
			if (x[j] > x[j + 1])
			{
				std::swap(x[j], x[j + 1]);
				srt = true;
			}
		}
	}
}

auto mediana(std::vector<float> x) -> double 
{
	sort(x);
	int l = x.size();
	int div2 = l/2;
	double med;
	
	if (l%2==0)
	{
		med = (x[div2] + x[(div2) + 1])/2;
		
	}
	
	else med = x[div2];
	
return med;
}

auto best_groups_name(std::vector<group> gr) -> group
{
	int l = gr.size();
	double best = 0;
	int z = 0;
	double med;
	
	for (int i = 0; i < l; i++)
	{
		group g = gr[i];
		std::vector<float> group_marks = {};
		int l_mem = (g.members).size();
		
		for (int j = 0; j < l_mem; j++)
		{
			int l_g = (g.members[j].marks).size();
			
			for (int k = 0; k < l_g; k++)
			{
				float mark = g.members[j].marks[k];
				group_marks.push_back(mark);
			}
		}
		med = mediana(group_marks);
		
		if (med > best)
		{
			best = med;
			z = i;
		}
	}
	
return gr[z];
}

auto main() -> int 
{
	
	std::vector<student> students = {};
	student st1 = {"Alicja", "Wieloch", {3, 3.5, 5}};
	student st2 = {"John", "Smith", {5, 4, 5}};
	student st3 = {"Toru", "Okada", {5, 3.5, 5}};
	student st4 = {"Kumiko", "Wataya", {4, 4, 5}};
	
	group gr1 = {"Grupa 1", {st1, st2}};
	group gr2 = {"Grupa 1", {st3, st4}};
	
	std::vector<group> all_grs = {gr1,gr2};
	
	//for (auto elements : all_grs)
	//{
	//	std::cout << elements.name << " ";
	//}
	
	group the_best = best_groups_name(all_grs);
	
	std::cout << "Najlepsza grupa: " << the_best.name << "\n";
	std::cout << '\n';

return 0;
	
}
		
				
		






























