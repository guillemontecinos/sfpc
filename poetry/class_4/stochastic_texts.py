from random import choice

subjects = ['COUNT', 'STRANGER', 'LOOK', 'CHURCH', 'CASTLE', 'PICTURE',
            'EYE', 'VILLAGE', 'TOWER', 'FARMER', 'WAY', 'GUEST', 'DAY',
            'HOUSE', 'TABLE', 'LABOURER']
predicates = ['OPEN', 'SILENT', 'STRONG', 'GOOD', 'NARROW', 'NEAR',
              'NEW', 'QUIET', 'FAR', 'DEEP', 'LATE', 'DARK', 'FREE',
              'LARGE', 'OLD', 'ANGRY']
conjunctions = [' AND ', ' OR ', ' THEREFORE ']
operators = ['A', 'EVERY', 'NO', 'NOT EVERY']

def phrase():
	text = choice(operators) + ' ' + choice(subjects)
	if text == 'A EYE':
		text = 'AN EYE'
	return text + ' IS '

for i in range(5):
    print (phrase() + choice(predicates) + choice(conjunctions) +
           phrase() + choice(predicates) + '.')
print '\n'
