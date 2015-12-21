#include <QString>
#include <QtTest>
#include "vectors.h"

class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:
    void test_vectors_addition();
    void test_vectors_subtraction();
    void test_vectors_copy();
    void test_vectors_scalar_product();
    void test_vectors_multiply();
    void test_vectors_module();
};

CpptestTest::CpptestTest()
{
}

void CpptestTest::test_vectors_addition()
{
    vector vec1,vec2;
    vec1.set_x(3);
    vec1.set_y(4);
    vec2.set_x(5);
    vec2.set_y(6);
    vec1.addition(vec2);
    QCOMPARE(vec1.get_x(),8);
    QCOMPARE(vec1.get_y(),10);
}

void CpptestTest::test_vectors_subtraction()
{
    vector vec1,vec2;
    vec1.set_x(5);
    vec1.set_y(6);
    vec2.set_x(3);
    vec2.set_y(4);
    vec1.subtraction(vec2);
    QCOMPARE(vec1.get_x(),2);
    QCOMPARE(vec1.get_y(),2);
}

void CpptestTest::test_vectors_copy()
{
    vector vec1,vec2;
    vec1.set_x(3);
    vec1.set_y(4);
    vec2.set_x(5);
    vec2.set_y(6);
    vec1.copy(vec2);
    QCOMPARE(vec1.get_x(),5);
    QCOMPARE(vec1.get_y(),6);
}

void CpptestTest::test_vectors_scalar_product()
{
    vector vec1,vec2;
    int result;
    vec1.set_x(3);
    vec1.set_y(4);
    vec2.set_x(5);
    vec2.set_y(6);
    result = vec1.scalar_product(vec2);
    QCOMPARE(result,39);
}

void CpptestTest::test_vectors_multiply()
{
    int number = 10;
    vector vec1;
    vec1.set_x(3);
    vec1.set_y(4);
    vec1.multiply(number);
    QCOMPARE(vec1.get_x(),30);
    QCOMPARE(vec1.get_y(),40);
}

void CpptestTest::test_vectors_module()
{
    double result;
    vector vec1;
    vec1.set_x(3);
    vec1.set_y(4);
    result = vec1.module();
    QCOMPARE((int)result,5);
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
