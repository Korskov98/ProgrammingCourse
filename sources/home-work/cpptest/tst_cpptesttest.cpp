#include <QString>
#include <QtTest>
#include "vectors.h"
#include "convert_class.h"
#include "check_class.h"
#include "removal_class.h"
#include "removing_words_class.h"
#include "square_class.h"

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
    void test_convert_class();
    void test_check_class();
    void test_removal_class();
    void test_removing_words_class();
    void test_square_class();
};

CpptestTest::CpptestTest()
{
}

void CpptestTest::test_vectors_addition()
{
    vectors vec1(3,4),vec2(5,6);
    vec1.addition(vec2);
    QCOMPARE(vec1.get_x(),8);
    QCOMPARE(vec1.get_y(),10);
}

void CpptestTest::test_vectors_subtraction()
{
    vectors vec1(5,6),vec2(3,4);
    vec1.subtraction(vec2);
    QCOMPARE(vec1.get_x(),2);
    QCOMPARE(vec1.get_y(),2);
}

void CpptestTest::test_vectors_copy()
{
    vectors vec1(3,4),vec2(5,6);
    vec1.copy(vec2);
    QCOMPARE(vec1.get_x(),5);
    QCOMPARE(vec1.get_y(),6);
}

void CpptestTest::test_vectors_scalar_product()
{
    vectors vec1(3,4),vec2(5,6);
    int result;
    result = vec1.scalar_product(vec2);
    QCOMPARE(result,39);
}

void CpptestTest::test_vectors_multiply()
{
    int number = 10;
    vectors vec1(3,4);
    vec1.multiply(number);
    QCOMPARE(vec1.get_x(),30);
    QCOMPARE(vec1.get_y(),40);
}

void CpptestTest::test_vectors_module()
{
    double result;
    vectors vec1(3,4);
    result = vec1.module();
    QCOMPARE((int)result,5);
}

void CpptestTest::test_convert_class(){
    convert_class test(9139);
    test.ft_in_m();
    test.yd_in_ft();
    QCOMPARE(test.get_ft(),1);
    QCOMPARE(test.get_m(),1);
    QCOMPARE(test.get_yd(),1046);
}

void CpptestTest::test_check_class(){
    check_class test(3,3,3);
    int result;
    result = test.check_triangles();
    QCOMPARE(result,3);
}

void CpptestTest::test_removal_class(){
    removal_class test(2793);
    int result;
    result = test.removal();
    QCOMPARE(result,2);
}

void CpptestTest::test_removing_words_class(){
    removing_words_class test("ui ui test test");
    string result;
    result = test.removing_words();
    QVERIFY(result == "ui test");
}

void CpptestTest::test_square_class(){
    square_class test(2);
    int result;
    test.set_member_two_dim(0, 0, 1);
    test.set_member_two_dim(0, 1, 2);
    test.set_member_two_dim(1, 0, 2);
    test.set_member_two_dim(1, 1, 1);
    result = test.check_latin_square();
    QCOMPARE(result, 1);
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
