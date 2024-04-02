/*
Quay lui 
Quay lui là một thuật toán được thiết kế dựa trên đệ quy với ý tưởng: Tại mỗi bước, ta sẽ tìm một lời giải hợp lí cho bước đó rồi tiếp tục xét đến bước tiếp theo.
Thực chất, trong cuộc sống, có rất nhiều hành động chúng ta đang áp dụng chiến thuật quay lui.
Giả sử, chúng ta biết nhà một người bạn chắc chắn nằm ở một trong những ngõ của con đường này nhưng chúng ta không biết chính xác ngõ nào. Có phải khi đó, ta sẽ đi vào từng ngõ. Với ngõ đó, ta sẽ đến từng nhà, hỏi thăm xem liệu đó có phải nhà chúng ta cần tìm không. 
Nếu đi đến cuối ngõ mà vẫn không tìm thấy, ta sẽ “quay lui” về đường chính để đi tìm ở một ngõ khác.*/

#include<iostream>
#include<vector>

using namespace std;

const int MaxN = 1 + 1e5;

int n;
bool mark[3][MaxN];
vector<int> res;

void Try(int row) {
    if (row == n + 1) {
        for (int i = 0; i < n; ++i) cout << i + 1 << " " << res[i] << endl;
        exit(0);
        // Do chỉ cần in ra 1 đáp án nên ta sẽ thoát khỏi chương trình ngay tại đây.
        // Trên thực tế việc dùng hàm exit() tại đây là không tốt. Tuy nhiên, trong khuôn khổ của lập trình thi đấu, việc này là chấp nhận được.
    }
    for (int col = 1; col <= n; ++col) {
        // Do hiệu của chỉ số hàng và cột có thể âm nên ta cộng thêm n 
        int mainDiagonal = row - col + n, subDiagonal = row + col;
        // mark[0][]: cột
        // mark[1][]: đường chéo chính
        // mark[2][]: đường chéo phụ
        if (mark[0][col] || mark[1][mainDiagonal] || mark[2][subDiagonal]) continue;
        mark[0][col] = 1;
        mark[1][mainDiagonal] = 1;
        mark[2][subDiagonal] = 1;
        res.push_back(col);
        Try(row + 1);
        res.pop_back();
        mark[0][col] = 0;
        mark[1][mainDiagonal] = 0;
        mark[2][subDiagonal] = 0;
    }
}

int main() {
    freopen("CTDL.inp", "r", stdin);
    freopen("CTDL.out", "w", stdout);
    cin >> n;
    Try(1);

    return 0;
}

