#include <QString>
#include <QtTest>
#include "square.h"
#include "convert.h"
#include "check.h"
#include "removal.h"

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void test_removal();
    void test_check();
    void test_convert();
    void test_square();
};

TestTest::TestTest()
{
}

void TestTest::test_removal()
{
    int number = 2597,result;
    result = removal(number);
    QCOMPARE(result,2);
}

void TestTest::test_check()
{
    int a = 3,b = 3,c = 3,result;
    result = check(a,b,c);
    QCOMPARE(result,3);
}

void TestTest::test_convert()
{
    struct measure_units arg;
    arg.ft = 9139;
    convert(&arg);
    QCOMPARE(arg.m,1);
    QCOMPARE(arg.yd,1046);
    QCOMPARE(arg.ft,1);
}

void TestTest::test_square()
{
    int i,result,n = 2;
    int** two_dim;
    two_dim = (int **) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++){
        two_dim[i] = (int *) malloc(sizeof(int) * n);
    }
    two_dim[0][0] = 1;
    two_dim[0][1] = 2;
    two_dim[1][0] = 2;
    two_dim[1][1] = 1;
    result = square(two_dim,n);
    QCOMPARE(result,1);
}


QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
