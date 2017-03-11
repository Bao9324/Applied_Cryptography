import random
key = {}
##key["a"] = [1, 2, 3, 4, 5, 6, 7]
##key["b"] = [8]
##key["c"] = [9, 10]
##key["d"] = [11, 12, 13, 14]
##key["e"] = [15, 16, 17, 18, 19, 20, 21, 22, 23, 24]
##key["f"] = [25, 26]
##key["g"] = [27, 28]
##key["h"] = [29, 30, 31, 32, 33]
##key["i"] = [34, 35, 36, 37, 38, 39]
##key["j"] = [40]
##key["k"] = [41]
##key["l"] = [42, 43, 44]
##key["m"] = [45, 46]
##key["n"] = [47, 48, 49, 50, 51, 52]
##key["o"] = [53, 54, 55, 56, 57, 58]
##key["p"] = [59, 60]
##key["q"] = [61]
##key["r"] = [62, 63, 64, 65, 66]
##key["s"] = [67, 68, 69, 70, 71]
##key["t"] = [72, 73, 74, 75, 76, 77, 78]
##key["u"] = [79, 80]
##key["v"] = [81]
##key["w"] = [82, 83]
##key["x"] = [84]
##key["y"] = [85, 86]
##key["z"] = [87]
##key[" "] = [88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 0]
def fillkeys():
    choice = 'abcdefghijklmnopqrstuvwxyz '
    key["a"] = [[],7]
    key["b"] = [[],1]
    key["c"] = [[],2]
    key["d"] = [[],4]
    key["e"] = [[],10]
    key["f"] = [[],2]
    key["g"] = [[],2]
    key["h"] = [[],5]
    key["i"] = [[],6]
    key["j"] = [[],1]
    key["k"] = [[],1]
    key["l"] = [[],3]
    key["m"] = [[],2]
    key["n"] = [[],6]
    key["o"] = [[],6]
    key["p"] = [[],2]
    key["q"] = [[],1]
    key["r"] = [[],5]
    key["s"] = [[],5]
    key["t"] = [[],7]
    key["u"] = [[],2]
    key["v"] = [[],1]
    key["w"] = [[],2]
    key["x"] = [[],1]
    key["y"] = [[],2]
    key["z"] = [[],1]
    key[" "] = [[],19]
    num = 105
    while(num > 0):
        letterChoice = random.choice(choice)
        if ( len(key[letterChoice][0]) == key[letterChoice][1]):
            continue
        key[letterChoice][0].append(num)
        num -=1
    for aKey, value in key.iteritems():
        key[aKey] = key[aKey][0]
def random_line(afile):
    line = next(afile)
    for num, aline in enumerate(afile):
        if random.randrange(num + 2):
            continue
        if aline.strip():
            line = aline
    return line

with open("plaintext_dictionary.txt") as file:
    fillkeys()
    pt = random_line(file)
    ct = ""
    # print maxword
    i = 0
    # scheduling
    try:
        for char in pt:
            ct += str(key[char][i % len(key[char])]) + ","
            i += 2
    except Exception as e:
        pass
    # ct.strip(",")
    # print "%d\n", (pt)
    print ct[:-1]
