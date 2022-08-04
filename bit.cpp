#include <iostream>
using namespace std;
void sender();
void reciever(int a[], int len);
int main()
{
    sender();
}
void sender()
{
    cout << "Enter the number of bits to be sent : ";
    int n;
    cin >> n;
    cout << "Enter the bits ";
    int data[n];
    for (int i = 0; i < n; i++)
        cin >> data[i];
    int res[50];
    res[0] = 0;
    for (int i = 1; i < 7; i++)
        res[i] = 1;
    res[7] = 0;
    int stuffed = 0;
    int j = 8;
    int zc = 0, oc = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i] == 0)
        {
            res[j] = data[i];
            zc = 1;
            oc = 0;
            j++;
        }
        if (oc == 5 && data[i] == 1)
        {
            res[j] = 0;
            j++;
            oc = 0;
            stuffed++;
        }
        if (data[i] == 1 && oc < 5)
        {
            res[j] = 1;
            j++;
            oc++;
        }
    }
    res[j++] = 0;
    int t = j;
    for (t; t < j + 6; t++)
        res[t] = 1;
    res[t] = 0;
    for (int i = 0; i < 16 + n + stuffed; i++)
        cout << res[i];
    int len = 16 + stuffed + n;
    reciever(res, len);
}
void reciever(int a[], int len)
{
    cout << "\nReciever\n";
    for (int i = 0; i < len; i++)
        cout << a[i];
    int zc = 0, oc = 0;
    int res[20];
    int j = 0;
    for (int i = 8; i < len - 8; i++)
    {
        if (oc < 5)
        {
            res[j] = a[i];
            j++;
            if (a[i] == 1)
                oc++;
        }
        if (a[i] == 1 and oc == 5)
        {
            oc = 0;
            i++;
        }
    }
    cout << endl;
    for (int i = 0; i < j; i++)
        cout << res[i];
}