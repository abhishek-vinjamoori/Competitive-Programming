from math import log

def log_ans(i):
    return log(log(i))
def pow_ans(i1,i2):
    return i2*log(i1)
def f1(x,y,z):
    return (log_ans(x)+pow_ans(y,z))
def f2(x,y,z):
    return (log_ans(x)+pow_ans(z,y))
def f3(x,y,z):
    return (log_ans(x)+y+z)
def f4(x,y,z):
    return (log_ans(x)+y+z)
def f5(x,y,z):
    return (log_ans(y)+pow_ans(x,z))
def f6(x,y,z):
    return (log_ans(y)+pow_ans(z,x))
def f7(x,y,z):
    return (log_ans(y)+x+z)
def f8(x,y,z):
    return (log_ans(y)+x+z)
def f9(x,y,z):
    return (log_ans(z)+pow_ans(x,y))
def f10(x,y,z):
    return (log_ans(z)+pow_ans(y,x))
def f11(x,y,z):
    return (log_ans(z)+x+y)
def f12(x,y,z):
    return (log_ans(z)+x+y)

x,y,z=[float(x) for x in input().split()]
max=f1(x,y,z)
ans="x^y^z"
if(f2(x,y,z)>max):
    max=f2(x,y,z)
    ans="x^z^y"
if(f3(x,y,z)>max):
    max=f3(x,y,z)
    ans="(x^y)^z"
if(f4(x,y,z)>max):
    max=f4(x,y,z)
    ans="(x^y)^z"
if(f5(x,y,z)>max):
    max=f5(x,y,z)
    ans="y^x^z"
if(f6(x,y,z)>max):
    max=f6(x,y,z)
    ans="y^z^x"
if(f7(x,y,z)>max):
    max=f7(x,y,z)
    ans="(y^x)^z"
if(f8(x,y,z)>max):
    max=f8(x,y,z)
    ans="x^y^z"
if(f9(x,y,z)>max):
    max=f9(x,y,z)
    ans="z^x^y"
if(f10(x,y,z)>max):
    max=f10(x,y,z)
    ans="z^y^x"
if(f11(x,y,z)>max):
    max=f11(x,y,z)
    ans="(z^x)^y"
if(f12(x,y,z)>max):
    max=f12(x,y,z)
    ans="x^y^z"
print(ans)