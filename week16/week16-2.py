from collections import Counter
words=["bella","label","roller"]
counter=collections.Counter(words[0])
for i in range(3):
  counter=collections.Counter(words[i])
  print(words[i],counter)
ans=Counter(words[0])&Counter(words[1])&Counter(words[2])
print(ans)