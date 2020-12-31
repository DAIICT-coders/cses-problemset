import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))
def get_list_string(): return list(map(str, sys.stdin.readline().strip().split()))
def get_string(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_print_int(x): sys.stdout.write(str(x) + '\n')
def get_print(x): sys.stdout.write(x + '\n')
 
def solve():
    MOD = 10**9 + 7
    for _ in range(get_int()):
        a,b,c = get_ints()
        res = 1
        while(c):
            if( (c & 1) == 1):
                res = (res*b)%(MOD - 1)
            c = (c >> 1)
            b = (b * b)%(MOD - 1)
        ans = 1
        while(res):
            if((res & 1) == 1):
                ans = (ans * a)%MOD
            res = (res >> 1)
            a = (a * a)%MOD
        get_print_int(ans)
solve()