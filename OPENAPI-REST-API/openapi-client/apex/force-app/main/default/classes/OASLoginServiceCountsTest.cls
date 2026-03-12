@isTest
private class OASLoginServiceCountsTest {
    @isTest
    private static void equalsSameInstance() {
        OASLoginServiceCounts loginServiceCounts1 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts2 = loginServiceCounts1;
        OASLoginServiceCounts loginServiceCounts3 = new OASLoginServiceCounts();
        OASLoginServiceCounts loginServiceCounts4 = loginServiceCounts3;

        System.assert(loginServiceCounts1.equals(loginServiceCounts2));
        System.assert(loginServiceCounts2.equals(loginServiceCounts1));
        System.assert(loginServiceCounts1.equals(loginServiceCounts1));
        System.assert(loginServiceCounts3.equals(loginServiceCounts4));
        System.assert(loginServiceCounts4.equals(loginServiceCounts3));
        System.assert(loginServiceCounts3.equals(loginServiceCounts3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLoginServiceCounts loginServiceCounts1 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts2 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts3 = new OASLoginServiceCounts();
        OASLoginServiceCounts loginServiceCounts4 = new OASLoginServiceCounts();

        System.assert(loginServiceCounts1.equals(loginServiceCounts2));
        System.assert(loginServiceCounts2.equals(loginServiceCounts1));
        System.assert(loginServiceCounts3.equals(loginServiceCounts4));
        System.assert(loginServiceCounts4.equals(loginServiceCounts3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLoginServiceCounts loginServiceCounts1 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts2 = new OASLoginServiceCounts();

        System.assertEquals(false, loginServiceCounts1.equals('foo'));
        System.assertEquals(false, loginServiceCounts2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLoginServiceCounts loginServiceCounts1 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts2 = new OASLoginServiceCounts();
        OASLoginServiceCounts loginServiceCounts3;

        System.assertEquals(false, loginServiceCounts1.equals(loginServiceCounts3));
        System.assertEquals(false, loginServiceCounts2.equals(loginServiceCounts3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLoginServiceCounts loginServiceCounts1 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts2 = new OASLoginServiceCounts();

        System.assertEquals(loginServiceCounts1.hashCode(), loginServiceCounts1.hashCode());
        System.assertEquals(loginServiceCounts2.hashCode(), loginServiceCounts2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLoginServiceCounts loginServiceCounts1 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts2 = OASLoginServiceCounts.getExample();
        OASLoginServiceCounts loginServiceCounts3 = new OASLoginServiceCounts();
        OASLoginServiceCounts loginServiceCounts4 = new OASLoginServiceCounts();

        System.assert(loginServiceCounts1.equals(loginServiceCounts2));
        System.assert(loginServiceCounts3.equals(loginServiceCounts4));
        System.assertEquals(loginServiceCounts1.hashCode(), loginServiceCounts2.hashCode());
        System.assertEquals(loginServiceCounts3.hashCode(), loginServiceCounts4.hashCode());
    }
}
