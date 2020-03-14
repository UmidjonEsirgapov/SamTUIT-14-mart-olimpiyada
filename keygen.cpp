#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
#include<algorithm>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<string>
#define ll long long
#define dd double
using namespace std;

int main() {
	ll n;
	cin >> n;
	string s;
	cin >> s;
	char k;
	vector<char> s1;
	for (ll i = 0; i < s.size(); i++) {
		if (s1.empty()) {
			s1.push_back(s[i]);
			k = s[i];
		}
		else {
			if (s1.size() % 2 != 0) {
				if (s[i] == k) {
					continue;
				}
				else {
					s1.push_back(s[i]);
					k = s[i];
				}
			}
			else {
				s1.push_back(s[i]);
				k = s[i];

			}
		}
	}
	if (s1.size() % 2 == 0) {
		cout <<s.size() - s1.size()<< endl;
		for (ll i = 0; i < s1.size(); i++) {
			cout << s1[i];
		}
		cout << endl;
	}
	else { 
		cout << s.size() - s1.size() + 1 << endl;
		for (ll i = 0; i < s1.size() - 1; i++) {
			cout << s1[i];
		}
		cout << endl;
	}
}
