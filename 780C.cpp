#include <iostream>
#include <unordered_map>
#include <cstring>
#include <vector>
using namespace std;
vector<int> v[1<<18];
int colors=0, color[1<<18];
void paint(int n, int pc) {
	int c=0;
	for (const auto &i:v[n])
		if (!color[i]) {
			while (c+1==pc || c+1==color[n])
				c++;
			color[i]=++c;
			colors=max(colors, c);
			paint(i, color[n]);
		}
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i=1, a, b; i<n; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	color[1]=colors=1;
	paint(1, 1);

	cout << colors << endl;
	for (int i=1; i<=n; i++)
		cout << color[i] << char(32);

	return 0;
}