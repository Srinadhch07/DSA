#written by SRINADHCH07
#GAME :ROCK PAPER SCISSORS 

from random import*
a=["ROCK 🗿","Paper 🧻","Scissors ✂️"]
z=["ROCK 🗿","Paper 🧻","Scissors ✂️"]
print("""\033[3;36m              ROCK - PAPER - SCISSOR          \n\n\n""")
b=input("\033[36;1mEnter name of player 1:")
b=b.upper()
c=input("Enter name of player 2:")
c=c.upper()
d=int(input("Enter Number of games: "))
p1=0
p2=0
for game in range(d):
  d=input("Say go ! ")
  d=d.lower()
  while d=="go":
        y=choice(a)
        s=choice(z)
        print("""
        
        
        
        
        
        \033[32;1m                                
        """,b,"""           """,c,"""          
                                                            
                                                          
        """,y,"""     🔥    """,s,"""     
                                                           
                                                          
        
        
        
        
        
        
        
        \033[0m""")
        if(y==a[0]and s==z[0]) or (y==a[1] and s==z[1]) or (y==a[2] and s==z[2]):
           print("It's a clash 💥")
           break
        if (y==a[0] and s!=z[1] and s!=z[0])or(y==a[1] and s!=z[2] and s!=z[1])or(y==a[2] and s!=z[0] and s!=z[2]):
           p1+=100
           print("\033[31;1m        ",b,"\033[0mGot 💯 points")
        if(y!=a[0]and y!=a[1]and s==z[0]) or (y!=a[2]and y!=a[1] and s==z[1]) or (y!=a[2] and y!=a[0] and s==z[2]):
           p2+=100
           print("\033[31;1m        ",c,"\033[0mGot 💯 points")
        break
print("\033[36;1mSCOREBOARD:\n",b," : ",p1,"\n",c," : ",p2)
if(p1>p2):
    print("""\033[35;1m                   
               🏆""",b,"""🏆           
                  WINNER \033[0m""")
elif(p2>p1):
    print("""\033[34;1m                  
                🏆""",c,"""🏆           
                   WINNER \033[0m""")
if(p1==p2):
    print("\033[1m                BIG CLASH💥\033[0m")



#python
