file = open("dataStore.txt", 'w')
trigger = True

while (trigger):

    
    name = input('Please enter your name: ')
    date = input('Please enter todays date: ')
    calAmount = (input('please enter your calorie amount: '))
    
    temp = "name: " + name + "\n"

    file.write(temp)
    temp = "date: " + date + "\n"
    file.write(temp)
    temp = "Calorie Amount for the day: " + calAmount + "\n"
    file.write(temp)
    
    option = input('is that all new information? [y/n] ')
    
    if option == 'y':
        trigger = False
        print("Program Ended..")
        
    if option== 'n':
        trigger = True
        # TODO: write code...
    
    
