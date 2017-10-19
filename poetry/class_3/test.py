from random import choice
adjectivesFemale = ['violentas','hediondas','dislexicas','elegantes', 'estupidas','lloronas','sobrevaloradas','cuenteras','traidoras']
numAdjs = [1,2,3,4]
adj=[]
for pos in numAdjs:
    adj.append(choice(adjectivesFemale))
print adj

print 'Las bla'
print 'pueden ser ' + adj[0]
print adj[1]
print 'y hasta ' + adj[2]
print 'pero las'
print 'exbla'
print 'son siempre'
print adj[3] +'\n'
