# Python BST
class BinaryNode:
    def __init__(self,value = None):
        "Create binary Node"    
	self.value = None
	self.left = None
	self.right = None
	def add(self,val):
		'''Add a new node to the tree containing '''
		if val<=self.value:
			if self.left:


class BinaryTree:
    def __init__(self):
	'''Create empty binary tree'''	    
	    self.root = None
	def add(self, value):
		'''Insert value inot proper location in Binary Tree'''
		if self.root is None:
			self.root = BinaryNode(value)
		else:
		    self.root.add(value)
