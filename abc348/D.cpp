#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
map<int, int>  mp;
pair<int, int> start;
pair<int, int> goal;

// 二分木を使って探索するデータ構造
struct Node
{
  int   x;
  int   y;
  int   z;
  Node *left;
  Node *right;
};

// 二分木を使って地図aの(x0,y0)から障害物'#'を避けて(x1,y1)に移動するための最小の移動回数を求める
int solve(vector<vector<char>> a, int x0, int y0, int x1, int y1)
{
  // 二分木の根を作成
  Node *root = new Node();
  root->x = x0;
  root->y = y0;
  root->z = 0;
  root->left = nullptr;
  root->right = nullptr;
  // 二分木の根をキューに追加
  vector<Node *> q;
  q.push_back(root);
  // 二分木の探索
  while (!q.empty()) {
    Node *node = q.front();
    q.erase(q.begin());
    // ゴールに到達した場合
    if (node->x == x1 && node->y == y1) {
      return node->z;
    }
    // 上下左右に移動する
    for (int i = 0; i < 4; i++) {
      int dx = 0;
      int dy = 0;
      if (i == 0) {
        dx = -1;
      } else if (i == 1) {
        dx = 1;
      } else if (i == 2) {
        dy = -1;
      } else {
        dy = 1;
      }
      int x = node->x + dx;
      int y = node->y + dy;
      // 移動先が地図の範囲内かどうか
      if (x < 0 || x >= a.size() || y < 0 || y >= a[0].size()) {
        continue;
      }
      // 移動先が障害物かどうか
      if (a[x][y] == '#') {
        continue;
      }
      // 二分木のノードを作成
      Node *next = new Node();
      next->x = x;
      next->y = y;
      next->z = node->z + 1;
      next->left = nullptr;
      next->right = nullptr;
      // 二分木のノードをキューに追加
      q.push_back(next);
      // 二分木のノードを追加
      if (node->x > x) {
        node->left = next;
      } else if (node->x < x) {
        node->right = next;
      }
    }
  }
  return 1000000;
}

int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<char>> a(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if (c == 'S') {
        start = make_pair(i, j);
      } else if (c == 'T') {
        goal = make_pair(i, j);
      } else {
        a[i][j] = c;
      }
    }
  }
  int n;
  cin >> n;
  vector<vector<int>> dp(n + 1, vector<int>(3, 0));
  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    dp[i][0] = x;
    dp[i][1] = y;
    dp[i][2] = z;
  }
  // dp[i][0] == start.first かつ dp[i][1] == start.secondとなるなるiを探す
  int targetIndex = -1;
  for (int i = 0; i < n; i++) {
    if ((dp[i][0] - 1) == start.first && (dp[i][1] - 1) == start.second) {
      targetIndex = i;
      break;
    }
  }
  if (targetIndex == -1) {
    cout << "No" << endl;
    return 0;
  }
  int energy = dp[targetIndex][2];
  dp.erase(dp.begin() + targetIndex);
  while (solve(a, start.first, start.second, goal.first, goal.second) > energy) {
    int x = start.first;
    int y = start.second;
    // cout << x << " " << y << " " << energy << endl;
    // cout << solve(a, start.first, start.second, goal.first, goal.second) << endl;
    for (int i = 0; i < dp.size(); i++) {
      if (solve(a, start.first, start.second, dp[i][0] - 1, dp[i][1] - 1) <= energy) {
        // cout << start.first << " " << start.second << " " << dp[i][0] - 1 << " " << dp[i][1] - 1 << " "
        //      << solve(a, start.first, start.second, dp[i][0] - 1, dp[i][1] - 1) << endl;
        start.first = dp[i][0] - 1;
        start.second = dp[i][1] - 1;
        energy = max(dp[i][2], energy - solve(a, start.first, start.second, dp[i][0] - 1, dp[i][1] - 1));
        dp.erase(dp.begin() + i);
      }
    }
    if (x == start.first && y == start.second) {
      cout << "No" << endl;
      exit(0);
    }
  }
  cout << "Yes" << endl;
}