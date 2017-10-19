import random

with open('manifesto.txt') as infile:
    lines = infile.readlines()

for line in lines:
    words = line.split(' ')
    random.shuffle(words)
    line = ' '.join(words)
    print line
