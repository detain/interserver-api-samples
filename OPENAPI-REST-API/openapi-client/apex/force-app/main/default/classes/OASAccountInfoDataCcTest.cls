@isTest
private class OASAccountInfoDataCcTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoDataCc accountInfoDataCc1 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc2 = accountInfoDataCc1;
        OASAccountInfoDataCc accountInfoDataCc3 = new OASAccountInfoDataCc();
        OASAccountInfoDataCc accountInfoDataCc4 = accountInfoDataCc3;

        System.assert(accountInfoDataCc1.equals(accountInfoDataCc2));
        System.assert(accountInfoDataCc2.equals(accountInfoDataCc1));
        System.assert(accountInfoDataCc1.equals(accountInfoDataCc1));
        System.assert(accountInfoDataCc3.equals(accountInfoDataCc4));
        System.assert(accountInfoDataCc4.equals(accountInfoDataCc3));
        System.assert(accountInfoDataCc3.equals(accountInfoDataCc3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoDataCc accountInfoDataCc1 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc2 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc3 = new OASAccountInfoDataCc();
        OASAccountInfoDataCc accountInfoDataCc4 = new OASAccountInfoDataCc();

        System.assert(accountInfoDataCc1.equals(accountInfoDataCc2));
        System.assert(accountInfoDataCc2.equals(accountInfoDataCc1));
        System.assert(accountInfoDataCc3.equals(accountInfoDataCc4));
        System.assert(accountInfoDataCc4.equals(accountInfoDataCc3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoDataCc accountInfoDataCc1 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc2 = new OASAccountInfoDataCc();

        System.assertEquals(false, accountInfoDataCc1.equals('foo'));
        System.assertEquals(false, accountInfoDataCc2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoDataCc accountInfoDataCc1 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc2 = new OASAccountInfoDataCc();
        OASAccountInfoDataCc accountInfoDataCc3;

        System.assertEquals(false, accountInfoDataCc1.equals(accountInfoDataCc3));
        System.assertEquals(false, accountInfoDataCc2.equals(accountInfoDataCc3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoDataCc accountInfoDataCc1 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc2 = new OASAccountInfoDataCc();

        System.assertEquals(accountInfoDataCc1.hashCode(), accountInfoDataCc1.hashCode());
        System.assertEquals(accountInfoDataCc2.hashCode(), accountInfoDataCc2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoDataCc accountInfoDataCc1 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc2 = OASAccountInfoDataCc.getExample();
        OASAccountInfoDataCc accountInfoDataCc3 = new OASAccountInfoDataCc();
        OASAccountInfoDataCc accountInfoDataCc4 = new OASAccountInfoDataCc();

        System.assert(accountInfoDataCc1.equals(accountInfoDataCc2));
        System.assert(accountInfoDataCc3.equals(accountInfoDataCc4));
        System.assertEquals(accountInfoDataCc1.hashCode(), accountInfoDataCc2.hashCode());
        System.assertEquals(accountInfoDataCc3.hashCode(), accountInfoDataCc4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAccountInfoDataCc accountInfoDataCc = new OASAccountInfoDataCc();
        Map<String, String> x-property-mappings = accountInfoDataCc.getx-property-mappings();
        System.assertEquals('ccExp', x-property-mappings.get('cc_exp'));
        System.assertEquals('maxmindRiskscore', x-property-mappings.get('maxmind_riskscore'));
    }
}
