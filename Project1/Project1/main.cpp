#include "main.h"
int main(int argc, char const *argv[]) {
	string cipher;
	cout << "Enter the ciphertext: ";
	cin >> cipher;

	vector<int> result = split_cipher(cipher);
	map<char, vector<int>> positions = map_positions("ABACACAASDB");

	for (pair<char, vector<int>> num : positions) {
		cout << num.first << ": ";
		for (int pos : num.second)
			cout << pos << " ";
		cout << endl;
	}

	vector<char> one = get_letters(2);
	for (char c : one)
		cout << c << endl;

	cin >> cipher;
	return 0;
}

// returns the cipher text as a vector
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

// returns letters with frequency equal to freq (all letters if freq = 0)
vector<char> get_letters(int freq) {
	vector<char> v;
	for (pair<char, int> i : avg_freqencies)
		if (i.second == freq || freq <= 0)
			v.push_back(i.first);

	return v;
}

// returns a mapping of numbers with their positions.
map<int, vector<int>> map_positions(vector<int> cipher) {
	map<int, vector<int>> m;

	for (int i = 0; i < cipher.size(); i++)
		m[cipher[i]].push_back(i);

	return m;
}

// returns mapping of characters in plaintext
map<char, vector<int>> map_positions(string word) {
	map<char, vector<int>> m;
	for (int i = 0; i < word.size(); i++)
		m[word[i]].push_back(i);

	return m;
}