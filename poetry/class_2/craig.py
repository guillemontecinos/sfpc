import urllib
import time
from bs4 import BeautifulSoup

def get_page(url_to_get):
    html = urllib.urlopen(url_to_get).read()

    soup = BeautifulSoup(html)

    titles = soup.select('.result-title')

    for title in titles:
        print title.text #just returns the text

s = 0
while s < 1000:
    url = 'https://newyork.craigslist.org/search/mis?=' + str(s)
    print url
    get_page(url)
    s = s + 120

    time.sleep(1)
