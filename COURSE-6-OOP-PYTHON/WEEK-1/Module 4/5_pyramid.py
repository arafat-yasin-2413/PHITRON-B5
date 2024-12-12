import pyautogui
import time

n = int(input())
time.sleep(5)

for i in range(n):
    for j in range(i+1):
        pyautogui.write('#')
    pyautogui.press('enter')

"""
    
#
##
###
####
#####

"""