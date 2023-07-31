#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> g;
vector<vector<bool>> vis;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int dfs(int i, int j) {
    int res = 0;
    stack<pair<int, int>> st;
    st.push({i, j});
    vis[i][j] = true;

    while (!st.empty()) {
        int x = st.top().first;
        int y = st.top().second;
        st.pop();

        res += g[x][y];

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && g[nx][ny] > 0) {
                vis[nx][ny] = true;
                st.push({nx, ny});
            }
        }
    }

    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        cin >> n >> m;

        g.resize(n, vector<int>(m));
        vis.resize(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> g[i][j];
            }
        }

        int max_volume = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && g[i][j] > 0) {
                    int volume = dfs(i, j);
                    max_volume = max(max_volume, volume);
                }
            }
        }

        cout << max_volume << "\n";

        g.clear();
        vis.clear();
    }

    return 0;
}
