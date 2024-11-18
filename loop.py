while True: 
    num = input("Enter the number: ")
    num = int(num)
    sel = input("Enter you choice(a.for || b.while): ")
    x = 1   #loop started value
    sum = 0 #the sum
    
    if sel == "a" or sel == "A":
        for x in range(num+1):
            if x%2 == 0:
                sum = sum + x
            x += 1
        print("The totall value is: ",sum)
      
    elif sel == "b" or sel == "B":
        while x <= num:
            if  x%2 == 0:
                sum = sum + x
            x += 1
        print("The totall value is: ",sum)
    
    x = 0 #return to zero 
    
