import sys

def random(size=16):
    return open("/dev/urandom").read(size)



def main():
    key = random(size=1024)
    print key


if __name__=='__main__':
    main()

