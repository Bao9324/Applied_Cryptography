key = {}
key["a"] = [1,2,3,4,5,6,7]
key["b"] = [8]
key["c"] = [9,10]
key["d"] = [11,12,13,14]
key["e"] = [15,16,17,18,19,20,21,22,23,24]
key["f"] = [25,26]
key["g"] = [27,28]
key["h"] = [29,30,31,32,33]
key["i"] = [34,35,36,37,38,39]
key["j"] = [40]
key["k"] = [41]
key["l"] = [42,43,44]
key["m"] = [45,46]
key["n"] = [47,48,49,50,51,52]
key["o"] = [53,54,55,56,57,58]
key["p"] = [59,60]
key["q"] = [61]
key["r"] = [62,63,64,65,66]
key["s"] = [67,68,69,70,71]
key["t"] = [72,73,74,75,76,77,78]
key["u"] = [79,80]
key["v"] = [81]
key["w"] = [82,83]
key["x"] = [84]
key["y"] = [85,86]
key["z"] = [87]
key[" "] = [88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,0]

# f = open("english_words.txt")
# maxlen = 0
# maxword = None
# for line in f:
# 	word = line.strip()
# 	len_word = len(word)
# 	if len_word == 22:
# 		pt = word
# 		break
# f.close()
# print pt

#plaintext_dictionary
#pt = "cabooses meltdowns bigmouth makework flippest neutralizers gipped mule antithetical imperials carom masochism honky retsina dullness adeste corsage saraband promenaders gestational mansuetude fig redress pregame borshts pardoner reforges refutations calendal moaning doggerel dendrology governs ribonucleic circumscriptions reassimilating machinize rebuilding mezcal fluoresced antepenults blacksmith constance furores chroniclers overlie hoers jabbing resigner quartics polishers mallow hovelling ch biorhythmic personalizing abjure greets rewashed heretic kashmir chores fiendishly combatting alliums lolly milder postpaid larry annuli codgers apostatizing scrim carillon rust grimly lignifying lycanthrope samisen founds millimeters pentagon humidification checkup hilts agonise crumbs rejected kangaroo forenoons grazable acidy duellist potent recyclability capture memorized psalmed meters decline deduced after oversolicitousness demoralizers ologist conscript cronyisms melodized girdles nonago banisters rejoices oxgall bloodstone fisticuff huguenot janitress assailed eggcup jerseyites fetas leipzig copiers pushiness fesse precociously modules navigates gaiters caldrons lisp humbly datum recite haphazardly dispassion calculability circularization intangibles impressionist jaggy ascribable overseen copses devolvement permutationists potations linesmen hematic fowler pridefully inversive malthus remainders multiplex petty hymnaries cubby donne ohioans avenues reverts glide photos antiaci deathful oxygenate cascade fashion fortifiers annelids co intimates cads expanse rusting quashing julienne hydrothermal defunctive permeation sabines hurries precalculates discourteously fooling pestles pellucid circlers hampshirites punchiest extremist cottonwood dadoes identifiers retail gyrations dusked opportunities ictus misjudge neighborly aulder larges predestinate bandstand angling billet drawbridge pantomimes propelled leaned gerontologists candying ingestive museum chlorites maryland s grovels abandons atrophying misdefines redeemed patrimonial repressions revealment recapitalizes dyspeptically invaders redounds concubine foetor lessoned rethreading derogatory orgasms mercerize exploratory coconuts retardant padlock expense lam cored lollygags mankind prologued economist scooter hefter babying acanthuses bullpens reappraisals lowercase abnormal delegated craters clodhopping heroism gunfighter disabilities coriander goring effloresced harassments damosels cryobiology brahmin ho"

pt = raw_input("Please enter your plaintext:\n")
print "\nThe ciphertext is: "
ct = ""
# print maxword
i = 0
#scheduling
for char in pt:
	ct += str(key[char][i % len(key[char])]) + ","
	i += 2
# ct.strip(",")
print ct[:len(ct)-1]
