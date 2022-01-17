 # Creator Name: Deven Greenlee
 # Language: Python 
 # Function: takes in user numbers and prints out average and total when done
 # Last Edited: 12/3/20



total = 0
count = 0 
average = 0
userNum = 0
userNum = input("Please enter a number")
num= 0

while True:
    if(userNum == 'done'):
        break
    try:
        num = int(userNum)
    except:
        print("line is invalid")
        continue
    num = int(userNum)
    count += 1 
    total = total + num
    userNum =input("Please enter a number")

average = total/count
print("the count", count)
print ("the total", total)
print ("the average", average)

