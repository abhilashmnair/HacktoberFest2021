# Créer une liste multi-dimensionnelle qui va nous servir de board 
# On initialise les différents points à un espace, pour dire que 
# c'est vide

Board = [['','',''],['','',''],['','','']]
(x, y, cpt)=(0,0,0)
won = False
def draw():
	for i in range(0,3):
		print(Board[i], sep='|')

def choisirposition(x,y):
	x=input("Veuillez entrez le numéro de la ligne où vous voulez jouer \n")
	y=input("Veuillez entrez le numéro de la column où vous voulez jouer \n")
	return(int(x),int(y))

def jouer(x,y):
	(x,y)=choisirposition(x,y)
	if(cpt%2==0):
		Board[x][y]='X'
	else:
		Board[x][y]='O'

def gagner():
	global won
	for i in range(0,3):
		j=0
		if(Board[i][j]==Board[i][j+1] and Board[i][j+1]==Board[i][j+2]):
				won = True
				return(Board[i][j])

	for j in range(0,3):
		i=0
		if(Board[i][j]==Board[i+1][j] and Board[i+1][j]==Board[i+2][j]):
				won = True
				return(Board[i][j])

	if(won == False):
		i=0
		j=0
		if(i==j and Board[i][j]==Board[i+1][j+1] and Board[i+1][j+1]==Board[i+2][j+2]):
			won= True
			return(Board[i][j])
		elif(Board[i][j+2]==Board[i+1][j+1] and Board[i+1][j+1]==Board[i+2][j]):
			won= True
			return(Board[i+1][j+1])

while(won==False or cpt>9):
	jouer(x,y) 
	draw()
	if(cpt>=4):
		char= gagner()
	cpt+=1

if(won==True):
	print("Le joueur gagnant jouait avec : "+char)
else:
	print("it's tie")

