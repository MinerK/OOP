

#include <iostream>

class date
{
private: 
	unsigned int year, month, day;

public: 
	date(unsigned int d, unsigned int m, unsigned int y) 
	{ 
		year = y;
		month = m;
		day = d;
	} 
	date() 
	{ 
		year = 2018;
		month = 1;
		day = 1; 
	} 
	~date() 
	{
		std::cout << "Date has been deleted." << std::endl; 
	}
	bool isleapyear() 
	{ 
		return year % 4 == 0 && year % 100 != 0; 
	} 
	void AddFiveDays()
	{
		day += 5;
	}
	int GetYear()
	{
		return year;
	} 
	int GetMonth() 
	{
		return month;
	}
	int GetDay()
	{
		return day;
	}
	void SetYear(int y) 
	{
		year = y;
	}
	void SetMonth(int m) 
	{
		month = m;
	}
	void SetDay(int d) 
	{
		day = d; 
	}
};


