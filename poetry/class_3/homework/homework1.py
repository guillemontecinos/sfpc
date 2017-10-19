#Homework 1
#Poetry Class - SFPC
#2017 16 10
#Guillermo Montecinos

import sys
from textblob import TextBlob
from collections import Counter
blob = TextBlob(sys.stdin.read().decode('ascii', errors="replace"))
nouns = list()
for word, tag in blob.tags:
    if tag == 'NN':
        nouns.append(word.lemmatize())
print Counter(nouns).most_common()[0][0]
