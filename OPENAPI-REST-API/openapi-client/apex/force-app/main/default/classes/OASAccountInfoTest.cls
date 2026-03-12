@isTest
private class OASAccountInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfo accountInfo1 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo2 = accountInfo1;
        OASAccountInfo accountInfo3 = new OASAccountInfo();
        OASAccountInfo accountInfo4 = accountInfo3;

        System.assert(accountInfo1.equals(accountInfo2));
        System.assert(accountInfo2.equals(accountInfo1));
        System.assert(accountInfo1.equals(accountInfo1));
        System.assert(accountInfo3.equals(accountInfo4));
        System.assert(accountInfo4.equals(accountInfo3));
        System.assert(accountInfo3.equals(accountInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfo accountInfo1 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo2 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo3 = new OASAccountInfo();
        OASAccountInfo accountInfo4 = new OASAccountInfo();

        System.assert(accountInfo1.equals(accountInfo2));
        System.assert(accountInfo2.equals(accountInfo1));
        System.assert(accountInfo3.equals(accountInfo4));
        System.assert(accountInfo4.equals(accountInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfo accountInfo1 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo2 = new OASAccountInfo();

        System.assertEquals(false, accountInfo1.equals('foo'));
        System.assertEquals(false, accountInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfo accountInfo1 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo2 = new OASAccountInfo();
        OASAccountInfo accountInfo3;

        System.assertEquals(false, accountInfo1.equals(accountInfo3));
        System.assertEquals(false, accountInfo2.equals(accountInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfo accountInfo1 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo2 = new OASAccountInfo();

        System.assertEquals(accountInfo1.hashCode(), accountInfo1.hashCode());
        System.assertEquals(accountInfo2.hashCode(), accountInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfo accountInfo1 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo2 = OASAccountInfo.getExample();
        OASAccountInfo accountInfo3 = new OASAccountInfo();
        OASAccountInfo accountInfo4 = new OASAccountInfo();

        System.assert(accountInfo1.equals(accountInfo2));
        System.assert(accountInfo3.equals(accountInfo4));
        System.assertEquals(accountInfo1.hashCode(), accountInfo2.hashCode());
        System.assertEquals(accountInfo3.hashCode(), accountInfo4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASAccountInfo accountInfo = new OASAccountInfo();
        System.assertEquals(new List<String>(), accountInfo.oauthadapters);
        System.assertEquals(null, accountInfo.custid);
        System.assertEquals(null, accountInfo.ima);
        System.assertEquals(null, accountInfo.data);
        System.assertEquals(null, accountInfo.ip);
        System.assertEquals(null, accountInfo.oauthproviders);
        System.assertEquals(null, accountInfo.oauthconfig);
        System.assertEquals(null, accountInfo.limits);
        System.assertEquals(null, accountInfo.language);
        System.assertEquals(null, accountInfo.countryCurrencies);
        System.assertEquals(null, accountInfo.enableLocales);
        System.assertEquals(null, accountInfo.enableCurrencies);
        System.assertEquals(null, accountInfo.gravatar);
    }
}
