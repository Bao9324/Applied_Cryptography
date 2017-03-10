import random
key = {}
key["a"] = [1, 2, 3, 4, 5, 6, 7]
key["b"] = [8]
key["c"] = [9, 10]
key["d"] = [11, 12, 13, 14]
key["e"] = [15, 16, 17, 18, 19, 20, 21, 22, 23, 24]
key["f"] = [25, 26]
key["g"] = [27, 28]
key["h"] = [29, 30, 31, 32, 33]
key["i"] = [34, 35, 36, 37, 38, 39]
key["j"] = [40]
key["k"] = [41]
key["l"] = [42, 43, 44]
key["m"] = [45, 46]
key["n"] = [47, 48, 49, 50, 51, 52]
key["o"] = [53, 54, 55, 56, 57, 58]
key["p"] = [59, 60]
key["q"] = [61]
key["r"] = [62, 63, 64, 65, 66]
key["s"] = [67, 68, 69, 70, 71]
key["t"] = [72, 73, 74, 75, 76, 77, 78]
key["u"] = [79, 80]
key["v"] = [81]
key["w"] = [82, 83]
key["x"] = [84]
key["y"] = [85, 86]
key["z"] = [87]
key[" "] = [88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 0]


def random_line(afile):
    line = next(afile)
    for num, aline in enumerate(afile):
        if random.randrange(num + 2):
            continue
        if aline.strip():
            line = aline
    return line

with open("plaintext_dictionary.txt") as file:
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
    print ct[:-1]
