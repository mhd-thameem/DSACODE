age=int(input("Enter Your Age:"))
if age>=0 and age<=5:
    print("Ticket is Free!");
elif(age<=12):
    print("Ticket Price is $5!");
elif(age<=60):
    print("Ticket Price is $10!");
elif(age<120):
    print("Ticket Price is $7!");
else:
    print("Enter Valid Age!!!");
    
