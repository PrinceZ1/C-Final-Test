/*Cho kết quả thi đấu của một giải đấu bóng đá cấp đội tuyển, bạn hãy tìm ra bảng xếp hạng của giải đấu dựa vào kết quả trên, 
bảng xếp hạng được sắp xếp theo điểm giảm dần, 
nếu 2 đội có cùng điểm sẽ xếp theo hiệu số bàn thắng giảm dần, 
nếu 2 đội cùng điểm và cùng hiệu số bàn thằng sẽ sắp xếp theo tên đội bóng tăng dần về thứ tự từ điển. 
Biết rằng trong một trận đấu, đội thắng sẽ được 3 điểm, hòa được 1 điểm và thua được 0 điểm và mỗi đội tham gia ít nhất một trận đấu.

Input Format

Gồm nhiều dòng, mỗi dòng là kết quả của một trận đấu theo cú pháp : [X] x - y [Y], trong đó :

X : tên đội bóng thứ nhất

x : số bàn thắng mà đội X ghi được

Y : tên đội bóng thứ hai

y : số bàn thắng mà đội Y ghi được

0<=x,y<=20

Constraints

Input có không quá 100000 dòng
Output Format

In ra danh bảng xếp hạng của giải đấu, mỗi dòng liệt kê tên đội bóng, điểm số và hiệu số bàn thắng.

Sample Input 0

[Spain] 3 - 7 [USA]
[Senegal] 9 - 7 [Netherlands]
[South Korea] 6 - 6 [Netherlands]
[France] 7 - 7 [Spain]
[South Korea] 4 - 4 [Poland]
Sample Output 0

USA 3 4
Senegal 3 2
South Korea 2 0
France 1 0
Poland 1 0
Netherlands 1 -2
Spain 1 -4
*/

