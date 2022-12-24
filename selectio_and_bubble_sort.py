def selection_sort(arr,n):
    for i in range(0,n):
        for j in range(i+1,n):
            if(arr[j]<arr[i]):
                temp=arr[j]
                arr[j]=arr[i]
                arr[i]=temp
    print(arr)
    
def bubble_sort(arr,n):
    for i in range(0,n):
        for j in range(0,n-1):
            if(arr[j]>arr[j+1]):
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
    print(arr)
    
def top(arr,n):
    print("top 5 scores are:")
    for i in range(0,5):
        print(arr[n-1-i]," ")
    
    
arr=[]
n=int(input("Enter the number of students:"))
for i in range(0,n):
    per=int(input("Enter the percentage of students:"))
    if per<=100:
        arr.append(per)
    else:
        print("invalid input.")
        

ch=int(input("Enter your choice.\n1.selection sort.\n2.bubble sort.\n 3.top 5 elements.\n4.exit."))
if ch==1:
    selection_sort(arr,n)
elif ch==2:
    bubble_sort(arr,n)
elif ch==3:
    top(arr,n)
else:
    print("exit")


            

                
    

    








''' print("\nProgram for selection sort")
print("\nHow many elements are there in array.")
n=int(input())
array=[]
for i in range(0,n):
    print("\nEnter the elements in array.")
    item=int(input())
    array.append(item)
print(array)
selection_sort(array,n)
bubble_sort(array,n) '''