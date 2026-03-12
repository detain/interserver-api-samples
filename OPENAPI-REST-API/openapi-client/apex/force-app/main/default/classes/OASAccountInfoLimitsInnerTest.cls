@isTest
private class OASAccountInfoLimitsInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoLimitsInner accountInfoLimitsInner1 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner2 = accountInfoLimitsInner1;
        OASAccountInfoLimitsInner accountInfoLimitsInner3 = new OASAccountInfoLimitsInner();
        OASAccountInfoLimitsInner accountInfoLimitsInner4 = accountInfoLimitsInner3;

        System.assert(accountInfoLimitsInner1.equals(accountInfoLimitsInner2));
        System.assert(accountInfoLimitsInner2.equals(accountInfoLimitsInner1));
        System.assert(accountInfoLimitsInner1.equals(accountInfoLimitsInner1));
        System.assert(accountInfoLimitsInner3.equals(accountInfoLimitsInner4));
        System.assert(accountInfoLimitsInner4.equals(accountInfoLimitsInner3));
        System.assert(accountInfoLimitsInner3.equals(accountInfoLimitsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoLimitsInner accountInfoLimitsInner1 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner2 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner3 = new OASAccountInfoLimitsInner();
        OASAccountInfoLimitsInner accountInfoLimitsInner4 = new OASAccountInfoLimitsInner();

        System.assert(accountInfoLimitsInner1.equals(accountInfoLimitsInner2));
        System.assert(accountInfoLimitsInner2.equals(accountInfoLimitsInner1));
        System.assert(accountInfoLimitsInner3.equals(accountInfoLimitsInner4));
        System.assert(accountInfoLimitsInner4.equals(accountInfoLimitsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoLimitsInner accountInfoLimitsInner1 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner2 = new OASAccountInfoLimitsInner();

        System.assertEquals(false, accountInfoLimitsInner1.equals('foo'));
        System.assertEquals(false, accountInfoLimitsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoLimitsInner accountInfoLimitsInner1 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner2 = new OASAccountInfoLimitsInner();
        OASAccountInfoLimitsInner accountInfoLimitsInner3;

        System.assertEquals(false, accountInfoLimitsInner1.equals(accountInfoLimitsInner3));
        System.assertEquals(false, accountInfoLimitsInner2.equals(accountInfoLimitsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoLimitsInner accountInfoLimitsInner1 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner2 = new OASAccountInfoLimitsInner();

        System.assertEquals(accountInfoLimitsInner1.hashCode(), accountInfoLimitsInner1.hashCode());
        System.assertEquals(accountInfoLimitsInner2.hashCode(), accountInfoLimitsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoLimitsInner accountInfoLimitsInner1 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner2 = OASAccountInfoLimitsInner.getExample();
        OASAccountInfoLimitsInner accountInfoLimitsInner3 = new OASAccountInfoLimitsInner();
        OASAccountInfoLimitsInner accountInfoLimitsInner4 = new OASAccountInfoLimitsInner();

        System.assert(accountInfoLimitsInner1.equals(accountInfoLimitsInner2));
        System.assert(accountInfoLimitsInner3.equals(accountInfoLimitsInner4));
        System.assertEquals(accountInfoLimitsInner1.hashCode(), accountInfoLimitsInner2.hashCode());
        System.assertEquals(accountInfoLimitsInner3.hashCode(), accountInfoLimitsInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAccountInfoLimitsInner accountInfoLimitsInner = new OASAccountInfoLimitsInner();
        Map<String, String> x-property-mappings = accountInfoLimitsInner.getx-property-mappings();
        System.assertEquals('r_end', x-property-mappings.get('end'));
    }
}
