# This official set of rules is called Chop-Sticks where five fingers are subtracted should a hand's sum exceeds 5 as described below.

# 1. Each player begins with one finger raised on each hand. After the first player turns proceed clockwise.
# 2. On a player's turn, they must either attack or split, but not both.
# 3. To attack, a player uses one of their live hands to strike an opponent's live hand. The number of fingers on the opponent's struck hand will increase by the number of fingers on the hand used to strike.
# 4. To split, a player strikes their own two hands together, and transfers raised fingers from one hand to the other as desired. If any hand of any player reaches exactly five fingers, then the hand is killed, and this is indicated by raising zero fingers (i.e. a closed fist).
# 5. A player may revive their own dead hand using a split, as long as they abide by the rules for splitting. However, players may not revive opponents' hands using an attack. Therefore, a player with two dead hands can no longer play and is eliminated from the game.
# 6. If any hand of any player reaches five or more fingers, then it is considered a "dead hand". Under alternate rules, if any hand reaches more than five fingers, five fingers are subtracted from that hand. For instance, if a 4-finger hand strikes a 2-finger hand, for a total of 6 fingers, then 5 fingers are automatically subtracted, leaving 1 finger.
# 7. A player wins once all opponents are eliminated (by each having two dead hands at once).
# 8. There is no variation in which a player can kill their own hand.


### This stores the Game State
gameOver = False

### This represent Both hands of player 1
player1 = [1,1]

### This represent Both hands of player 2
player2 = [1,1]

### This prints the status after every move 
def status():
    print()
    print('Current Status :')
    print("Player1 : " + str(player1[0]) + " " + str(player1[1]))
    print("Player2 : " + str(player2[0]) + " " + str(player2[1]))
    print()

### This function prints the Winner
def whoWon(num):
    print('------------------------------------------------------------')
    print( '           Player' + str(num) + ' WON !!')
    print('------------------------------------------------------------')
    gameOver = True

### This is one of the two moves available in this Game - THE SPLIT MOVE
def splitMove(hand, num1, num2,player):
    if(player == 1):
        player2[0] = num1
        player2[1] = num2
    if(player == 2):
        player1[0] = num1
        player1[1] = num2

    status()

### This is one of the two moves available in this Game - THE ATTACK MOVE
def attackMove(hand1, hand2,player):
    if(player == 1):
        if(hand1 == 'R') :
            if(hand2 == 'R'):
                player2[1] += player1[1]
            elif(hand2 == 'L'):
                player2[0] += player1[1]
        elif(hand1 == 'L'):
            if(hand2 == 'R'):
                player2[1] += player1[0]
            elif(hand2 == 'L'):
                player2[0] += player1[0]
    if(player == 2):
        if(hand1 == 'R') :
            if(hand2 == 'R'):
                player1[1] += player2[1]
            elif(hand2 == 'L'):
                player1[0] += player2[1]
        elif(hand1 == 'L'):
            if(hand2 == 'R'):
                player1[1] += player2[0]
            elif(hand2 == 'L'):
                player1[0] += player2[0]
    
    if(player1[0] >= 5):
        player1[0] = 0
    if(player2[0] >= 5):
        player2[0] = 0
    if(player1[1] >= 5):
        player1[1] = 0
    if(player2[1] >= 5):
        player2[1] = 0

    if (player1[0] == 0 and player1[1] == 0):
        gameOver = True
        whoWon(2)
    
    if (player2[0] == 0 and player2[1] == 0):
        gameOver = True
        whoWon(1)

    status()

status()

while ( gameOver == False ):
    player = 1
    print("Enter move for Player1 : ")
    move = input()

    print("Enter move Combination : ")
    moveCombo = input()

    if (move == 'A'):
        h1,h2 = moveCombo.split()
        attackMove(h1,h2,player)

    if (move == 'S'):
        h,a1,a2 = moveCombo.split()
        splitMove(h,a1,a2,player)

    player = 2
    print("Enter move for Player2 : ")
    move = input()

    print("Enter move Combination : ")
    moveCombo = input()

    if (move == 'A'):
        h1,h2 = moveCombo.split()
        attackMove(h1,h2,player)

    if (move == 'S'):
        h,a1,a2 = moveCombo.split()
        splitMove(h,a1,a2,player)

    