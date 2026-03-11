//1-5.cpp
#include<iostream>
#include<string>

int main() {
	{
		std::string s = "a string";
			std::string x = s + ", really";
			std::cout << s << std::endl;
		std::cout << x << std::endl;
	}
	return 0;
}

/*
int main() {
	{
		std::string s = "a string";
		{
			std::string x = s + ", really";
			std::cout << s << std::endl;
		}  // { } 사이에 있는 x가 { }를 만나서 끝나버림 
		   그래서 그 뒤에 있는 x랑 연결 안됨====> 작동하지 않는다

		std::cout << x << std::endl;
	}
	return 0;
}

*/