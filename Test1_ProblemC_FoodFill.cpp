/*Cho một bảng số cỡ N hàng và M cột, trên mỗi ô của bảng số có ghi một số nguyên X, 
Tèo yêu thích các ô trên bảng có cùng giá trị X và nằm cạnh nhau vì thế anh ta nhờ bạn 
xác định các ô cạnh nhau (chung đỉnh) mà có cùng số ghi trên đó. 
Tèo coi diện tích một vùng các ô liền kề là số lượng các ô nằm cạnh nhau (chung đỉnh) mà chúng có cùng giá trị của X. 
Bạn hãy giúp Tèo liệt kê các giá trị khác nhau xuất hiện trên bảng số theo thứ tự tăng dần và với mỗi giá trị đó 
bạn hãy liệt kê diện tích các vùng chứa giá trị này theo diện tích tăng dần.

1 1 1 2 1
2 2 1 1 2
2 2 2 3 2
3 2 1 3 3
1 1 3 3 1

Ví dụ trong hình trên có :

3 vùng số 1 với diện tích là 1, 3, 6

2 vùng số 2 với diện tích là 3, 6

2 vùng số 3 với diện tích là 1, 5

Input Format

Dòng 1 là N và M

N dòng tiếp theo mỗi dòng gồm M số nguyên X

Constraints

1<=N,M<=50

-100<=X<=100

Output Format

In ra đáp án của bài toán, với mỗi dòng in ra giá trị và diện tích các cùng chứa giá trị này theo thứ tự tăng dần

Sample Input 0

5 5
2 4 3 1 3 
4 3 4 1 3 
2 3 2 3 3 
3 1 4 1 4 
2 1 4 3 2 
Sample Output 0

1 : 1 2 2 
2 : 1 1 1 1 1 
3 : 1 4 4 
4 : 1 2 3
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m, a[100][100];
int dem = 0;

void nhap(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, int x){
	++dem;
	a[i][j]=1000;
	for(int k=0;k<8;k++){
		int i1=i+dx[k], j1=j+dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == x){
			Try(i1, j1, x);
		}
	}
}

int main()
{
	nhap();
	map<int, vector<int>> mp;
	for(int i=1; i<=n; i++){
		for(int j=1; j<= m; j++){
			if(a[i][j] != 1000){
				int tmp = a[i][j];
				dem=0;
				Try(i, j, tmp);
				mp[tmp].push_back(dem);
			}
		}
	}
	for(auto it : mp){
		sort(it.second.begin(), it.second.end());
		cout << it.first << " : ";
		for(int x : it.second){
			cout << x << ' ';
		}
		cout << endl;
	}
}