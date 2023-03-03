#include <iostream>
#include <vector> 
using namespace std;
 
void quickkSort(vector<int>& a, int l, int r) {
  if (l < r) {
    int v = a[(l + r) / 2];
    int i = l;
    int j = r;
    while (i <= j) {
      while (a[i] < v)
        i++;
      while (a[j] > v)
        j--;
      if (i <= j) {
        swap(a[i], a[j]);
        i++;
        j--;
      }
    }
    if (l < j) {
      quickkSort(a, l, j);
    }
    if (i < r) {
      quickkSort(a, i, r);
    }
  }
}
int main() {
  vector<int> test;
  test = {0, -1, 23, 7, 3, 1, 5,-6};
  quickkSort(test, 0, test.size() - 1);
  for (auto x : test) {
    cout << x << endl;
  }
}
