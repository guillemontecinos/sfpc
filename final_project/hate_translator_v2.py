#Hate Translator v1
#SFPC Final Project
#by Guillermo Montecinos
#Thanks to:

import json

with open("resources/trump_wall.txt","r") as f:
    text = f.read()

################################################################################
# function definition
################################################################################
# sentence checker
def sentenceCheck(input_string, dictionary):
    words = input_string.split(' ')
    output_string = ''
    for word in words:
        if word in dictionary:
            # print mapping[word]
            output_string += dictionary[word] + ' '
        else:
            # print[word]
            output_string += word + ' '
    return output_string

################################################################################
# main algorithm
################################################################################

# loading dictionary
mapping = json.loads(open('./resources/database.json').read())
# input
string = 'Mexicans are black people'

print 'Input: ' + string
print 'Output: ' + sentenceCheck(string, mapping)
