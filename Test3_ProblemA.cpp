/*Một số nguyên N được coi là đẹp nếu tồn tại ít nhất một số nguyên tố X sao cho N chia hết cho X và N chia hết cho cả X^3.
Ví dụ N = 48 là một số đẹp vì tồn tại ước nguyên tố X = 2 mà 48 chia hết cho cả 2 và chia hết cho cả 8(2^3). 
Cho số nguyên N, bạn hãy kiểm tra xem N có phải là số đẹp hay không?

Input Format

Dòng duy nhất chứa số nguyên N
Constraints

1<=N<=10^16
Output Format

In ra YES nếu N là số đẹp, ngược lại in ra NO

Sample Input 0

928
Sample Output 0

YES
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n ; cin >> n;
    int cnt=0;
    for(int i = 2; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            if(cnt<3) cnt=0;
        }
    }
    if(cnt>=3) cout << "YES" << endl;
    else cout << "NO" << endl;
}
