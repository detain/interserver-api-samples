@isTest
private class OASAccountInfoLimitsTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoLimits accountInfoLimits1 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits2 = accountInfoLimits1;
        OASAccountInfoLimits accountInfoLimits3 = new OASAccountInfoLimits();
        OASAccountInfoLimits accountInfoLimits4 = accountInfoLimits3;

        System.assert(accountInfoLimits1.equals(accountInfoLimits2));
        System.assert(accountInfoLimits2.equals(accountInfoLimits1));
        System.assert(accountInfoLimits1.equals(accountInfoLimits1));
        System.assert(accountInfoLimits3.equals(accountInfoLimits4));
        System.assert(accountInfoLimits4.equals(accountInfoLimits3));
        System.assert(accountInfoLimits3.equals(accountInfoLimits3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoLimits accountInfoLimits1 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits2 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits3 = new OASAccountInfoLimits();
        OASAccountInfoLimits accountInfoLimits4 = new OASAccountInfoLimits();

        System.assert(accountInfoLimits1.equals(accountInfoLimits2));
        System.assert(accountInfoLimits2.equals(accountInfoLimits1));
        System.assert(accountInfoLimits3.equals(accountInfoLimits4));
        System.assert(accountInfoLimits4.equals(accountInfoLimits3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoLimits accountInfoLimits1 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits2 = new OASAccountInfoLimits();

        System.assertEquals(false, accountInfoLimits1.equals('foo'));
        System.assertEquals(false, accountInfoLimits2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoLimits accountInfoLimits1 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits2 = new OASAccountInfoLimits();
        OASAccountInfoLimits accountInfoLimits3;

        System.assertEquals(false, accountInfoLimits1.equals(accountInfoLimits3));
        System.assertEquals(false, accountInfoLimits2.equals(accountInfoLimits3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoLimits accountInfoLimits1 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits2 = new OASAccountInfoLimits();

        System.assertEquals(accountInfoLimits1.hashCode(), accountInfoLimits1.hashCode());
        System.assertEquals(accountInfoLimits2.hashCode(), accountInfoLimits2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoLimits accountInfoLimits1 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits2 = OASAccountInfoLimits.getExample();
        OASAccountInfoLimits accountInfoLimits3 = new OASAccountInfoLimits();
        OASAccountInfoLimits accountInfoLimits4 = new OASAccountInfoLimits();

        System.assert(accountInfoLimits1.equals(accountInfoLimits2));
        System.assert(accountInfoLimits3.equals(accountInfoLimits4));
        System.assertEquals(accountInfoLimits1.hashCode(), accountInfoLimits2.hashCode());
        System.assertEquals(accountInfoLimits3.hashCode(), accountInfoLimits4.hashCode());
    }
}
