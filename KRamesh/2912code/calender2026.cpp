#include <iostream>
using namespace std;
int main()
{
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string week[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int cnt = 12;
    bool isFirst = true;
    int mnth = 1;
    while (cnt > 0)
    {
        cout << month[mnth - 1] << " " << 2026 << endl;
        cout << endl;
        for (int i = 0; i < 7; i++)
        {
            cout << week[i] << " ";
        }
        cout << endl;
        int dys = days[mnth - 1];
        int total = dys;
        int cnt = 1;
        if (isFirst)
        {
            cout << " " << " " << " " << " " << " " << " " << "         ";
            cnt = 4;
            while (dys > 0)
            {
                if (cnt == 7)
                {
                    cout << " " << total - dys + 1 << " " << " ";
                    cnt = 1;
                    cout << endl;
                }
                else
                {
                    cout << " " << total - dys + 1 << " " << " ";
                    cnt++;
                }
                dys--;
            }
            while (cnt <= 7)
            {
                cout << " " << " ";
                cnt++;
            }
        }
        else
        {
            int cnt = 1;
            int dys = days[mnth - 1];
            int total = dys;
            while (dys > 0)
            {
                if (cnt == 7)
                {
                    cout << " " << total - dys + 1 << " " << " ";
                    cout << endl;
                    cnt = 1;
                }
                else
                {
                    cout << " " << total - dys + 1 << " " << " ";
                    cnt++;
                }
                dys--;
            }
            while (cnt <= 7)
            {
                cout << " " << " ";
                cnt++;
            }
        }
        isFirst = false;
        mnth++;
        cnt--;
        cout << endl;
        cout << endl;
    }
}