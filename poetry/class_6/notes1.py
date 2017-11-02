#class 6, Sam Levin
#use selenium for brose controlling to scrap ajax webs
#http://selenium-python.readthedocs.io/
#pip install selenium
#brew install chromedriver

# from selenium import webdriver
# import time

# driver = webdriver.Chrome()
# driver.set_window_size(1280,1280)
# driver.get('http://nytimes.com')
# time.sleep(6)
# driver.save_screenshot('nytimes.png')

##
#go to console and type javascript: var elements = document.querySelectorAll("h1,h2,h3")
#returns elements
#for (var i=0; i< elements.length; i++) {elements[i].textContent="lol capitalism"};

# driver = webdriver.Chrome()
# driver.set_window_size(1280,1280)
# driver.get('http://foxnews.com')
# # time.sleep(6)
# script = '''
# var elements = document.querySelectorAll("h1,h2,h3")
# for (var i=0; i< elements.length; i++) {
#     elements[i].textContent = "lol capitalism";
# }
# '''
# driver.execute_script(script)
# driver.save_screenshot('foxnews.png')

##
##
## Command: python notes1.py "THIS IS A FAKE NEWS"
from selenium import webdriver
import time
import sys

driver = webdriver.Chrome()
driver.set_window_size(1280,1280)
driver.get('http://foxnews.com')
# time.sleep(6)
script = '''
var elements = document.querySelectorAll("h1,h2,h3")
for (var i=0; i< elements.length; i++) {
    elements[i].textContent = arguments[0];
}
'''

replacement = sys.argv[1]
driver.execute_script(script, replacement)
driver.save_screenshot('foxnews.png')
driver.quit()

##
## javascript toggler app for chrome
## how to log into linked in
## selenium is required when info is loaded when javascript is off
