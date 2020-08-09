//Code by Ramakuri Sowmya
n=int(input())
li=[]
for i in range(3):
li.append(list(input().split()))
for i in range(n-2):
if li[0][i]=='#':
print("#",end="")
continue
if li[0][i]=='.' and li[0][i+1]=='*' and li[0][i+2]=='.':
if li[1][i]=='*' and li[1][i+1]=='*' and li[1][i+2]=='*':
if li[2][i]=='*' and li[2][i+1]=='.' and li[2][i+2]=='*':
print('A',end="")
if li[0][i]=='*' and li[0][i+1]=='*' and li[0][i+2]=='*':
if li[1][i]=='*' and li[1][i+1]=='*' and li[1][i+2]=='*':
if li[2][i]=='*' and li[2][i+1]=='*' and li[2][i+2]=='*':
print('E',end="")
if li[0][i]=='*' and li[0][i+1]=='*' and li[0][i+2]=='*':
if li[1][i]=='.' and li[1][i+1]=='*' and li[1][i+2]=='.':
if li[2][i]=='*' and li[2][i+1]=='*' and li[2][i+2]=='*':
print('I',end="")
if li[0][i]=='*' and li[0][i+1]=='*' and li[0][i+2]=='*':
if li[1][i]=='*' and li[1][i+1]=='.' and li[1][i+2]=='*':
if li[2][i]=='*' and li[2][i+1]=='*' and li[2][i+2]=='*':
print('O',end="")
if li[0][i]=='*' and li[0][i+1]=='.' and li[0][i+2]=='*':
if li[1][i]=='*' and li[1][i+1]=='.' and li[1][i+2]=='*':
if li[2][i]=='*' and li[2][i+1]=='*' and li[2][i+2]=='*':
print('U',end="")
