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
    
    f = open("mydaemon1.txt", 'a')
    a = 1
    while True:
        f.write(str(a))
        time.sleep(0.1)
        a += 1
    f.close()
if __name__ == '__main__':
    mydaemon()
