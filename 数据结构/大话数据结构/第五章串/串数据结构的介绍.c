


/*
StrAssign(T, *chars)                生成一个其值等于字符串常量chars的串T
StrCopy(T, S)                       串S存在,由串S复制得到串T
ClearString(S)                      串S存在,将串清空
StringEmpty(S)                      若串S为空,返回true，否则返回false
StrLength(S)                        返回串S的元素个数，即串的长度
StrCompare(S, T)                    若S>T,返回值>0,若S=T,返回0,若S<T,返回值<0
Concat(T, S1, S2)                   用T返回由S1和S2联接而成的新串
SubString(Sub, S, pos, len)         串S存在，1<=pos<=StrLength(S),且0<=len<=StrLength(S)-pos+1,用Sub返回串S的第pos个字符起长度为len的子串
Index(S, T, pos)                    串S和T存在，T是非空串，1<=pos<=StrLength(S)，若主串S中存在和串T值相同的子串，则返回它在主串S中第pos个字符之后第一次出现的位置，否则返回0
Replace(S, T, V)                    串S，T和V存在，T是非空串，用V替换主串S中出现的所有与T相等的不重叠的子串
StrInsert(S, pos, T)                串S和T存在，1<=pos<=StrLength(S)+1,在串S的第pos个字符之前插入串T
StrDelete(S, pos, len)              串S存在，1<=pos<=StrLength(S)-len+1,从串S中删除第pos个字符起长度为len的子串



*/