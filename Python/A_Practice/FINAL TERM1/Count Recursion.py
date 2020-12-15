

''' loop_CountUP(stop,start) '''
def loop_CountUP(n,start = 1):
    if start <= n:
        print(start)
        return loop_CountUP(n,start+1)
    return 1
loop_CountUP(10,1)


''' Loop_CountBack(stop,strt) '''
def loop_CountBack(n,start):
    if start >= n:
        print(start)
        return loop_CountBack(n,start-1)
    return start

loop_CountBack(1,10)
