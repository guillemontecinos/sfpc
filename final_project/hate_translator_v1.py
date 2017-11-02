#Hate Translator v1
#SFPC Final Project
#by Guillermo Montecinos
#Thanks to:

with open("resources/trump_wall.txt","r") as f:
    text = f.read()
# print text

# dictionary
# input_words
mapping = {'bad':'good'}
# input
string = 'Mexicans are bad people'

#check for a word
words = string.split(' ')
output_string = ''
for word in words:
    if word in mapping:
        # print mapping[word]
        output_string += mapping[word] + ' '
    else:
        # print[word]
        output_string += word + ' '
print 'Input: ' + string
print 'Output: ' + output_string
