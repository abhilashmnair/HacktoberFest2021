import random
import time
two = 2
three = 3
four = 4
five = 5
six  = 6
seven = 7
eight = 8
nine = 9
ten = 10
face_cards = {'jack' 10, 'queen' 10, 'king'  10, ace  1}
cards = [two, three, four, five, six, seven, eight, nine, ten, face_cards]
card_two = 0
choice1 = random.randint(0, 12)
choice2 = random.randint(0, 12)

if choice1 = 9
  bean = random.randint(0, 3)
  if bean == 0
    choice1 = face_cards['jack']
    card_one = choice1
  if bean == 1
    choice1 = face_cards['queen']
    card_one = choice1
  if bean == 2
    choice1 = face_cards['king']
    card_one = choice1
  if bean == 3
    choice1 = face_cards['ace']
    card_one = choice1
else
  card_one = (cards[choice1])

if choice2 = 9
  beans = random.randint(0, 3)
  if beans == 0
    choice2 = face_cards['jack']
    card_two = choice2
  if beans == 1
    choice2 = face_cards['queen']
    card_two = choice2
  if beans == 2
    choice2 = face_cards['king']
    card_two = choice2
  if beans == 3
    choice2 = face_cards['ace']
    card_two = choice2
else
  card_two = (cards[choice2])

placeholder = 0
current_hand = [card_one, card_two]
total = card_one + card_two
placeholders_cousin = 0
lazyandbadaithatwillmade = cards[random.randint(0, 8)]
lazyandbadaithatwillmade2 = cards[random.randint(0, 8)]
aishand = [lazyandbadaithatwillmade, lazyandbadaithatwillmade2]
poop = 0
pee = sum(aishand)
lossisathing = False
idea = False

while True
  pee = sum(aishand)
  if pee  17
    baseholder = random.randint(0, 8)
    aishand.append(int(cards[baseholder]))
  elif pee = 17 and pee = 21
    poop = sum(aishand)
    break
  elif poop  21
    lossisathing = True
    break
  else
    lossisathing = False
    break
  
print(Welcome to Will's crap rendition of blackjack.)
input(Press enter to start )
while True
  for x in current_hand
    if int(sum(current_hand))  21
      print(Your hand is over 21. You lose.)
      idea = True
      break
  if idea == True
    break
  print(This is your current hand -  + str(current_hand))
  print(You can either (1) - Stay or (2) - Draw)
  choice = input()
  if choice == '1'
    print(You chose to stay.) 
    for x in current_hand
      placeholders_cousin += x
    print(Your cards total to  + str(placeholders_cousin))
    time.sleep(2)
    print(The dealer total is...)
    time.sleep(3)
    if lossisathing == True
      print(Over 21! You win.)
      break
    elif poop  placeholders_cousin
      print(poop)
      print(You lose.)
      break
    elif poop == placeholders_cousin
      print(The same as yours! Tie goes the dealer.)
      print(That means you lose.)
      break
    elif poop  placeholders_cousin
      print(poop)
      print(You win!)
      print(Cue the celebration music)
      break
    break
  if choice == '2'
    print(You chose to draw.)
    placeholder = random.randint(0, 8)
    print(int(cards[placeholder]))
    current_hand.append(int(cards[placeholder]))
  else
    print(Try again)