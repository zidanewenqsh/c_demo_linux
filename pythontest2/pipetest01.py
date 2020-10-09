#!/usr/bin/python3
import os
import time
a = 1
def myfork():
    global a
    r,w = os.pipe()
    pid = os.fork()
    if pid==0:
        os.close(r)
        w = os.fdopen(w,'w')
        for i in range(10):
            w.write(f"{a} ")
            a+=1
            time.sleep(0.1)
        w.close()
    elif pid>0:
        os.close(w)
        r = os.fdopen(r)
        print(r.read())
        r.close()
        os.waitpid(pid, 0)
    else:
        print("fork error")
if __name__ == '__main__':
    myfork()
    #help(os.waitpid)
