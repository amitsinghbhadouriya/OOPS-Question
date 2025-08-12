#include <iostream>
using namespace std;

class TIME
{
private:
    int hours;
    int minutes;
    int seconds;
    void organize()
    {
        minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
    }

public:
    TIME()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    TIME(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
        organize();
    }
    void inputTime()
    {
        cout << "Enter time(hours minutes seconds): ";
        cin >> hours >> minutes >> seconds;
        organize();
    }
    void Display() const
    {
        int totalHours = hours;
        int days = totalHours / 24;
        int displayHours = totalHours % 24;
        cout << "Time: ";
        if (days > 0)
        {
            cout << displayHours << "h: " << minutes << "m: " << seconds << "s";
            cout << "(+" << days << "day";
            if (days > 1)
                cout << "s";
            cout << ")";
        }
        else
        {
            cout << displayHours << "h: " << minutes << "m: " << seconds << "s";
        }
        cout << endl;
    }
    TIME operator+(const TIME &t)
    {
        TIME result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;
        result.seconds = seconds + t.seconds;
        result.organize();
        return result;
    }
};
int main()
{
    TIME t1, t2, t3;
    cout << "Enter the first time: " << endl;
    t1.inputTime();
    cout << "\nEnter the second time: " << endl;
    t2.inputTime();
    t3 = t1 + t2;
    cout << "\nFirst Time: " << endl;
    t1.Display();
    cout << "\nSecond Time: " << endl;
    t2.Display();
    cout << "\nSum of both Times: " << endl;
    t3.Display();
    return 0;
}