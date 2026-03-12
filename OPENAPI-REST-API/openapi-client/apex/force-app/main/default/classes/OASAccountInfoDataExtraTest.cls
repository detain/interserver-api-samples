@isTest
private class OASAccountInfoDataExtraTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoDataExtra accountInfoDataExtra1 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra2 = accountInfoDataExtra1;
        OASAccountInfoDataExtra accountInfoDataExtra3 = new OASAccountInfoDataExtra();
        OASAccountInfoDataExtra accountInfoDataExtra4 = accountInfoDataExtra3;

        System.assert(accountInfoDataExtra1.equals(accountInfoDataExtra2));
        System.assert(accountInfoDataExtra2.equals(accountInfoDataExtra1));
        System.assert(accountInfoDataExtra1.equals(accountInfoDataExtra1));
        System.assert(accountInfoDataExtra3.equals(accountInfoDataExtra4));
        System.assert(accountInfoDataExtra4.equals(accountInfoDataExtra3));
        System.assert(accountInfoDataExtra3.equals(accountInfoDataExtra3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoDataExtra accountInfoDataExtra1 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra2 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra3 = new OASAccountInfoDataExtra();
        OASAccountInfoDataExtra accountInfoDataExtra4 = new OASAccountInfoDataExtra();

        System.assert(accountInfoDataExtra1.equals(accountInfoDataExtra2));
        System.assert(accountInfoDataExtra2.equals(accountInfoDataExtra1));
        System.assert(accountInfoDataExtra3.equals(accountInfoDataExtra4));
        System.assert(accountInfoDataExtra4.equals(accountInfoDataExtra3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoDataExtra accountInfoDataExtra1 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra2 = new OASAccountInfoDataExtra();

        System.assertEquals(false, accountInfoDataExtra1.equals('foo'));
        System.assertEquals(false, accountInfoDataExtra2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoDataExtra accountInfoDataExtra1 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra2 = new OASAccountInfoDataExtra();
        OASAccountInfoDataExtra accountInfoDataExtra3;

        System.assertEquals(false, accountInfoDataExtra1.equals(accountInfoDataExtra3));
        System.assertEquals(false, accountInfoDataExtra2.equals(accountInfoDataExtra3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoDataExtra accountInfoDataExtra1 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra2 = new OASAccountInfoDataExtra();

        System.assertEquals(accountInfoDataExtra1.hashCode(), accountInfoDataExtra1.hashCode());
        System.assertEquals(accountInfoDataExtra2.hashCode(), accountInfoDataExtra2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoDataExtra accountInfoDataExtra1 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra2 = OASAccountInfoDataExtra.getExample();
        OASAccountInfoDataExtra accountInfoDataExtra3 = new OASAccountInfoDataExtra();
        OASAccountInfoDataExtra accountInfoDataExtra4 = new OASAccountInfoDataExtra();

        System.assert(accountInfoDataExtra1.equals(accountInfoDataExtra2));
        System.assert(accountInfoDataExtra3.equals(accountInfoDataExtra4));
        System.assertEquals(accountInfoDataExtra1.hashCode(), accountInfoDataExtra2.hashCode());
        System.assertEquals(accountInfoDataExtra3.hashCode(), accountInfoDataExtra4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAccountInfoDataExtra accountInfoDataExtra = new OASAccountInfoDataExtra();
        Map<String, String> x-property-mappings = accountInfoDataExtra.getx-property-mappings();
        System.assertEquals('privateWhois', x-property-mappings.get('private_whois'));
    }
}
