# #DATATYPES AND OPERATORS
# #MUTTABLE AND IMMUTABLE DATA TYPES
# #MUTABLE DATATYPES: LIST, DICTIONARY, SET
# fruits=["Apple","Banana","Cherry"]
# print(id(fruits))
# fruits.append("Orange")
# print(id(fruits))

# #IMMUTABLE DATATYPES: STRING, TUPLE,INTEGER, FLOAT,COMPLEX,STRING
# name="John"
# print(id(name))
# name=name+" Doe"
# print(id(name))

# #int
# id=222
# print(type(id))

# #float
# id=3.14
# print(type(id))

# #complex
# id=2+3j
# print(type(id))

# #DATA CONVERSION
# # The process of converting numeric data from one type to another is called type conversion.
# num1=10
# num2=float(num1)
# print(num2)
# num3=complex(num1)
# print(num3)
# #Complex numbers cannot be converted to integer or float.


#TYPE CASTING
# str1="123"
# str2="PATHANIA"
# print(type(str1))
# str1=int(str1)
# print(type(str1))
# print(type(str2))
# print(int(str2)) #THIS CONVERSION IS NOT POSSIBLE AS PYTHON WILL ASK WHETHER THE STIRNIG CONTAINS INTERGER SO THAT IT GETS CONVERTED



#OPERATORS
#ARITHEMETIC OPERATOR
# Addition	+	a+b
# Subtraction	-	a-b
# Multiplication	*	a*b
# Division	/	a/b
# Exponential	**	a**b
# Modulus	%	a%b
# Floor Division	//	a//b

#Assignment operators:
# Name	Evaluated As
# =	a=b
# +=	a+=b or a=a+b
# -=	a-=b or a=a-b
# *=	a*=b or a=a*b
# **=	a**=b or a=a**b
# /=	a/=b or a=a/b
# //=	a//=b or a=a//b
# %=	a%=b or a=a%b
# &=	a&=b or a=a&b
# **	=**
# ^=	a^=b or a=a^b
# >>=	a>>=b or a=a>>b
# <<=	a<<=b or a=a<<b

#Bitwise operators
# Name	Operator	Example
# Bitwise AND	&	a & b
# Bitwise OR	|	a | b
# Bitwise NOT	~	~a
# Bitwise XOR	^	a ^ b
# Bitwise right shift	>>	a >> b
# Bitwise left shift	<<	a << b

# Comparison operators:
# Name	Operator	Example
# Equal	==	a==b
# Not Equal	!=	a!=b
# Less Than	<	a<b
# Greater Than	>	a>b
# Less Than or Equal to	<=	a<=b
# Greater Than or Equal to	>=	a>=b

# Identity operators:
# Name	Example	Evaluated As
# is	a is b	Returns True if a and b are same
# is not	a is not b	Returns True if a and b are not same

# Logical operators:
# Name	Operator	Example
# AND	and	a == 2 and b == 3
# OR	or	a == 2 or b == 3
# NOT	not	not(a == 2 or b == 3)

# Membership operators:
# Name	Example	Evaluated As
# in	a in b	Returns True if a is present in given sequence or collection
# not in	a not in b	Returns True if a is not present in given sequence or collection

# Operator Precedence in Python:
# Name	Operator
# Parenthesis	()
# Exponential	**
# Complement, unary plus, unary minus	~ , +, -
# Multiply, divide, modulus, floor division	*, /, %, //
# Addition, subtraction	+, -
# Left shift and right shift operators	<<, >>
# Bitwise AND	&
# Bitwise XOR and OR	^, |
# Comparison operators	<, >, >=, <=
# Equality operators	==, !=
# Assignment operators	=, %=, /=, //=, -=, +=, *= , **=
# Identity operators	is, is not
# Membership operators	in, not in
# Logical operators	and, or, not



# Booleans
# x=13
# if(x>13):
#     print("X is greater than 13")
# else:
#     print("X is less than 13")

# x=None
# print(bool(None))
# y=20
# print(bool(y))
# z=20.0
# print(bool(z))
# a=0
# print(bool(a))
# b=2+3(i)
# print(bool(b))





# STRING
name="KARAN"
print(name)
print('"My Name is ", Karan')


#OPERATIONS ON STRING
name="KARAN"
print(len(name))

pie="ApplePie"
print(pie[0:4])

for i in pie:
    print(i)

pie=pie.upper()
print(pie)

pie=pie.lower()
print(pie)

name1=" KARAN "
print(len(name1))
name1=name1.strip()
print(len(name1))

name2="KARAN !!!"
print(name2.rstrip("!"))

name3="KARAN RAJ"
name3=name3.replace(" ","#")
print(name3)

name4="KARAN RAJ"
print(name4.split(" "))

name5="KARAN RAJ"
print(name5.capitalize())

name="KARAN RAJ"
print(name.count("A"))

print(name.endswith("RAJ"))

print(name.find("RAJ"))

print(name5.isalnum()) #IT WILL RETURN ONLY IF THE STRING CONTAINS ONLY A-Z,a-z,0-9

print(name5.isalpha()) #IT WILL RETURN TRUE ONLY IF STRING CONSISTS OF A-Z,a-z

print(name5.islower()) #KYA LOWER HAI

print(name5.isupper()) # KYA UPPER HAI

print(name5.isprintable()) #RETURNS TRUE ONLY IF THE VAUES ARE PRINTABLE 

name6=" "
print(name6.isspace()) #RETURNS TRUE WHEN THE STIRNG CONTAINS ONLY WHITE SPACES NOTHING ELSE

name7="Karan Raj"
print(name7.istitle()) #return true only if the first letter of each words of the string is capatiklzed

name8="KARAN RAJ"
print(name8.replace("RAJ","SHAH"))

name9="kARan"
print(name9.swapcase());

name10="karan raj"
print(name10.title()) #capitilize first letter of each word







#FORMAT STRINGS
first_name="KARAN"
last_name="SHAH"
print(first_name+" "+last_name)
#print(first_name+" "+29+last_name) # WILL THROW ERROR BECAUSE WE CAN CONCATENATE ONLY STRNIGS NOTHING ELSE
#SOLUTION FOR THE ABOVE PROBLEM
age=21
statment="MY NAME IS {} {} AND MY AGE IS {}"
print(statment.format(first_name,last_name,age))





#ESCAPE CHARACTERS
str1="He was \"Flabbergasted\"."
print(str1)

str2="Today there will be mock interview of \n Paras Pathania."
print(str2)

str3="Today we will have classes \t from \t 2pm to 3pm"
print(str3) #\t used for tab

str4="Toda\by there will be mock interview for those people who have not given there interview yet."
print(str4) #\b will erase all the character befor it





#F-STRINGS
print(f"My name is {first_name} {last_name} and i am {age} years old")

pi=3.1415926535
print(f"Value of Pi:{pi:.2f}")

num=100000
print(f"Number: {num:,}")















