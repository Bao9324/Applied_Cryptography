#include "main.h"
int main(int argc, char const *argv[]) {
	string cipher;
	cout << "Enter the ciphertext: ";
	cin >> cipher;
	cout << endl;

	vector<int> result = split_cipher(cipher);
	map<int, vector<int>> positions = map_positions(result);

	int plaintext = test1(positions);
	// Prints guessed plaintext index
	printf("My plaintext guess is: \n[%i] %s\n", plaintext + 1, validCandidates[plaintext]);
	cin >> cipher;

	return 0;
}

// returns index of plaintext. -1 if none.
int test1(map<int, vector<int>>& cTPositions) {

	// Checks keys with multiple positions 
	for (const pair<int, vector<int>> &i : cTPositions) {
		// ignore keys with only one position, they tell us nothing
		if (i.second.size() > 1) {
			// invalidate candidates until there is only one, then break
			if (checkPlaintexts(i.second)) break;
		}
	}
	if (validCandidatesSize == 1) {
		for (int i = 0; i != 5; i++) {
			if (validCandidates[i] == nullptr) continue;
			else return i;
		}
	}
	return -1; // No valid plaintext found
}

bool checkPlaintexts(const vector<int>& positions) {
	for (unsigned int i = 0; i + 1 < positions.size(); i++) {
		// A valid candidate has been found or no more options
		if (validCandidatesSize <= 1) return true;

		// Indices of the matching characters
		int first = positions[i], second = positions[i + 1];
		for (unsigned int j = 0; j != 5; j++) {
			// Skip candidates that has been invalidated from previous iterations
			if (validCandidates[j] == nullptr) continue;

			// if the characters from the plaintext are not equal 
			// in the cipher positions then it's invalid
			if (validCandidates[j][first] != validCandidates[j][second]) {
				validCandidates[j] = nullptr;
				validCandidatesSize--;
			}
		}
	}
	return false;
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

	// prints positions (debugging)
	/*for (const pair <int, vector<int>> &a : m) {
		cout << a.first << ": ";
		for (unsigned int i = 0; i < a.second.size(); i++) {
			cout << a.second[i] << " ";
		}
		cout << endl;
	}*/

	return m;
}
