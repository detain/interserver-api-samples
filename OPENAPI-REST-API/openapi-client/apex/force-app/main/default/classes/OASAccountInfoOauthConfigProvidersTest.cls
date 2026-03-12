@isTest
private class OASAccountInfoOauthConfigProvidersTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders1 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders2 = accountInfoOauthConfigProviders1;
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders3 = new OASAccountInfoOauthConfigProviders();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders4 = accountInfoOauthConfigProviders3;

        System.assert(accountInfoOauthConfigProviders1.equals(accountInfoOauthConfigProviders2));
        System.assert(accountInfoOauthConfigProviders2.equals(accountInfoOauthConfigProviders1));
        System.assert(accountInfoOauthConfigProviders1.equals(accountInfoOauthConfigProviders1));
        System.assert(accountInfoOauthConfigProviders3.equals(accountInfoOauthConfigProviders4));
        System.assert(accountInfoOauthConfigProviders4.equals(accountInfoOauthConfigProviders3));
        System.assert(accountInfoOauthConfigProviders3.equals(accountInfoOauthConfigProviders3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders1 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders2 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders3 = new OASAccountInfoOauthConfigProviders();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders4 = new OASAccountInfoOauthConfigProviders();

        System.assert(accountInfoOauthConfigProviders1.equals(accountInfoOauthConfigProviders2));
        System.assert(accountInfoOauthConfigProviders2.equals(accountInfoOauthConfigProviders1));
        System.assert(accountInfoOauthConfigProviders3.equals(accountInfoOauthConfigProviders4));
        System.assert(accountInfoOauthConfigProviders4.equals(accountInfoOauthConfigProviders3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders1 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders2 = new OASAccountInfoOauthConfigProviders();

        System.assertEquals(false, accountInfoOauthConfigProviders1.equals('foo'));
        System.assertEquals(false, accountInfoOauthConfigProviders2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders1 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders2 = new OASAccountInfoOauthConfigProviders();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders3;

        System.assertEquals(false, accountInfoOauthConfigProviders1.equals(accountInfoOauthConfigProviders3));
        System.assertEquals(false, accountInfoOauthConfigProviders2.equals(accountInfoOauthConfigProviders3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders1 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders2 = new OASAccountInfoOauthConfigProviders();

        System.assertEquals(accountInfoOauthConfigProviders1.hashCode(), accountInfoOauthConfigProviders1.hashCode());
        System.assertEquals(accountInfoOauthConfigProviders2.hashCode(), accountInfoOauthConfigProviders2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders1 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders2 = OASAccountInfoOauthConfigProviders.getExample();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders3 = new OASAccountInfoOauthConfigProviders();
        OASAccountInfoOauthConfigProviders accountInfoOauthConfigProviders4 = new OASAccountInfoOauthConfigProviders();

        System.assert(accountInfoOauthConfigProviders1.equals(accountInfoOauthConfigProviders2));
        System.assert(accountInfoOauthConfigProviders3.equals(accountInfoOauthConfigProviders4));
        System.assertEquals(accountInfoOauthConfigProviders1.hashCode(), accountInfoOauthConfigProviders2.hashCode());
        System.assertEquals(accountInfoOauthConfigProviders3.hashCode(), accountInfoOauthConfigProviders4.hashCode());
    }
}
