class unionfind1(object):
	def __init__(self, N):
		self.id = range(N)
	def connected(self, p, q):
		return self.root(p) == self.root(q)
	def root(self,i):
		while i != self.id[i]:
			i = self.id[i]
		return i		
	def union(self, p, q):
		rp = self.root(p)
		rq = self.root(q)
		self.id[rp] = rq		
	def display(self):
		print self.id


