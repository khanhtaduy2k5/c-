/*Viết chương trình: Nhập một số nguyên dương lẻ N và in ra
dòng thứ (N/2+1) của ma trận kì ảo kích thước N * N.
Ma trận kì ảo là bảng vuông chứa các số từ 1 đến N*N
có tính chất như sau: mỗi số xuất hiện đúng một lần,
tổng các số trên mỗi hàng, cột, đường chéo chính,
đường chéo phụ đều bằng nhau
Input:
Số nguyên lẻ N
Output:
Dòng vị trí (N/2+1) của ma trận kỳ ảo
*/
#include<bits/stdc++.h>
using namespace std;
void printRow(int N){
    vector<vector<int>> magic(N,vector<int>(N,0));
    int num = 1;
    int i = 0, j = N / 2;

    while(num <= N * N){
        magic[i][j] = num;
        num++;
        int newi = (i - 1 + N ) % N;
        int newj = (j + 1) % N;
        if (magic[newi][newj]){
            i = (i + 1) % N;
        } else{
            i = newi;
            j = newj;
        }
    }
    for (int j = 0; j < N; j++){
        cout << magic[N / 2][j] << " ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;
    printRow(N);
    return 0;
}
