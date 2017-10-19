import urllib
from bs4 import BeautifulSoup

url = 'https://answers.yahoo.com/question/index;_ylt=AwrC1CiGYNZZD3oAhBZPmolQ;_ylu=X3oDMTEyNHBhYnJtBGNvbG8DYmYxBHBvcwMxBHZ0aWQDQjI1NTdfMQRzZWMDc3I-?qid=20120522185201AAOYXwn'

html = urllib.urlopen(url).read()

soup = BeautifulSoup(html)

titles = soup.select('.compText')

for title in titles:
    print title.text #just returns the text
