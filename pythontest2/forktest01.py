#!/usr/bin/python3
import os
import time
a = 1
def myfork():
    global a
    pid = os.fork()
    if pid==0:
        a += 1
        print("child", os.getpid(), os.getppid(), a)
        time.sleep(0.1)
    elif pid>0:
        os.waitpid(pid, 0)
        a += 2
        print("parent", os.getpid(), os.getppid(), a)
        time.sleep(0.1)
    else:
        print("fork error")
if __name__ == '__main__':
    myfork()
    #help(os.waitpid)
