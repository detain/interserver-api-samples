@isTest
private class OASAccountInfoDataCcsTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoDataCcs accountInfoDataCcs1 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs2 = accountInfoDataCcs1;
        OASAccountInfoDataCcs accountInfoDataCcs3 = new OASAccountInfoDataCcs();
        OASAccountInfoDataCcs accountInfoDataCcs4 = accountInfoDataCcs3;

        System.assert(accountInfoDataCcs1.equals(accountInfoDataCcs2));
        System.assert(accountInfoDataCcs2.equals(accountInfoDataCcs1));
        System.assert(accountInfoDataCcs1.equals(accountInfoDataCcs1));
        System.assert(accountInfoDataCcs3.equals(accountInfoDataCcs4));
        System.assert(accountInfoDataCcs4.equals(accountInfoDataCcs3));
        System.assert(accountInfoDataCcs3.equals(accountInfoDataCcs3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoDataCcs accountInfoDataCcs1 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs2 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs3 = new OASAccountInfoDataCcs();
        OASAccountInfoDataCcs accountInfoDataCcs4 = new OASAccountInfoDataCcs();

        System.assert(accountInfoDataCcs1.equals(accountInfoDataCcs2));
        System.assert(accountInfoDataCcs2.equals(accountInfoDataCcs1));
        System.assert(accountInfoDataCcs3.equals(accountInfoDataCcs4));
        System.assert(accountInfoDataCcs4.equals(accountInfoDataCcs3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoDataCcs accountInfoDataCcs1 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs2 = new OASAccountInfoDataCcs();

        System.assertEquals(false, accountInfoDataCcs1.equals('foo'));
        System.assertEquals(false, accountInfoDataCcs2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoDataCcs accountInfoDataCcs1 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs2 = new OASAccountInfoDataCcs();
        OASAccountInfoDataCcs accountInfoDataCcs3;

        System.assertEquals(false, accountInfoDataCcs1.equals(accountInfoDataCcs3));
        System.assertEquals(false, accountInfoDataCcs2.equals(accountInfoDataCcs3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoDataCcs accountInfoDataCcs1 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs2 = new OASAccountInfoDataCcs();

        System.assertEquals(accountInfoDataCcs1.hashCode(), accountInfoDataCcs1.hashCode());
        System.assertEquals(accountInfoDataCcs2.hashCode(), accountInfoDataCcs2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoDataCcs accountInfoDataCcs1 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs2 = OASAccountInfoDataCcs.getExample();
        OASAccountInfoDataCcs accountInfoDataCcs3 = new OASAccountInfoDataCcs();
        OASAccountInfoDataCcs accountInfoDataCcs4 = new OASAccountInfoDataCcs();

        System.assert(accountInfoDataCcs1.equals(accountInfoDataCcs2));
        System.assert(accountInfoDataCcs3.equals(accountInfoDataCcs4));
        System.assertEquals(accountInfoDataCcs1.hashCode(), accountInfoDataCcs2.hashCode());
        System.assertEquals(accountInfoDataCcs3.hashCode(), accountInfoDataCcs4.hashCode());
    }
}
