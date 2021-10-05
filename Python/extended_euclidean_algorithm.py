from tabulate import tabulate

r1 = int(input("Enter value 1 : "))
r2 = int(input("Enter value 2 : "))

a=r1
b=r2
s1 = 1
s2 = 0
t1 = 0
t2 = 1
s=0
t=0
c = 0

ans = []
ans.append(['q','r1','r2','r','s1','s2','s','t1','t2','t'])

while(r2!=0):
    h=[]
    q = r1//r2
    r = r1%r2
    h.append(q)
    h.append(r1)
    h.append(r2)
    h.append(r)

    s=s1-q*s2
    h.append(s1)
    h.append(s2)
    h.append(s)
    t=t1-q*t2
    h.append(t1)
    h.append(t2)
    h.append(t)

    t1=t2
    t2=t

    s1=s2
    s2=s


    r1=r2
    r2=r
    ans.append(h)
    c+=1



v=[]
v.append(" ")
v.append(ans[c][2])
v.append(ans[c][3])
v.append(" ")
v.append(ans[c][5])
v.append(ans[c][6])
v.append(" ")
v.append(ans[c][8])
v.append(ans[c][9])
v.append(" ")

#Final Answer
ans.append(v)

#Output
print("\n\n          Tabular Output      \n")
print(tabulate(ans))   
print("\nG.C.D : " + str(ans[c][2]))

if(ans[c][2]==1):
    print("The inverse of {0} mod {1} is {2} ".format(a,b,ans[c][5]))
else:
    print("The inverse doesnt exist")
