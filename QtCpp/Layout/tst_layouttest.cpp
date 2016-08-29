#include <QString>
#include <QtTest>

class LayoutTest : public QObject
{
    Q_OBJECT

public:
    LayoutTest();

private Q_SLOTS:
    void testCase1();
};

LayoutTest::LayoutTest()
{
}

void LayoutTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(LayoutTest)

#include "tst_layouttest.moc"
