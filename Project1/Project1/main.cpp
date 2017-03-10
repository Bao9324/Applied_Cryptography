#include "main.h"
int main(int argc, char const *argv[]) {
	
	string cipher;
	cout << "Enter the ciphertext: ";
	cin >> cipher;

	vector<int> result = split_cipher(cipher);
	map<int, vector<int>> positions = map_positions(result);

	printf("My guess is %d\n", test1(positions));
	cin >> cipher;
	/*vector<char> one = get_letters(2);
	for (const char &c : one)
		cout << c << endl;

	test1(result);
	*/
	return 0;
}
bool checkPlaintexts(const vector<int>& positions) {
	int i = 0;
	int j = 0;
	while (j < positions.size()) {
		int first = positions[i];
		int second = positions[j];
		if (validCandidatesSize == 1) return true;
		for (int i = 0; i != 5; i++) {
			if (validCandidates[i] == nullptr) continue;
			if (validCandidates[i][first] != validCandidates[i][second]) {
				validCandidates[i] = nullptr;
				validCandidatesSize--;
			}
		}
		i++;
		j++;
	}
	return false;
}
int test1(map<int, vector<int>>& cTPositions) {
	for (const pair<int, vector<int>> &i : cTPositions) {
		if (i.second.size() > 1) {
			if (checkPlaintexts(i.second)) break;
		}
	}
	if (validCandidatesSize == 1) {
		for (int i = 0; i != 5; i++) {
			if (validCandidates[i] == nullptr) continue;
			else {
				return i + 1;
			}
		}
	}
	return -1;
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
	for (const pair<char, int> &i : avg_freqencies)
		if (i.second == freq || freq <= 0)
			v.push_back(i.first);

	return v;
}

// returns a mapping of numbers with their positions.
map<int, vector<int>> map_positions(vector<int> cipher) {
	map<int, vector<int>> m;

	for (unsigned int i = 0; i < cipher.size(); i++)
		m[cipher[i]].push_back(i);

	return m;
}
/*
// returns mapping of characters in plaintext
map<char, vector<int>> map_positions(string word) {
	map<char, vector<int>> m;
	for (unsigned int i = 0; i < word.size(); i++)
		m[word[i]].push_back(i);

	return m;
}
*/
/*
// returns plaintext guess
string test1(vector<int> cipher) {
	map<int, vector<int>> cipher_map = map_positions(cipher);
	ifstream file;
	file.open("plaintext_dictionary.txt");
	string line;
	while (getline(file, line)) {
		// skip empty lines
		if (line.length() <= 1) continue;
		map<char, vector<int>> dict_map = map_positions(line);

		// loop through plaintext positions
		for (const pair<char, vector<int>> &p : dict_map) {
			// plaintext positions (don't care about the actual characters)
			const vector<int> &pp = p.second;
			// loop through cipher positions
			for (const pair<int, vector<int>> &c : cipher_map) {
				// cipher positions (don't care about the number)
				const vector<int> &cp = c.second;
				if (pp == cp) {

				}
			}
		}
	}
	return line;
}
*/