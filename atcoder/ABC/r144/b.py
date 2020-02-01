a=int(input());
hh=False;
for i in range(1,10):
	if(a%i==0 and a//i<=9):
		hh=True;
		break;
if(hh):
	print("Yes");
else:
	print("No");