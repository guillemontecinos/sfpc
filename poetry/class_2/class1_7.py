from textblob import TextBlob

text = "A spectre is hounting Europe. The espetre of communism"

blob  = TextBlob(text)
tags = blob.tags

for tag in tags: #con esto se pueden obtener las estructuras gramaticales: https://www.ling.upenn.edu/courses/Fall_2003/ling001/penn_treebank_pos.html
    word = tag[0]
    pos = tag[1]
    if pos == 'VBZ':
        print word

# for sentence in blob.sentences:
#     print sentence
#
# words = blob.words
# for word in words:
#     print word
