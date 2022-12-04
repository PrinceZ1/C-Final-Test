/*Một nhà kho đang quản lý các mặt hàng được nhập về, mỗi mặt hàng gồm các thông tin : 
Mã mặt hàng, tên mặt hàng, hãng mặt hàng, đơn vị (chiếc, thùng, tá...), giá nhập và giá bán. 
Bạn hãy nhập danh sách mặt hàng và in ra theo thứ tự lợi nhuận(giá bán - giá nhập) 
giảm dần cho mỗi loại hàng hóa. Nếu có 2 loại hàng hóa có cùng mức lợi nhuận, 
bạn hãy in mặt hàng có mã có thứ tự từ điển nhỏ hơn trước.

Mã mặt hàng của từng mặt hàng không được cho trước mà dựa vào các chữ cái đầu tiên của tên mặt hàng 
và ghép với số thứ tự của nó trong danh sách các mặt hàng cùng loại. 
Ví dụ một mặt hàng có tên là máy giặt và số thứ tự là 1 trong danh sách các máy giặt sẽ có mã là MG0001, 
tương tự máy giặt thứ 2 sẽ có số thứ tự MG0002...

Input Format

Dòng 1 là N : số lượng mặt hàng

4N dòng tiếp theo mô tả thông tin mặt hàng, mỗi mặt hàng gồm 4 dòng : Dòng 1 là tên mặt hàng, 
dòng 2 là hãng của mặt hàng đó, dòng 3 là đơn vị, dòng 4 là giá nhập và và giá bán

Constraints

1<=N<=1000

tên mặt hàng, hãng, đơn vị là xâu kí tự không quá 50 kí tự có thể chưa dấu cách

Giá nhập và giá bán là số nguyên không âm không quá 10^9

Output Format

In ra các mặt hàng sau khi sắp xếp, các thông tin in cách nhau một dấu cách

Sample Input 0

8
May giat
Philips
Cai
831000 1196000
Noi com dien
Sanyo
Cai
765000 1135000
May say toc
Sunhouse
Cai
499000 676000
Noi com dien
SHARP
Cai
759000 937000
May lanh
SATO
Cai
10000 105000
May giat
SATO
Cai
259000 413000
Ti vi
SHARP
Cai
510000 561000
May lanh
Sunhouse
Cai
163000 532000
Sample Output 0

NCD0001 Noi com dien Sanyo Cai 765000 1135000
ML0002 May lanh Sunhouse Cai 163000 532000
MG0001 May giat Philips Cai 831000 1196000
NCD0002 Noi com dien SHARP Cai 759000 937000
MST0001 May say toc Sunhouse Cai 499000 676000
MG0002 May giat SATO Cai 259000 413000
ML0001 May lanh SATO Cai 10000 105000
TV0001 Ti vi SHARP Cai 510000 561000
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct MH{
	string ma, ten, hang, donvi;
	int nhap, ban;
};

string solve(string s){
	string res = "";
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		res += toupper(tmp[0]);
	}
	return res;
}

bool cmp(MH a, MH b){
	int ln1= a.ban - a.nhap, ln2 = b.ban - b.nhap;
	if(ln1 != ln2)
		return ln1 > ln2;
	else
		return a.ma < b.ma;
}

int main()
{
	int n; cin >> n;
	vector<MH> v;
	map<string, int> mp;
	for(int i=0; i<n; i++){
		cin.ignore();
		string ten; getline(cin, ten);
		string hang; getline(cin, hang);
		string donvi; getline(cin, donvi);
		int nhap, ban; cin >> nhap >> ban;
		string ma = solve(ten);
		mp[ma]++;
		string tmp = to_string(mp[ma]);
		while(tmp.size() < 4) tmp = "0" + tmp;
		ma = ma + tmp;
		MH x{ma, ten, hang, donvi, nhap, ban};
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it : v){
		cout << it.ma << ' ' << it.ten << ' ' << it.hang << ' ' << it.donvi << ' ' << it.nhap << ' ' << it.ban << endl;
	}
}