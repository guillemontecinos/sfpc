#http://www.gutenberg.org/cache/epub/61/pg61.txt

with open('manifesto.txt') as infile:
    #text = infile.read()
    lines = infile.readlines()

find = "capital"
replacer = "Mark Zuckerberg"

#text = text.replace(find,replacer)
#print text

for line in lines:
    if find in line:
        line = line.replace(find, replacer)
        print line
