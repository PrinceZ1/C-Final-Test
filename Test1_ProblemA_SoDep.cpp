/*Một số được coi là số đẹp nếu các chữ số ở vị trí chẵn của nó là số chẵn và các chữ số ở vị trí lẻ của nó là số lẻ. Ví dụ N = 1658347 là một số đẹp. Nhiệm vụ của bạn là kiểm tra xem các số đã cho có phải là số đẹp hay không?

Gợi ý : Chú ý trường hợp N âm

Input Format

Dòng đầu tiên là T : số lượng trường hợp

T dòng tiếp theo mỗi dòng là một số nguyên N

Constraints

1<=T<=1000

-10^18<=N<=10^18

Output Format

Đối với mỗi trường hợp in ra YES hoặc NO tương ứng nếu N là số đẹp hoặc không

Sample Input 0

3
12345678
23
18
Sample Output 0

YES
NO
YES
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll n){
	if(n<0) n*=-1;
	string s = to_string(n);
	for(int i=0;i<s.size();i++){
		if((i+1)%2 != (s[i]-'0')%2){
			return false;
		}
	}
	return true;
}

int main()
{
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}