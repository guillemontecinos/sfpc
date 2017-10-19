#!/usr/bin/python

# A House of Dust, copyright (c) 2014 Nick Montfort <nickm@nickm.com>
# Original by Alison Knowles & James Tenney, 1967
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
# SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#
# Updated 10 March 2015 to remove a duplicate value in "place".
# Updated 17 November 2015 to remove a near-duplicate value in "inhabitants".

from random import choice

material = ['PAPER', 'SOUP', 'BEER', 'FABRIC', 'CAPITALISM', 'MUSTARD', 'DARK CHOCOLATE']

location = ['IN A SOCCER FIELD', 'IN A CARIBBEAN ISLAND', 'IN THE MIDDLE OF NOWHERE', 'IN THE MIDDLE EAST', 'INSIDE A TRUMP TOWER', 'I CAN\'T REMEMBER WHERE', 'INSIDE A STARBUCKS']

light_source = ['CANDY', 'BIRDS', 'MARIHUANA', 'LETTUCE']

inhabitants = ['NEW YORK SUBWAY RATS', 'FLYING FISHES', 'PYTHON PROGRAMMERS', 'NUCLEAR BOMBS']

lista = [1,2,3,4]

for i in lista:
    print
    print 'A HOUSE OF ' + choice(material)
    print '      ' + choice(location)
    print '            USING ' + choice(light_source)
    print '                  INHABITED BY ' + choice(inhabitants)
    print
