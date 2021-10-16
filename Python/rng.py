import psutil 
cpu=psutil.cpu_freq().current

def rand(mini, maxi):
	global cpu
	for i in range(0,int(cpu)):
		cpu=cpu+cpu*(mini+maxi)%maxi
	return(cpu)

print(rand(10,150)) # exemple d'execution