/*Cho danh sách thành viên của công ty của công ty X, mỗi thành viên gồm những thông tin sau :

Mã nhân viên gồm viết tắt của chức vụ (GD : Giám đốc, PGD : Phó giám đốc, TP : Trưởng phòng, NV : Nhân viên) kèm theo số thứ tự được phân cách nhau bởi dấu gạch giữa.

Chức vụ : Được suy ra từ mã nhân viên

Tên nhân viên

Ngày sinh : Đủ 3 phần ngày tháng năm, cần đưa về dạng chuẩn dd/mm/yyyy

Số ngày công : Số nguyên dương không quá 31

Lương cơ bản : Số nguyên dương không quá 10^6

Phụ cấp theo chức vụ

Thưởng

Hãy tính thu nhập của mỗi nhân viên và in ra theo thứ tự giảm dần về thu nhập, biết rằng thu nhập được tính bằng = Lương cứng + Phụ cấp + Thưởng. Lương cứng được tính bằng số ngày công nhân với lương cơ bản. Phụ cấp sẽ được tính theo chức vụ : Giám đốc : 2000000, Phó giám đốc : 1000000, Trưởng phòng : 500000, Nhân viên : 200000. Thưởng được tính như sau :

Số ngày công >= 27 : 20% lương cứng

Số ngày công >= 25 : 10% lương cứng

Số ngày công < 25 : 0% lương cứng

Input Format

Dòng 1 là N : số lượng nhân viên

5N dòng tiếp theo mô tả thông tin nhân viên, mỗi thông tin gồm 5 dòng. Dòng 1 là mã nhân viên, dòng 2 là tên nhân viên, dòng 3 là ngày sinh, dòng 4 là số ngày công, dòng 5 là lương cơ bản

Constraints

1<=N<=1000

Output Format

In ra danh sách thành viên của công ty theo lương giảm dần, nếu có 2 người cùng lương thì in theo thứ tự mã nhân viên tăng dần về từ điển. Mỗi thành viên in mã, tên, chức vụ, ngày sinh, số ngày công, lương cơ bản, thu nhập.

Sample Input 0

8
NV-0001
Vu Phuong Minh
16/10/1979
24
167000
NV-0002
Nguyen Hong Hai
23/11/1975
22
236000
GD-0003
Nguyen Hong Hai
14/6/1972
22
1000000
NV-0004
Vu Ngoc Tuan
9/11/1974
30
150000
NV-0005
Vu Van Hai
19/7/1972
23
216000
TP-0006
Nguyen Ngoc Hai
15/5/1975
28
750000
NV-0007
Vu Van Nam
1/10/1975
28
176000
NV-0008
Nguyen Phuong Minh
22/5/1975
29
205000
Sample Output 0

TP-0006 Nguyen Ngoc Hai Truong phong 15/05/1975 28 750000 25700000
GD-0003 Nguyen Hong Hai Giam doc 14/06/1972 22 1000000 24000000
NV-0008 Nguyen Phuong Minh Nhan vien 22/05/1975 29 205000 7334000
NV-0007 Vu Van Nam Nhan vien 01/10/1975 28 176000 6113600
NV-0004 Vu Ngoc Tuan Nhan vien 09/11/1974 30 150000 5600000
NV-0002 Nguyen Hong Hai Nhan vien 23/11/1975 22 236000 5392000
NV-0005 Vu Van Hai Nhan vien 19/07/1972 23 216000 5168000
NV-0001 Vu Phuong Minh Nhan vien 16/10/1979 24 167000 4208000
*/

