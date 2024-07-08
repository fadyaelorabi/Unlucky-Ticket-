#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_unlucky_ticket(int n, const string &s1, const string &s2) {
    int flag1 = 0, flag2 = 0;
    for (int i = 0; i < n; ++i) {
        flag1 += (s1[i] > s2[i]) ? 1 : 0;
        flag2 += (s1[i] < s2[i]) ? 1 : 0;
    }
    return (flag1 == n) || (flag2 == n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string ticket;

    cin >> n;
    cin >> ticket;

    string s1 = ticket.substr(0, n);
    string s2 = ticket.substr(n);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << (is_unlucky_ticket(n, s1, s2) ? "YES" : "NO");

    return 0;
}
