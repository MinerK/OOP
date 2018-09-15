#include "date.h"

int main() {
	int y, m, d;
	std::cout << "Enter day: "; std::cin >> d;
	std::cout << "Enter month: "; std::cin >> m;
	std::cout << "Enter year: "; std::cin >> y;
	date date1(d, m, y);
	std::cout << "Date: " << date1.GetDay() << "." << date1.GetMonth() << "." << date1.GetYear() << std::endl;
	date1.AddFiveDays();
	if (date1.GetDay()>28) 
	{
		switch (date1.GetMonth()) 
		{
		case 2:
			if (date1.isleapyear() && date1.GetDay() > 29) 
			{
				date1.SetDay(date1.GetDay() - 29);
				date1.SetMonth(date1.GetMonth() + 1);
			}
			if (!(date1.isleapyear())) 
			{
				date1.SetDay(date1.GetDay() - 28);
				date1.SetMonth(date1.GetMonth() + 1);
			}
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (date1.GetDay()>31) 
			{
				date1.SetDay(date1.GetDay() - 31);
				date1.SetMonth(date1.GetMonth() + 1);
			}
			break;
		default: 
			if (date1.GetDay()>30) 
			{
				date1.SetDay(date1.GetDay() - 30);
				date1.SetMonth(date1.GetMonth() + 1);
			}
			break;
		}
	}
	if (date1.GetMonth()>12) 
	{
		date1.SetMonth(date1.GetMonth() - 12);
		date1.SetYear(date1.GetYear() + 1); 
	}

	std::cout << "After 5 days: " << date1.GetDay() << "." << date1.GetMonth() << "." << date1.GetYear() << std::endl;



	system("pause");
	return 0;
}

