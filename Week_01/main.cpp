#include <iostream>
#include <exception>
int main()
{
	int nVar1, nVar2;
	std::cin >> nVar1 >> nVar2;

	try
	{
		std::cout << "�׳��쳣֮ǰ" << std::endl;
		if (nVar2 == 0)
		{
			throw new std::exception("��0����"); //�׳���Ȼ������try��ʣ������
			std::cout << "�׳��쳣֮��" << std::endl;
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