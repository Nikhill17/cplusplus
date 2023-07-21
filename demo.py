def accept_array (A):
    n=int(input("ENTER THE TOTAL  NUMBER OF STUDENTS "))
    for i in range (n):
        x=float(input("ENTER THE FIRST YEAR percentile OF THE STUDENT %d : "%(i+1)))
        A.append(x)
    print(" ARRAY ACCEPTED SUCCESFULLY ")


def display_array(A):
    n=len(A)
    if(n==0):
        print("\n no reacords found in the database ")
    else:
        print("ARRAY OF FE MARKS : ")
        for i in range (n):
            print(A[i])

def display_array2(A):
    n=len(A)
    if(n==0):
        print("\n no reacords found in the database ")
    else:
        print("ARRAY OF FE MARKS : ")
        for i in range (5):
            print(A[i])


def partition (A,s,l):
    b=s+1
    e=l
    while(e>=b):
        while(b<=l and A[s]>=A[b]):
            b=b+1
        while(A[s]<A[e]):
                e=e-1
        if (e>b):
                temp=A[e]
                A[e]=A[b]
                A[b]=temp
    temp = A[s]
    A[s] =  A[e]
    A[e] = temp
    return e



def quick_sort(A,s,l):
    if s<l :
        mid=partition(A,s,l)
        quick_sort(A,s,mid-1)
        quick_sort(A,mid+1,l)

def main ():
    A=[]
    while True :
        print("1. ACCEPT AND DISPLAY ARRAY ")
        print("2. QUICK SORT ")
        print("3. EXIT")
        ch=int(input("ENTER YOUR CHOICE :"))
        if ch==3 :
            print("end of the program")
            quit()

        elif ch==1 :
            accept_array(A)
            display_array(A)    

        elif ch==2 : 
            print("MARKS BEFORE SORTING : ")
            display_array(A)
            n=len(A) 
            quick_sort(A,0,n-1)
            print("MARKS  AFTER SORTING : ")
            display_array2(A)
                    
        else:
            print("WRONG OPTION ENTERED")

main()