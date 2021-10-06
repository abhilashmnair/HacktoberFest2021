#code added for calculating discount in python language by Amitlpu-840
amt = int(input("Enter Sale Amount: "))
if amt > 0:
    if amt <= 5000:
        discount = amt * 0.08
    else:
        if amt <= 15000:
            discount = amt * 0.15
        else:
            if amt <= 25000:
                discount = 0.24 * amt
            else:
                discount = 0.32 * amt
    print("Discount : ", discount)
    print("Net Pay  : ", amt - discount)
else:
    print("Invalid Amount")
