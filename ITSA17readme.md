## 題目17. 英文斷詞
成績: 0 / 倒扣: 0.8
## 問題描述 ：

斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。

## 輸入說明 ：

輸入一句英文敘述句。 字元數≤1000。

## 輸出說明 ：

將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。

## 說明

給予兩個英文字串，計算出第一個字串出現在第二個字串中的次數。

1
## 程式
```
#include<iostream>
#include<string>
using namespace std;
int appearNum(string& s,int p,string& l);
int main()
{
	string inputS,inputL,save;
	
	cin>>inputS>>inputL;
	cout<<appearNum(inputS,0,inputL)<<endl;
	return 0;
}
int appearNum(string& s,int p,string& l)
{
	int a=0;
	if(p>l.length())return a=0; 
	for(int i=0;i<s.length();i++)/
	{
		if(l[i+p]==s[i])continue; 
		else return a+=appearNum(s,p+1,l); 
	}
	a++;return a+=appearNum(s,p+1,l); 
}
```

## 截圖
![image](https://user-images.githubusercontent.com/125543109/233125657-6bd3f3f0-c298-40dc-b521-fa27f7734664.png)
