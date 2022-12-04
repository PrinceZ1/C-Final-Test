/*Năm 2021 là một năm đặc biệt với các sinh viên trường PTIT khi họ phải thi các môn lập trình thông qua hệ thống website Code PTIT, 
do tình hình dịch Covid nên các sinh viên được thi online và vì thế rất nhiều thí sinh có ý định gian lận.
Để tránh tình trạng gian lận, các sinh viên sẽ bị theo dõi bằng một phần mềm, 
phần mềm này sẽ ghi lại tất cả các log truy cập vào các website mà sinh viên này truy cập trong thời gian thi. 
Nếu trong các website truy cập của thí sinh này có website nào đó ngoài website : code.ptit.edu.vn sẽ đều bị đánh trượt.
Bạn hãy xác định xem các sinh viên dự thi có bị đánh trượt hay không? Các thí sinh không truy cập website code.ptit.edu.vn để làm bài cũng bị đánh trượt.

Input Format

Dòng đầu tiên là N : số lượng sinh viên

N dòng tiếp theo mỗi dòng ghi thông tin của sinh viên dự thi gồm mã sinh viên và theo sau là họ tên. 
Mã sinh viên là xâu có không quá 10 kí tự và không có dấu cách. Không có 2 mã sinh viên trùng nhau

Dòng tiếp theo là M : số lượng lượt truy cập các website

M dòng tiếp theo ghi lại thông tin lượt truy cập bao gồm : Thời gian truy cập gồm ngày và giờ, 
mã sinh viên của thí sinh truy cập, địa chỉ website mà sinh viên này truy cập. 
Mỗi thông tin viết cách nhau một dấu cách

Constraints

1<=N<=1000

N<=M<=100000

Output Format

Đối với mỗi sinh viên bạn hãy in ra mã sinh viên, tên sinh viên và in ra FAIL 
nếu sinh viên này gian lận và bị đánh trượt, ngược lại in ra OK. 
Các sinh viên được liệt kê theo thứ tự mã sinh viên tăng dần về từ điển. 
Xem output mẫu để rõ hơn chi tiết

Sample Input 0

5
SV00001 Pham Duc Tuan
SV00002 Pham Hong Trong Tam
SV00003 Nguyen Duc Trong Tam
SV00004 Luong Hong Trong Tam
SV00005 Pham Manh Hung
10
26/11/2022 19:27:24 SV00005 code.ptit.edu.vn
26/11/2022 19:15:12 SV00005 code.ptit.edu.vn
26/11/2022 19:19:56 SV00001 code.ptit.edu.vn
26/11/2022 19:56:41 SV00005 code.ptit.edu.vn
26/11/2022 19:59:27 SV00005 code.ptit.edu.vn
26/11/2022 19:52:10 SV00003 facebook.com
26/11/2022 19:23:16 SV00004 code.ptit.edu.vn
26/11/2022 19:28:16 SV00004 code.ptit.edu.vn
26/11/2022 19:23:16 SV00005 youtube.com
26/11/2022 19:22:34 SV00004 youtube.com
Sample Output 0

SV00001 Pham Duc Tuan OK
SV00002 Pham Hong Trong Tam FAIL
SV00003 Nguyen Duc Trong Tam FAIL
SV00004 Luong Hong Trong Tam FAIL
SV00005 Pham Manh Hung FAIL
Explanation 0

Sinh viên có mã sinh viên SV00002 bị đánh FAIL do không truy cập website để làm bài.

Sample Input 1

5
SV00001 Tran Ngoc Hai
SV00002 Nguyen Duc Tai
SV00003 Pham Ngoc Tuan
SV00004 Tran Phuong Trong Tam
SV00005 Luong Phuong Tai
10
26/11/2022 19:19:44 SV00003 facebook.com
26/11/2022 19:46:13 SV00002 code.ptit.edu.vn
26/11/2022 19:34:32 SV00001 facebook.com
26/11/2022 19:47:12 SV00002 code.ptit.edu.vn
26/11/2022 19:15:26 SV00001 code.ptit.edu.vn
26/11/2022 19:46:38 SV00004 code.ptit.edu.vn
26/11/2022 19:47:49 SV00004 code.ptit.edu.vn
26/11/2022 19:38:29 SV00003 code.ptit.edu.vn
26/11/2022 19:58:50 SV00003 facebook.com
26/11/2022 19:30:51 SV00001 youtube.com
Sample Output 1

SV00001 Tran Ngoc Hai FAIL
SV00002 Nguyen Duc Tai OK
SV00003 Pham Ngoc Tuan FAIL
SV00004 Tran Phuong Trong Tam OK
SV00005 Luong Phuong Tai FAIL
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
	int n; cin >> n;
	map<string, pair<string, bool>> mp;
	cin.ignore();
	for(int i=0; i<n; i++){
		string s; getline(cin, s);
		vector<string> v;
		string tmp;
		stringstream ss(s);
		while(ss >> tmp){
			v.push_back(tmp);
		}
		string msv = v[0], hoten = "";
		for(int i=1; i<v.size(); i++){
			hoten += v[i]+" ";
		}
		hoten.pop_back();
		mp[msv].first = hoten;
		mp[msv].second = true;
	}
	int m; cin >> m;
	set<string> duthi;
	for(int i=0; i<m; i++){
		string x,y,z,t; cin >> x >> y >> z >> t;
		if(t != "code.ptit.edu.vn")
			mp[z].second = false;
		if(t == "code.ptit.edu.vn")
			duthi.insert(z);
	}
	for(auto it : mp){
		cout << it.first << ' ' << it.second.first << ' ';
		if(it.second.second == false || duthi.count(it.first) == 0){
			cout << "FAIL" << endl;
		}
		else cout << "OK" << endl;
	}
}