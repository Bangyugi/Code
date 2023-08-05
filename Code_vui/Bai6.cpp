#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm kiểm tra xem có thể chia các chương thành k tập sao cho số trang của tập dày nhất không vượt quá max_pages
bool canDivideChapters(const vector<int>& chapters, int n, int k, int max_pages) {
    int count = 1;
    int pages = 0;
    for (int i = 0; i < n; i++) {
        pages += chapters[i];
        if (pages > max_pages) {
            count++;
            pages = chapters[i];
        }
    }
    return count <= k;
}

// Hàm tìm số trang của tập dày nhất bằng phương pháp nhị phân
int binarySearchMaxPages(const vector<int>& chapters, int n, int k) {
    int left = *max_element(chapters.begin(), chapters.end());
    int right = accumulate(chapters.begin(), chapters.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canDivideChapters(chapters, n, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> chapters(n);
    for (int i = 0; i < n; i++) {
        cin >> chapters[i];
    }

    int result = binarySearchMaxPages(chapters, n, k);
    cout << result << endl;

    return 0;
}
