# OOP
#include <iostream>


class date
{
public:
	date(unsigned int y, unsigned int m, unsigned int d);
	date();
	~date();
	bool isleapyear();
	void AddFiveDays();
	int GetYear();
	int GetMonth();
	int GetDay();
	void SetYear(int);
	void SetMonth(int);
	void SetDay(int);


private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
	
};


int main()
{
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

	std::cout << "Date: " << date1.GetDay() << "." << date1.GetMonth() << "." << date1.GetYear() << std::endl;



	system("pause");
	return 0;
}

date::date(unsigned int d, unsigned int m, unsigned int y)
{
	year = y;
	month = m;
	day = d;
}

date::date()
{
	year = 2018;
	month = 1;
	day = 1;
}

date::~date()
{
	std::cout << "Date has been deleted." << std::endl;
}

bool date::isleapyear()
{
	bool res = year % 4 == 0 && year % 100 != 0;
	return res;	
}

void date::AddFiveDays()
{
	day += 5;
	/*if (day>28)
	{
		switch (month)
		{
		case 2:
			if (isleapyear() && day > 29)
			{
				day -= 29;
				month++;
			}
			if (!(isleapyear()))
			{
				day -= 28;
				month++;
			}
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (day>31)
			{
				day -= 31;
				month++;
			}
			break;				
		default:
			if (day>30)
			{
				day -= 30;
				month++;
			}
			break;
		}
	}
	if (month>12)
	{
		month -= 12;
		year++;
	}*/
}

int date::GetYear()
{
	return year;
}

int date::GetMonth()
{
	return month;
}

int date::GetDay()
{
	return day;
}

void date::SetYear(int y)
{
	year = y;
}

void date::SetMonth(int m)
{
	month = m;
}

void date::SetDay(int d)
{
	day = d;
}
