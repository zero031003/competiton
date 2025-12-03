#include <bits/stdc++.h>
using namespace std;
/**
 * @brief 两数加法
 *
 * @param a
 * @param b
 * @return int
 */
int add_10(int a, int b)
{

    return 10 * (a + b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << add_10(a, b) << endl;
    return 0;
}