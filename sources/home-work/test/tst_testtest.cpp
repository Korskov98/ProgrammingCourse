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
    /// Назовите не транслитерацией
    void test_removal();
    void test_check();
    void test_convert();
    /// Не реализован тест для латинского квадрата?
};

TestTest::TestTest()
{
}

void TestTest::test_removal()
{
    long number = 2597;
    /// Почему не макрос QCOMPARE ?
    QVERIFY2(removal(number) == 2, "Тест не пройден.");
}

void TestTest::test_check()
{
    int a = 3,b = 3,c = 3;
    /// Почему не макрос QCOMPARE ?
    QVERIFY2(check(a,b,c) == 3, "Тест не пройден.");
}

void TestTest::test_convert()
{
    int ft = 9139,m,yd;
    convert(&ft, &yd, &m);
    QCOMPARE(m,1);
    QCOMPARE(yd,1046);
    QCOMPARE(ft,1);
}


QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
