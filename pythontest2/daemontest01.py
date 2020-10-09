#!/usr/bin/python3
import os
import time
import sys

def mydaemon():
    pid = os.fork()
    if pid>0:
        sys.exit(0)
    #for i in range(65535):
     #   os.close(i)
    #os.chdir("/")
    os.umask(0)
    pid = os.fork()
    if pid>0:
        sys.exit(0)
    
    with open("mydaemon1.txt", 'w') as f:
        a = 1
        while True:
            f.write(str(a))
            time.sleep(2)
            a += 1
if __name__ == '__main__':
    mydaemon()
