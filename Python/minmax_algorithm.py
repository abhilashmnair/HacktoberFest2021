def minmax(lst,start,end):
    if end-start==1:
        return (lst[end],lst[start]) if lst[end]>lst[start] else (lst[start],lst[end])
    else:
        mid=(start+end)//2
        (max1,min1)=minmax(lst,start,mid)
        (max2,min2)=minmax(lst,mid,end)
        minnum=min(min1,min2)
        maxnum=max(max1,max2)
        return (maxnum,minnum)

a=input("Enter the numbers with a space:").split(" ")
a=list(map(int,a))
maxnum,minnum=minmax(a,0,len(a)-1)
print("Maximum number=",maxnum,"\nMinimum number=",minnum)
