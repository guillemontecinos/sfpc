#Hate Translator v1
#SFPC Final Project
#by Guillermo Montecinos
#Thanks to:

with open("resources/trump_wall.txt","r") as f:
    text = f.read()

# Function definition
def sentenceCheck(input_string, dictionary):
    #sentences checker
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

# dictionary
mapping = {'bad':'good'}
# input
string = 'Mexicans are bad people'

print 'Input: ' + string
print 'Output: ' + sentenceCheck(string, mapping)
