from selenium import webdriver

driver = webdriver.Chrome()
driver.get('http://linkedin.com')
##inspect the site
login = driver.find_element_by_css_selector('#login-email')
login.send_keys('somebro@techstartup.biz')


password = driver.find_element_by_css_selector('#login-password')
password.send_keys('elonmusk415')


driver.find_element_by_css_selector('#login-submit').click()
