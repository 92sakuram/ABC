inputNumber = input("元の数を入力してください：")
baseBefore = input("元の底を入力してください：")
baseAfter = input("変換後の底を入力してください：")
baseArr='0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
Number = 0
def baseValue(x):
  for i in range(35):
    if(baseArr[i]==x):
      return i
  return -1
print(inputNumber+"("+baseBefore+")")
j=0
Number=0
outputNumber="0"

while j<100:
  if baseValue(int(inputNumber[j]))==-1:
    break
  Number = Number*int(baseBefore) + (baseValue(inputNumber[j]))
  print(str(Number))
  j=j+1

print("↓"+str(Number))
j=0
while Number!=0:
  outputNumber[j] = baseArr[Number%int(baseAfter)]
  Number=Number//baseAfter
  j=j+1
print(outputNumber+"("+baseAfter+")")