/*
enum ItemType
{
ITEM_HEALTHPOTION,
ITEM_TORCHES,
ITEM_ARROWS,
MAX_ITEM
};

int countTotalItems(int* items_array)
{
int sum = 0;
for(int i=0; i < MAX_ITEM; i++)
sum += items_array[i];
return sum;
}

int main()
{
int player_items[MAX_ITEM] = {2, 5, 10};

std::cout << "Player has a total of " << countTotalItems(player_items) <<
" items." << std::endl;


return 0;
}
*/
/*
#include <iostream>
#include <string>

struct Student {
	std::string name;
	int grade;
};

int promptNumberStudents()
{
	while (1) {
		std::cout << "Enter the number of students to be evaluated: ";
		int iNumStudents;
		std::cin >> iNumStudents;

		if (std::cin.fail()) // extraction failed
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else { // extraction successful
			std::cin.ignore(32767, '\n');
			if (iNumStudents > 0) // range check
				return iNumStudents;
		}
	}
}

void readStudentInfo(Student& student)
{
	// TODO: implement error checking?
	std::cin >> student.name;
	std::cin >> student.grade;
}

void swap(Student& a, Student& b)
{
	Student temp = b;
	b = a;
	a = temp;
}

void sort(Student* list, int numberOfStudents)
{
	for (int index = 0; index < numberOfStudents; index++) {
		bool sorted = false;
		for (int j = 0; j < numberOfStudents - index - 1;
			j++) // compare j to numStudents - index since index is the amount of
				 // students that have been cleared at this point
		{
			if (list[j].grade < list[j + 1].grade) {
				swap(list[j], list[j + 1]);
				sorted = true;
			}
		}

		if (!sorted) // if no swaps were done on an iteration, the array is sorted
					 // and we can exit the loop
			break;
	}
}

void printStudentList(const Student* list, int numberOfStudents)
{
	for (int i = 0; i < numberOfStudents; i++) {
		std::cout << list[i].name << " got a grade of " << list[i].grade << ".\n";
	}
}

int main()
{
	int iNumStudents = promptNumberStudents();
	Student* students = new Student[iNumStudents];

	for (int i = 0; i < iNumStudents; i++)
		readStudentInfo(students[i]);

	sort(students, iNumStudents);

	printStudentList(students, iNumStudents);

	delete[] students;
	students = nullptr;

	return 0;
}
*/
/*
#include <iostream>

void printCString(const char *str)
{
  while(*str != '\0')
    std::cout << *str++;
}

int main()
{
  char *name = "Matias Lago";
  printCString(name);

  return 0;
}
*/
