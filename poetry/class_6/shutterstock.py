import sys
import requests
from bs4 import BeautifulSoup

def download_file(url):
    local_filename = url.split('/')[-1]
    # NOTE the stream=True parameter
    r = requests.get(url, stream=True)
    with open(local_filename, 'wb') as f:
        for chunk in r.iter_content(chunk_size=1024):
            if chunk: # filter out keep-alive new chunks
                f.write(chunk)
                #f.flush() commented by recommendation from J.F.Sebastian
    return local_filename


q = 'cops laughing'

def scrape(q, page=1):
    url = 'https://www.shutterstock.com/search'
    #resolves to https://www.shutterstock.com/search?searchterm=cops+laughing
    html = requests.get(url,{'searchterm': q, 'image_type': 'photo', 'page': page}).text
    # print html
    soup = BeautifulSoup(html)
    images = soup.select('.img-wrap img')

    if len(images) == 0:
        sys.exit()
    for image in images:
        image_url = 'http:' + image.get('src')
        description = image.get('alt')
        localfile = download_file(image_url)

        subprocess.call(['convert', localfile, '-solarize','50', solarized])
        # subprocess.call(['open',solarized])
        # print image_url
        # download_file(image_url)
    scrape(q, page+1)

scrape(sys.argv[1])
