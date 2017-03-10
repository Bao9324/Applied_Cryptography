import random
import string
import subprocess, os

def attack(ciphertext):
    """
    attack for test 2
    """
    enc= ciphertext.replace(', ', ',')
    enc = enc.replace(' ', ',')
    enc = enc.split(',')
    chars = list(string.printable)
    new_enc = ""
    for x in enc:
        try:
            new_enc += chars[int(x)]
        except:
            new_enc += chars[random.randint(0, 99)]

    with open('./enc.tmp', 'wb') as f:
        f.write(new_enc)
    try:
        os.execv('./HomophonicCipher1', ['HomophonicCipher', './enc.tmp'])
    except:
        os.execv('./HomophonicCipher', ['HomophonicCipher', './enc.tmp'])

def main():
    print "Enter the ciphertext:"
    enc = raw_input()

    attack(enc)
    return 
    
if __name__ == "__main__":
    main()
