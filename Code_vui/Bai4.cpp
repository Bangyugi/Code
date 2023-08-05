#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm tính tổng năng lượng di chuyển khi đặt cửa thoát hiểm tại vị trí x
long long calculateTotalEnergy(vector<int>& a, vector<int>& x, int n, int door_position) {
    long long total_energy = 0;
    for (int i = 0; i < n; i++) {
        total_energy += (long long)(abs(x[i] - x[door_position])) * a[i];
    }
    return total_energy;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n); // Số lượng áo trong từng thùng
    vector<int> x(n); // Tọa độ của từng thùng
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    // Sử dụng binary search để tìm vị trí cửa thoát hiểm tối ưu
    int left = 0;
    int right = n - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        long long energy_left = calculateTotalEnergy(a, x, n, mid);
        long long energy_right = calculateTotalEnergy(a, x, n, mid + 1);

        if (energy_left <= energy_right) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << x[left] << endl;

    return 0;
}
