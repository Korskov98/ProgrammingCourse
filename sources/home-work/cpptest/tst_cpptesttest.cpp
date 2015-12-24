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
    void test_vectors_scalar_product();
    void test_vectors_multiply();
    void test_vectors_module();
    void test_vectors_just_exception();
    void test_convert_class();
    void test_check_class();
    void test_removal_class();
    void test_removing_words_class();
    void test_square_class();
    void test_square_class_exception();
};

CpptestTest::CpptestTest()
{
}

void CpptestTest::test_vectors_addition()
{
    my_vector vec1(3,4),vec2(5,6);
    vec1 += vec2;
    QCOMPARE(vec1.get_x(),8);
    QCOMPARE(vec1.get_y(),10);
}

void CpptestTest::test_vectors_subtraction()
{
    my_vector vec1(5,6),vec2(3,4);
    vec1 -= vec2;
    QCOMPARE(vec1.get_x(),2);
    QCOMPARE(vec1.get_y(),2);
}

void CpptestTest::test_vectors_scalar_product()
{
    my_vector vec1(3,4),vec2(5,6);
    int result;
    result = vec1.scalar_product(vec2);
    QCOMPARE(result,39);
}

void CpptestTest::test_vectors_multiply()
{
    int number = 10;
    my_vector vec1(3,4);
    vec1 *= number;
    QCOMPARE(vec1.get_x(),30);
    QCOMPARE(vec1.get_y(),40);
}

void CpptestTest::test_vectors_module()
{
    double result;
    my_vector vec1(3,4);
    result = vec1.module();
    QCOMPARE((int)result,5);
}

void CpptestTest::test_vectors_just_exception(){
    my_vector vec1(3,4);
    QVERIFY_EXCEPTION_THROWN(vec1.just_exception(),TestException);
}

void CpptestTest::test_convert_class(){
    imperial_system test(9139);
    test.ft_in_m();
    test.yd_in_ft();
    QCOMPARE(test.get_ft(),1);
    QCOMPARE(test.get_m(),1);
    QCOMPARE(test.get_yd(),1046);
}

void CpptestTest::test_check_class(){
    triangles test(3,3,3);
    int result;
    result = test.check_triangles();
    QCOMPARE(result,3);
}

void CpptestTest::test_removal_class(){
    int number = 2793,result;
    result = removal::removal_odd(number);
    QCOMPARE(result,2);
}

void CpptestTest::test_removing_words_class(){
    string str = "ui ui test test",result;
    result = removing_words::removing_repeating_words(str);
    QVERIFY(result == "ui test");
}

void CpptestTest::test_square_class(){
    latin_square test(2);
    bool result;
    test.set_member_two_dim(0, 0, 1);
    test.set_member_two_dim(0, 1, 2);
    test.set_member_two_dim(1, 0, 2);
    test.set_member_two_dim(1, 1, 1);
    result = test.check_latin_square();
    QCOMPARE(result,true);
}

void CpptestTest::test_square_class_exception(){
    latin_square test(2);
    QVERIFY_EXCEPTION_THROWN(test.set_member_two_dim(2,2,2), WrongAdressException);
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
