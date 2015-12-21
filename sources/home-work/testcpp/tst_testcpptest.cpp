#include <QString>
#include <QtTest>

class TestcppTest : public QObject
{
    Q_OBJECT

public:
    TestcppTest();

private Q_SLOTS:
    void testCase1();
};

TestcppTest::TestcppTest()
{
}

void TestcppTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestcppTest)

#include "tst_testcpptest.moc"
