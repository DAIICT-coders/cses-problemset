import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))
def get_list_string(): return list(map(str, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_print_int(x): sys.stdout.write(str(x) + '\n')
def get_print(x): sys.stdout.write(x + '\n')
MOD = 10**9 + 7
 
def solve():
    for _ in range(get_int()):
        a,b = get_ints()
        res = 1
        while(b):
            if( (b & 1) == 1):
                res = (res*a)%MOD
            b = (b >> 1)
            a = (a * a)%MOD
        get_print_int(res)
solve()