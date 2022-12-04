/*Cho ma trận A có N hàng M cột, hàng được đánh số từ 1 đến N, cột được đánh số từ 1 tới M, có 2 loại truy vấn :

Truy vấn 1 : Tính tổng các phần tử từ ở hàng x từ cột y tới cột z

Truy vấn 2 : Tính tổng các phần tử ở cột u từ hàng v tới hàng t

Cho Q truy vấn, bạn hãy tìm kết quả cho từng truy vấn một cách hiệu quả.

Input Format

Dòng 1 là 2 số N và M

N dòng tiếp theo mỗi dòng gồm M phần tử

Dòng tiếp theo là Q : số lượng truy vấn

Q dòng tiếp theo mô tả truy vấn gồm 4 số : số thứ nhất là loại truy vấn (1 hoặc 2), nếu truy vấn loại 1 3 số tiếp theo sẽ là x, y, z, nếu là truy vấn loại 2 thì 3 số tiếp theo sẽ là u, v, t.

Constraints

1<=N,M<=1000

0<=A[i][j]<=10^9

1<=Q<=5.10^5

1<=x,v,t<=N

1<=y,z,u<=M

Output Format

Đối với mỗi truy vấn in ra kết quả trên từng dòng

Sample Input 0

8 8
4 6 1 8 4 9 8 2 
6 0 8 5 7 8 9 6 
1 5 7 1 5 2 6 0 
6 2 2 0 4 9 8 0 
0 0 6 9 4 6 4 6 
1 1 1 6 2 9 3 7 
1 0 7 8 4 5 7 6 
1 1 5 4 7 2 4 3 
5
2 6 3 7
2 5 1 8
2 6 2 8
2 4 1 8
2 3 2 7
Sample Output 0

31
37
41
41
31
*/

