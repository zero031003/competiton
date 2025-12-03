#include <bits/stdc++.h>
using namespace std;
/**
 * @brief 两数加法
 *
 * @param a
 * @param b
 * @return int
 */
int add(int a, int b)
{
    return (a + 10 * b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}