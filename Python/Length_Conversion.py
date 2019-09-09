Feet=int(input("Enter The Length:"))
Unit=input("Enter Unit:")
Inches=Feet*12
Centimetres=Feet*30.48
Metres=Feet*0.308
if(Unit=="Inches"):
    print("Length in Inches=",Inches)
if(Unit=="Centimetres"):
    print("Length in Centimetres=",Centimetres)
if(Unit=="Metres"):
    print("Length in Metres=",Metres)
else:
    print("invalid Unit")
