a = 10 #전역변수 
def func(b) :
    c = a + b #지역변수
    return c
print(func(10))
