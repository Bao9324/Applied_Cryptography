#include "main.h"
int main(int argc, char const *argv[]) {
	string cipher;
	cout << "Enter the ciphertext: ";
	cin >> cipher;

	vector<int> result = split_cipher(cipher);
	map<int, int> freq = map_frequency(result);
	for (pair<int, int> i : freq)
		cout << i.first << ',' << i.second << endl;

	cin >> cipher;
	return 0;
}

vector<int> split_cipher(string cipher) {
	vector<int> v;

	int pos = 0;
	int next_pos = 0;
	do {
		next_pos = cipher.find(',', pos);
		int num = stoi(cipher.substr(pos, next_pos));
		v.push_back(num);
		pos = next_pos + 1;
	} while (pos != 0);

	return v;
}

map<int, int> map_frequency(vector<int> cipher) {
	map<int, int> m;

	for (int i : cipher)
		m[i]++;

	return m;
}
