import time

while(True): 
    secs = time.localtime().tm_sec
    print(secs)
    if (secs % 15 == 0):
        print("Kaboom!!")
        "a" / 4
    time.sleep(1)