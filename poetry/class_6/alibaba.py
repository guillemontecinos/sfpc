from selenium import webdriver

driver = webdriver.Chrome()

def scrape_page():
    items = driver.find_element_by_css_selector('.m-product-item')
    for item in items:
        title = item.find_element_by_css_selector('h2').text
        try:
            price = item.find_element_by_css_selector('.price').text
        except:
            price = 'unknown price'
        print title + ': ' + price
        print '------'

        try:
            next_link = driver.find_element_by_css_selector('a.next')
            next_link.click()
        except:
            sys.exit()
        scrape_page()

driver.get('http://alibaba.com')
search_input = driver.find_element_by_css_selector('input[name="SearchText"]')
search_input.send_keys("riot gear")
driver.find_element_by_css_selector('#.ui-searchbar-submit').click()
scrape_page()
