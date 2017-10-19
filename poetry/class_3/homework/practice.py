#Practice based on Allison Parrish Blog: http://rwet.decontextualize.com/book/textblob/
from textblob import TextBlob
blob = TextBlob("ITP is a two-year graduate program located in the Tisch School of the Arts. Perhaps the best way to describe us is as a Center for the Recently Possible.")

#for sentence in blob.sentences:
#    print sentence
#    print "\n"

#for word in blob.sentences[1].words:
#    print word

#for np in blob.noun_phrases:
#    print np

for word, pos in blob.tags:
    print word, pos
