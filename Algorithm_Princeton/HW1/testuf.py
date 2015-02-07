from unionfind import *
from unionfind1 import *
from unionfind2 import *
N = 10000
uf = unionfind(N)
uf.display()
print uf.connected(0,2)
uf.union(0,2)
print uf.connected(0,2)
print uf.connected(2,0)
print uf.connected(4,10)
print "#############Modified Union-Find############"
uf1 = unionfind1(N)
uf1.display()
print uf1.connected(0,2)
uf1.union(0,2)
print uf.connected(0,2)
print uf.connected(2,0)
print uf.connected(4,10)
print "##############Improved Union-Find###########"
uf2 = unionfind2(N)
uf2.display()
print uf2.connected(0,2)
uf2.union(0,2)
print uf.connected(0,2)
print uf.connected(2,0)
print uf.connected(4,10)