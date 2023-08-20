import pyautogui as p
import time as t
msg=input("ENTER THE MESSAGE: ")
lim=input("NUMBER OF MSGS: ")
t.sleep(10)

for i in range(int(lim)):
    p.typewrite(msg)
    p.press("enter")
