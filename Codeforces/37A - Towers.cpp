#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int bars, number, length[1001] = {0};
    cin >> bars;
    while (bars--)
    {
        cin >> number;
        length[number] += 1;
    }

    int max = *max_element(length, length + 1001);
    int total = 1001 - count(length, length + 1001, 0);

    cout << max << " " << total;

    return 0;
}
