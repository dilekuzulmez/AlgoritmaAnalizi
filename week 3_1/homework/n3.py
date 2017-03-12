from random import shuffle
import numpy as np
import time

def Arama(matris,boyut):
    minimum=matris[0][0][0]
    for x in range(boyut):
        for y in range(boyut):
            for z in range(boyut):
                if matris[x][y][z] < minimum:
                    minimum = matris[x][y][z]
    return minimum


n=100
dizi = [[[z for z in range(n)] for y in range(n)] for x in range(n)]
shuffle(dizi)

start = time.time()
result=Arama(dizi,100)
end = time.time()
sure = end-start

print("n^3 N=1000, sure = ",sure*(10**3), "sn")
print("n^3 N=10000, sure = ",sure*(10**9), "sn")
print("n^3 N=100000, sure = ",sure*((10**9)**3), "sn")
print("n^3 N=1000000, sure = ",sure*(((10**9)**3)**3), "sn")

