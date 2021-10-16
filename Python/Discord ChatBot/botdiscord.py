import discord, time, re
from discord.ext import commands

TOKEN = "NzI0Mzk3NDMyNDU2MDg1NTc1.Xu_8HQ.naF3-jmrceQJJJ3OoTZxpp5RqaE"
variable=open("variables.txt",'w')
variable.write("0\r")
variable.close()

description = '''Bot Python'''

bot = commands.Bot(command_prefix='!', description=description)

list_players = []
game= False
@bot.event
async def on_ready():
	print('Logged in as')
	print(bot.user.name)
	print(bot.user.id)
	print('------')

@bot.command()
async def hello(ctx, arg1=""):
	"""Says Hello World"""
	if (arg1==""):
		await ctx.send("hello discord")
	else:
		await ctx.send("hello {}".format(arg1))

@bot.command()
async def 


bot.run(TOKEN)

