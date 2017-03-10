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
char plntxt1[] = "cabooses meltdowns bigmouth makework flippest neutralizers gipped mule antithetical imperials carom masochism honky retsina dullness adeste corsage saraband promenaders gestational mansuetude fig redress pregame borshts pardoner reforges refutations calendal moaning doggerel dendrology governs ribonucleic circumscriptions reassimilating machinize rebuilding mezcal fluoresced antepenults blacksmith constance furores chroniclers overlie hoers jabbing resigner quartics polishers mallow hovelling ch";
char plntxt2[] = "biorhythmic personalizing abjure greets rewashed heretic kashmir chores fiendishly combatting alliums lolly milder postpaid larry annuli codgers apostatizing scrim carillon rust grimly lignifying lycanthrope samisen founds millimeters pentagon humidification checkup hilts agonise crumbs rejected kangaroo forenoons grazable acidy duellist potent recyclability capture memorized psalmed meters decline deduced after oversolicitousness demoralizers ologist conscript cronyisms melodized girdles nonago";
char plntxt3[] = "banisters rejoices oxgall bloodstone fisticuff huguenot janitress assailed eggcup jerseyites fetas leipzig copiers pushiness fesse precociously modules navigates gaiters caldrons lisp humbly datum recite haphazardly dispassion calculability circularization intangibles impressionist jaggy ascribable overseen copses devolvement permutationists potations linesmen hematic fowler pridefully inversive malthus remainders multiplex petty hymnaries cubby donne ohioans avenues reverts glide photos antiaci";
char plntxt4[] = "deathful oxygenate cascade fashion fortifiers annelids co intimates cads expanse rusting quashing julienne hydrothermal defunctive permeation sabines hurries precalculates discourteously fooling pestles pellucid circlers hampshirites punchiest extremist cottonwood dadoes identifiers retail gyrations dusked opportunities ictus misjudge neighborly aulder larges predestinate bandstand angling billet drawbridge pantomimes propelled leaned gerontologists candying ingestive museum chlorites maryland s";
char plntxt5[] = "grovels abandons atrophying misdefines redeemed patrimonial repressions revealment recapitalizes dyspeptically invaders redounds concubine foetor lessoned rethreading derogatory orgasms mercerize exploratory coconuts retardant padlock expense lam cored lollygags mankind prologued economist scooter hefter babying acanthuses bullpens reappraisals lowercase abnormal delegated craters clodhopping heroism gunfighter disabilities coriander goring effloresced harassments damosels cryobiology brahmin ho";
char* validCandidates[] = { plntxt1, plntxt2, plntxt3, plntxt4, plntxt5 };
int validCandidatesSize = 5;

vector<int> split_cipher(string cipher);
int test1(map<int, vector<int>>& cTPositions);
bool checkPlaintexts(const vector<int>& positions);
vector<char> get_letters(int freq=0);
map<int, vector<int>> map_positions(vector<int> cipher);