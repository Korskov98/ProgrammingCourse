#include <QString>
#include <QtTest>

class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:
    void testCase1();
};

CpptestTest::CpptestTest()
{
}

void CpptestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
