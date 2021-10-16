import re

fic=re.split('\W+',open('input.txt','r').read())
(min, max, cpt, accepted)=(0,0,0,0)
for i in range(0,len(fic),4):
	min=fic[i]
	max=fic[i+1]
	verif=fic[i+2] #caractère à vérfier
	for x in fic[i+3]: #fic[i+3] est le mdp
		if(x==verif):
			cpt+=1
	if(cpt<=min and cpt>=max):
		accepted+=1
