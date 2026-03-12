@isTest
private class OASAccountInfoOauthConfigProvidersVaTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue1 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue2 = accountInfoOauthConfigProvidersValue1;
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue3 = new OASAccountInfoOauthConfigProvidersVa();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue4 = accountInfoOauthConfigProvidersValue3;

        System.assert(accountInfoOauthConfigProvidersValue1.equals(accountInfoOauthConfigProvidersValue2));
        System.assert(accountInfoOauthConfigProvidersValue2.equals(accountInfoOauthConfigProvidersValue1));
        System.assert(accountInfoOauthConfigProvidersValue1.equals(accountInfoOauthConfigProvidersValue1));
        System.assert(accountInfoOauthConfigProvidersValue3.equals(accountInfoOauthConfigProvidersValue4));
        System.assert(accountInfoOauthConfigProvidersValue4.equals(accountInfoOauthConfigProvidersValue3));
        System.assert(accountInfoOauthConfigProvidersValue3.equals(accountInfoOauthConfigProvidersValue3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue1 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue2 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue3 = new OASAccountInfoOauthConfigProvidersVa();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue4 = new OASAccountInfoOauthConfigProvidersVa();

        System.assert(accountInfoOauthConfigProvidersValue1.equals(accountInfoOauthConfigProvidersValue2));
        System.assert(accountInfoOauthConfigProvidersValue2.equals(accountInfoOauthConfigProvidersValue1));
        System.assert(accountInfoOauthConfigProvidersValue3.equals(accountInfoOauthConfigProvidersValue4));
        System.assert(accountInfoOauthConfigProvidersValue4.equals(accountInfoOauthConfigProvidersValue3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue1 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue2 = new OASAccountInfoOauthConfigProvidersVa();

        System.assertEquals(false, accountInfoOauthConfigProvidersValue1.equals('foo'));
        System.assertEquals(false, accountInfoOauthConfigProvidersValue2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue1 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue2 = new OASAccountInfoOauthConfigProvidersVa();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue3;

        System.assertEquals(false, accountInfoOauthConfigProvidersValue1.equals(accountInfoOauthConfigProvidersValue3));
        System.assertEquals(false, accountInfoOauthConfigProvidersValue2.equals(accountInfoOauthConfigProvidersValue3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue1 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue2 = new OASAccountInfoOauthConfigProvidersVa();

        System.assertEquals(accountInfoOauthConfigProvidersValue1.hashCode(), accountInfoOauthConfigProvidersValue1.hashCode());
        System.assertEquals(accountInfoOauthConfigProvidersValue2.hashCode(), accountInfoOauthConfigProvidersValue2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue1 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue2 = OASAccountInfoOauthConfigProvidersVa.getExample();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue3 = new OASAccountInfoOauthConfigProvidersVa();
        OASAccountInfoOauthConfigProvidersVa accountInfoOauthConfigProvidersValue4 = new OASAccountInfoOauthConfigProvidersVa();

        System.assert(accountInfoOauthConfigProvidersValue1.equals(accountInfoOauthConfigProvidersValue2));
        System.assert(accountInfoOauthConfigProvidersValue3.equals(accountInfoOauthConfigProvidersValue4));
        System.assertEquals(accountInfoOauthConfigProvidersValue1.hashCode(), accountInfoOauthConfigProvidersValue2.hashCode());
        System.assertEquals(accountInfoOauthConfigProvidersValue3.hashCode(), accountInfoOauthConfigProvidersValue4.hashCode());
    }
}
