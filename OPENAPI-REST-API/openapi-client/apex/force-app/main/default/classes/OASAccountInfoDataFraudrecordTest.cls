@isTest
private class OASAccountInfoDataFraudrecordTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord1 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord2 = accountInfoDataFraudrecord1;
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord3 = new OASAccountInfoDataFraudrecord();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord4 = accountInfoDataFraudrecord3;

        System.assert(accountInfoDataFraudrecord1.equals(accountInfoDataFraudrecord2));
        System.assert(accountInfoDataFraudrecord2.equals(accountInfoDataFraudrecord1));
        System.assert(accountInfoDataFraudrecord1.equals(accountInfoDataFraudrecord1));
        System.assert(accountInfoDataFraudrecord3.equals(accountInfoDataFraudrecord4));
        System.assert(accountInfoDataFraudrecord4.equals(accountInfoDataFraudrecord3));
        System.assert(accountInfoDataFraudrecord3.equals(accountInfoDataFraudrecord3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord1 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord2 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord3 = new OASAccountInfoDataFraudrecord();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord4 = new OASAccountInfoDataFraudrecord();

        System.assert(accountInfoDataFraudrecord1.equals(accountInfoDataFraudrecord2));
        System.assert(accountInfoDataFraudrecord2.equals(accountInfoDataFraudrecord1));
        System.assert(accountInfoDataFraudrecord3.equals(accountInfoDataFraudrecord4));
        System.assert(accountInfoDataFraudrecord4.equals(accountInfoDataFraudrecord3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord1 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord2 = new OASAccountInfoDataFraudrecord();

        System.assertEquals(false, accountInfoDataFraudrecord1.equals('foo'));
        System.assertEquals(false, accountInfoDataFraudrecord2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord1 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord2 = new OASAccountInfoDataFraudrecord();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord3;

        System.assertEquals(false, accountInfoDataFraudrecord1.equals(accountInfoDataFraudrecord3));
        System.assertEquals(false, accountInfoDataFraudrecord2.equals(accountInfoDataFraudrecord3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord1 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord2 = new OASAccountInfoDataFraudrecord();

        System.assertEquals(accountInfoDataFraudrecord1.hashCode(), accountInfoDataFraudrecord1.hashCode());
        System.assertEquals(accountInfoDataFraudrecord2.hashCode(), accountInfoDataFraudrecord2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord1 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord2 = OASAccountInfoDataFraudrecord.getExample();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord3 = new OASAccountInfoDataFraudrecord();
        OASAccountInfoDataFraudrecord accountInfoDataFraudrecord4 = new OASAccountInfoDataFraudrecord();

        System.assert(accountInfoDataFraudrecord1.equals(accountInfoDataFraudrecord2));
        System.assert(accountInfoDataFraudrecord3.equals(accountInfoDataFraudrecord4));
        System.assertEquals(accountInfoDataFraudrecord1.hashCode(), accountInfoDataFraudrecord2.hashCode());
        System.assertEquals(accountInfoDataFraudrecord3.hashCode(), accountInfoDataFraudrecord4.hashCode());
    }
}
