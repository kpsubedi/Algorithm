from binary_tree import *


def main():
	bt = BinaryTree()
	bt.add(5)
	print bt.contains(5)
	bt.add(10)
	print bt.contains(9)


if __name__=='__main__':
	main()

