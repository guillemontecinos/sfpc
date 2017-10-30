import pronouncing, random

words = ['bed', 'jogging', 'piece']
#
# for word in words:
#     pronunciation_list = pronouncing.phones_for_word(word)
#     print pronouncing.syllable_count(pronunciation_list[0])
#
# text = "april is the cruelest month breeding lilacs out of the dead"
# phones = [pronouncing.phones_for_word(p)[0] for p in text.split()]
# sum([pronouncing.syllable_count(p) for p in phones])
#
# print text.split()
# print phones
#for i in range(5):
#    print random.choice(pronouncing.rhymes("rain")) #+ "\n"

pronunciation_list = []

# for word in words:
#     pronunciation_list.append(pronouncing.phones_for_word(word)[0])
#
# print pronunciation_list

pronunciations = pronouncing.phones_for_word("uses")
print pronouncing.rhyming_part(pronunciations[0])
print pronouncing.rhyming_part(pronunciations[1])
