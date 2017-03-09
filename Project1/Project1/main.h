#pragma once
#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<char, int> avg_freqencies = {
	pair<char, int>(' ', 19), 
	pair<char, int>('a', 7), 
	pair<char, int>('b', 1),
	pair<char, int>('c', 2),
	pair<char, int>('d', 4),
	pair<char, int>('e', 10),
	pair<char, int>('f', 2),
	pair<char, int>('g', 2),
	pair<char, int>('h', 5),
	pair<char, int>('i', 6),
	pair<char, int>('j', 1),
	pair<char, int>('k', 1),
	pair<char, int>('l', 3),
	pair<char, int>('m', 2),
	pair<char, int>('n', 6),
	pair<char, int>('o', 6),
	pair<char, int>('p', 2),
	pair<char, int>('q', 1),
	pair<char, int>('r', 5),
	pair<char, int>('s', 5),
	pair<char, int>('t', 7),
	pair<char, int>('u', 2),
	pair<char, int>('v', 1),
	pair<char, int>('w', 2),
	pair<char, int>('x', 1),
	pair<char, int>('y', 2),
	pair<char, int>('z', 1)};
//map<char, int[]> key;

vector<int> split_cipher(string cipher);
vector<char> get_letters(int freq=0);
map<int, vector<int>> map_positions(vector<int> cipher);
map<char, vector<int>> map_positions(string word);
string test1(vector<int> cipher);