a = int(input())

while(a):
    a-=1
    str = input() 

    print("A" if(str.count('A') > str.count('B') ) else 'B')
