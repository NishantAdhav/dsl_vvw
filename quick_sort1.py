#DSL - 16
a=[]
n=int(input("Enter No.of Students :"))
for i in range(n):
    a.append(float(input("Enter Percentage of Students" +str(i+1)+ ":")))
print(a)

#Display input
def print_percentage(a):
    for i in range(len(a)):
        print(a[i])

#Partition
def percentage_partition(a,start,end):
    pivot=a[start]
    low=start+1
    high=end
    while True:
        while low<=high and a[low]<=pivot:
            low+=1
        while low<=high and a[high]>=pivot:
            high-=1
        if low<=high:
            a[low], a[high]=a[high], a[low]
        else:
            break

    a[start],a[high]=a[high],a[start]
    return high

#Quick sort
def Quicksort(a,start,end):
    while start<end:
        partition=percentage_partition(a,start,end)
        Quicksort(a,start,partition-1)
        Quicksort(a,partition+1,end)
        return a

#Display Top 5 Scores
def display_top_5(a):
    print("Top 5 Scores :")
    if len(a)<5:
        start,stop=len(a)-1,-1
    else:
        start,stop=len(a)-1,len(a)-6
    for i in range(start,stop,-1):
        print(a[i])
    else:
        print("Enter more students than 5")

sorted=[]

#Menu
while True:
    print("\n-----------SELECT A OPTION------------")
    print("1.Display Percentage of Students")
    print("2.Quick Sorted list to Display Top 5 Scores")
    print("3.Exit")
    ch=int(input("Enter your choice :"))
    if ch==1:
        print_percentage(a)
    elif ch==2:
        print("Percentages of Students Quick Sorted :")
        sorted=Quicksort(a,0,len(a)-1)
        print_percentage(sorted)
        x=input("To Display Top 5 Scores choose(Y/N):")
        if x=='Y':
            display_top_5(sorted)
    elif ch==3:
        print("THANK YOU !!!")
        False
        break
    else:
        print("Enter valid choice")
        break;