#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
int MAXsum(int n, int a[])
{
	int sum = 0;
	int thissum = 0;
	for (int i = 1;i <= n;i++)
	{
		if (thissum>0)
			thissum += a[i];
		else
			thissum = a[i];
		if (thissum>sum)
			sum = thissum;
	}
	return sum;
}
namespace maxTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			int a[5] = { -1,-2,-3,-4,-5 };
			int max = MAXsum(5, a);
			Assert::AreEqual(0, max);
		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			int a[5] = { 1,2,-4,4,5 };
			int max = MAXsum(5, a);
			Assert::AreEqual(9, max);
		}TEST_METHOD(TestMethod3)
		{
			// TODO: 在此输入测试代码
			int a[5] = { -1,3,4,-8,9 };
			int max = MAXsum(5, a);
			Assert::AreEqual(9, max);
		}
	};
}