#Based on Disidentes poem of Mario Benedetti
#by Guillermo Montecinos

#Los abruptos
#pueden ser violentos
#tozudos
#y hasta sectarios
#pero los
#exabruptos
#son siempre
#resentidos.

from random import choice

#Parameters
articles = ['Las','Los']
nounsMale = ['carniceros','futboleros','carabineros','periodistas','abruptos','politicos','musicos','poetas','soldados','economistas','profesores']
nounsFemale = ['carniceras','futboleras','carabineras','periodistas','abruptas','politicas','musicas','poetas','soldadas','economistas','profesoras']
adjectivesMale = ['violentos','hediondos','dislexicos','elegantes', 'estupidos','llorones','sobrevalorados','mentirosos','traidores']
adjectivesFemale = ['violentas','hediondas','dislexicas','elegantes', 'estupidas','lloronas','sobrevaloradas','mentirosas','traidoras']
#times = [1,2,3] #times to be generated
times = [1]

#functions
def getAdj(adjectives):
    numAdjs = [1,2,3,4]
    adjList = []
    for pos in numAdjs:
        adjList.append(choice(adjectives))
    return adjList

#algorithm
for time in times:
    article = choice(articles)

    if article == 'Las':
        princNoun = choice(nounsFemale)
        adj = getAdj(adjectivesFemale)
    else:
        princNoun = choice(nounsMale)
        adj = getAdj(adjectivesMale)

    print article + ' ' + princNoun
    print 'pueden ser ' + adj[0]
    print adj[1]
    print 'y hasta ' + adj[2]
    print 'pero ' + article.lower()
    print 'ex' + princNoun
    print 'son siempre'
    print adj[3] +'\n'
