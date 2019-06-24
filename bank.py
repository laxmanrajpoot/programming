
class bank:
    def __init__(self):
        self.a=a=input("enter name")
        self.b=b=input("enter ac no")
        
    def deposite(self):
        self.z=d=int(input("enter balance"))
        print(self.z)
    def withdraw(self):
        w=int(input("enter balance to withdraw"))
        if(self.z>w):
            self.z=self.z-w
            print("available balance is",self.z)
        else:
            print("not sufficient balance")
    def oldcuscheck():
        name=""
        while name not in cusnames:
                name=raw_input("What is your name?\n")
                if name in cusnames:
                        username=name
                        userpassword=cuspasswords[cusnames.index(name)]
                        balance=float(cusbalance[cusnames.index(name)])
                        return username, userpassword, balance
                else:
                        print ("Sorry %s, It looks like you didn't spell you name correctly or your name is not in our records"%name)
                        again=raw_input("would like to type in your name again? (y/n)")
                        if again.lower()=='y':
                                oldcuscheck()
                        else:
                                print ("Bye bye, thank you for trying Postbank")
                                exit()

    def new(self):
        c=input("enter name")
        m=int(input("enter mob no"))
        bal=int(input("deposite atleast 500 to open ac"))
        if(bal<500):
            print("sorry service not avaliable")
        else:
            print("your ac opened sucessfully")
            print("custumer name=",c)
            print("your mob no",m)
            print("your current balance is")
            
    def display(self):
       print(self.a,self.b,self.z)


try:
    p=bank()
    x=int(input("enter 1 to new user and 2 for old user"))
    if(x==1):
        p.new()
    elif(x==2):
        p.oldcuscheck()
    else:
        print("wrong choice")
        
    n=int(input("enter your choice"))    
    print("enter 1 to deposite")
    print("enter 2 to be withdraw")
    print("enter 3 to display")
    print("enter 0 to open new account")
    
    if(n==1):
        p.deposite()
    elif(n==2):
        p.withdraw()
    elif(n==3):
        p.display()
    elif(n==0):
        p.new()
        
    else:
        print("wrong choice")
except ValueError:
    print("ValueError")
    
