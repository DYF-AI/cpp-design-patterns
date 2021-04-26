import time

start_time1 = time.time()
c = 0
for i in range(1000000):
    c += i
    print(c)
print(c)
print('time:', time.time() - start_time1)


start_time2 = time.time()
c = 0
for i in range(1000000):
    c += i
    #print(c)
print(c)
print('time:',time.time()-start_time2)
~
~
~
