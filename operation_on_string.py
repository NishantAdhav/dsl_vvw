#python program to perform operations on string.
#taking input.

s=input("\n Enter the string.")
print("string is:",s)

#1)to display wor with longest length.
#for spliting string into list contain each eord as element.
def longest():
    longest=max(s.split())
    print("longest word is:",longest)
    print("length of longest word is:",len(longest))

#2) To determine the frequency of occurance of particular character in the string.
# checking no string selected one by one.
def frequency():
    f=input("Enter the letter you want to count.")
    count =0
    for i in s:
        if i==f:
            count =count+1
    print("There are ",count," ",f," in string ")
         
#3)To check wheather a string is palindrome or not.
#reversing the string.
def pallen():
    str=' '
    for i in s:
        str=i+str
    print("Reverse string is:",str)
    if str==s:
        print("It IS PALINDROME.")
    else:
        print("IT IS NOT PALINDROME.")
    
#4) To display index of first apperance of the substring.
def first_appear():
    sub=input("Enter substring whose index you want to find:")
    if sub in s:
        print(s.index(sub))
    else:
        print("Substring is not in string")
    
    
def choice():
    while True:
      ch=int(input("Enter your choice\n1.Display word with longest length\n2.Give frequency of occurance of character in the stirng.\n3.Check wheather given string is palindrome or not.\n4.Index of first apperance of substring\n5.Exit\n"))

      if ch==1:
        longest()
      elif ch==2:
        frequency()
      elif ch==3:
        pallen()
      elif ch==4:
        first_appear()
      elif ch==5:
        break
        print("Invalid choice")
choice()
print("Thank you.")

    
    
    

