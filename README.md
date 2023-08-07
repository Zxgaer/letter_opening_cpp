# 开字母游戏
## 没什么用
没什么用的东西  
对标mail_set的[Letter_openning](https://github.com/mailset/letter-openning)和~~CyuuZ的[Packages_Unmasking](https://github.com/cyuuz-chan/packages_unmasking)~~（链接已失效）    
（我可没拼错，他自己写的openning）  
要问有什么用就问这两个人吧（  
  
  

## 下面来做道题吧（  
从前有一个非常美丽的王国，国王叫Mailset，有一天，他看见几个人正在玩一个游戏  
这是一个猜单词游戏，游戏组织者需要将每个单词的每个字母用石块隐藏起来，玩家可以选择开一个字母，盖着这个字母的石块将被移走，玩家也可以选择猜一个单词，答对即可把该单词中所有盖着的石块移走，国王Mailset很想试试这个游戏，但由于他没有那么多石块，请你帮忙做一个生成器，帮助他组织这个游戏  
  
具体要求如下：  
1.Mailset会输入n个单词，用逗号隔开（0 < n ≤ 1000）  
2.将所有`-`（连字符）之外的字符全部隐藏成`*`
3.输入一个字母o或g，后一个空格后是玩家输入的内容  
4.当字母是o时，把玩家输入内容作为要开的字母  
5.当字母是g时，把玩家输入内容作为要开的单词，并判断是否符合  
6.所有字母都被开出后,输出`Finish!`，游戏结束  

输入输出示例：
输入 #1
```
pacman,base
o p
o a
```

输出 #1
```
1.******
2.****
1.p*****
2.****
1.pa**a*
2.*a**
```

输入 #2
```
7-zip,arch-install-scripts,nano
o p
o a
g 1.7-zip
o i
g 2.arch-install-scripts
g 3.nano
```

输出 #2
```
1.*-***
2.****-*******-*******
3.****
1.*-**p
2.****-*******-****p**
3.****
1.7-zip
2.****-*******-****p**
3.****
1.7-zip
2.****-i******-***ip**
3.****
1.7-zip
2.arch-install-scripts
3.****
1.7-zip
2.arch-install-scripts
3.nano
Finish!
```

输入 #3
```
pacman,base
o p
o b
g 2.bbbb
```

输出 #3
```
1.******
2.****
1.p*****
2.****
1.p*****
2.b***
1.p*****
2.b***
```
