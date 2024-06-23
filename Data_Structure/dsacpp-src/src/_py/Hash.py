#!/usr/bin/env python
# -*- coding: gbk -*-
#
# Example of Python dictionary (hashtable)
#
beauty = dict({	# declare and initialize a dictionary object
   "����":"��ʩ",
   "����":"�Ѿ�",
   "����":"����",
   "�߻�":"��"
})
for (alias, name) in beauty.items() :
   print( " = (", alias,  ":", name, ")" )

beauty["����"] = "ԲԲ"
for (alias, name) in beauty.items() :
   print( " + (", alias,  ":", name, ")" )

for (alias, name) in sorted( beauty.items() ) :
   print( " v (", alias,  ":", name, ")" )

for alias in sorted( beauty.keys(), reverse = True ):
   print( " ^ (", alias,  ":", beauty[alias], ")" )
