#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int Day, int Month, int Year)
    {
        setDay(Day);
        setMonth(Month);
        setYear(Year);
    }

    void setDay(int Day)
    {
        if (Day >= 1 && Day <= 31)
        {
            day = Day;
        }
        else
        {
            cout << "Invalid day! Setting day to 1." << endl;
            day = 1;
        }
    }

    void setMonth(int Month)
    {
        if (Month >= 1 && Month <= 12)
        {
            month = Month;
        }
        else
        {
            cout << "Invalid month! Setting month to 1." << endl;
            month = 1; 
        }
    }

    void setYear(int Year)
    {
        year = Year;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    bool isValidDate()
    {
    
        if (month < 1 || month > 12 || day < 1 || day > 31)
        {
            return false;
        }

        if (month == 2) // February
        {
            if (isLeapYear() && day > 29)
                return false;
            if (!isLeapYear() && day > 28)
                return false;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            if (day > 30)
                return false;
        }

        return true;
    }

    bool isLeapYear()
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            return true;
        }
        return false;
    }

    void displayDate()
    {
        if (isValidDate())
        {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        }
        else
        {
            cout << "Invalid date!" << endl;
        }
    }
};

int main()
{
    Date date1(29, 2, 2024); 
    date1.displayDate();

    Date date2(31, 4, 2023); 
    date2.displayDate();

    return 0;
}