 # Creator Name: Deven Greenlee
 # Language: Python 
 # Function: takes in text from the user and prints out the most frequent  
 # Last Edited: 12/2/20

print("please enter text")
userName = input()

count = 0
high = 2
dup = False
let = []

for x in userName:
    
    for y in userName:
        if(x == y and x != ' '):
            count = count + 1

        
    if(count >= high):
        for letter in let:
            if (letter==x):
                dup = True
        
        if(dup != True)and count > high:
            let.clear()
            let.append(x)
            high = count
            dup = False
        elif (dup != True)and count == high  :
            let.append(x)
            high = count
            dup = False
            
         
    dup = False
    count = 0;

print("The Most fequent Letter(s) is", let)
    