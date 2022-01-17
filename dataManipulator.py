x = 2
calSum = 0

while x > 0:
    name = input()
    date = input()
    calAmount = (input())
    
    name = name[6:]
    date = date[6:]
    calAmount = int(calAmount[28:])
    calSum = calSum + calAmount
    x = x-1
    
print("the total amount of calories: ", calSum)
    
    

