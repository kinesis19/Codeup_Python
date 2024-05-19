
def get_prime(n):
    cnt = 0
    for x in range(n):
        if n % x == 0:
            cnt = cnt + 1
        
    if cnt == 3:
        return True
    else:
        return False
    
print(get_prime(17))