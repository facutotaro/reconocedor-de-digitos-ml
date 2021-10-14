with open("accuracy.csv","r") as f:

	txt = f.read()

txt = txt.replace(",",".")

with open("accuracy.csv","w") as f:

	f.write(txt)