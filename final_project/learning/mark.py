#script used to learn markovify.py
#guillermo montecinos

# import markovify
# with open("imagine.txt","r") as f:
#      text = f.read()
#
# text_model = markovify.Text(text)
#
# print "5 sentences \n"
#
# for i in range(5):
#     print(text_model.make_sentence())
#
# print "3 short sentences \n"
#
# for i in range(3):
#     print(text_model.make_short_sentence(140))

import markovify

#with open("quotes.txt") as f:
# with open("london.txt", "r") as f:
# with open("imagine.txt", "r") as f:
with open("guille.txt", "r") as f:
    quotes = f.read()

# print quotes

# text_model = markovify.Text(quotes)
text_model = markovify.Text(quotes)

print(text_model.make_sentence(tries = 100))
