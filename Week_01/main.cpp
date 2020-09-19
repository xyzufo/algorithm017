#include <iostream>
#include <exception>
int main()
{
	int nVar1, nVar2;
	std::cin >> nVar1 >> nVar2;

	try
	{
		std::cout << "抛出异常之前" << std::endl;
		if (nVar2 == 0)
		{
			throw new std::exception("除0错误"); //抛出，然后跳过try块剩余内容
			std::cout << "抛出异常之后" << std::endl;
		}


		std::cout << "result: " << nVar1 / nVar2 << std::endl;
	}
	catch (std::exception * ePtr)
	{
		std::cout << ePtr->what();
		delete(ePtr);
	}

	return 0;
}