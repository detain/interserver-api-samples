@isTest
private class OASAccountInfoOauthprovidersTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoOauthproviders accountInfoOauthproviders1 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders2 = accountInfoOauthproviders1;
        OASAccountInfoOauthproviders accountInfoOauthproviders3 = new OASAccountInfoOauthproviders();
        OASAccountInfoOauthproviders accountInfoOauthproviders4 = accountInfoOauthproviders3;

        System.assert(accountInfoOauthproviders1.equals(accountInfoOauthproviders2));
        System.assert(accountInfoOauthproviders2.equals(accountInfoOauthproviders1));
        System.assert(accountInfoOauthproviders1.equals(accountInfoOauthproviders1));
        System.assert(accountInfoOauthproviders3.equals(accountInfoOauthproviders4));
        System.assert(accountInfoOauthproviders4.equals(accountInfoOauthproviders3));
        System.assert(accountInfoOauthproviders3.equals(accountInfoOauthproviders3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoOauthproviders accountInfoOauthproviders1 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders2 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders3 = new OASAccountInfoOauthproviders();
        OASAccountInfoOauthproviders accountInfoOauthproviders4 = new OASAccountInfoOauthproviders();

        System.assert(accountInfoOauthproviders1.equals(accountInfoOauthproviders2));
        System.assert(accountInfoOauthproviders2.equals(accountInfoOauthproviders1));
        System.assert(accountInfoOauthproviders3.equals(accountInfoOauthproviders4));
        System.assert(accountInfoOauthproviders4.equals(accountInfoOauthproviders3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoOauthproviders accountInfoOauthproviders1 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders2 = new OASAccountInfoOauthproviders();

        System.assertEquals(false, accountInfoOauthproviders1.equals('foo'));
        System.assertEquals(false, accountInfoOauthproviders2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoOauthproviders accountInfoOauthproviders1 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders2 = new OASAccountInfoOauthproviders();
        OASAccountInfoOauthproviders accountInfoOauthproviders3;

        System.assertEquals(false, accountInfoOauthproviders1.equals(accountInfoOauthproviders3));
        System.assertEquals(false, accountInfoOauthproviders2.equals(accountInfoOauthproviders3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoOauthproviders accountInfoOauthproviders1 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders2 = new OASAccountInfoOauthproviders();

        System.assertEquals(accountInfoOauthproviders1.hashCode(), accountInfoOauthproviders1.hashCode());
        System.assertEquals(accountInfoOauthproviders2.hashCode(), accountInfoOauthproviders2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoOauthproviders accountInfoOauthproviders1 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders2 = OASAccountInfoOauthproviders.getExample();
        OASAccountInfoOauthproviders accountInfoOauthproviders3 = new OASAccountInfoOauthproviders();
        OASAccountInfoOauthproviders accountInfoOauthproviders4 = new OASAccountInfoOauthproviders();

        System.assert(accountInfoOauthproviders1.equals(accountInfoOauthproviders2));
        System.assert(accountInfoOauthproviders3.equals(accountInfoOauthproviders4));
        System.assertEquals(accountInfoOauthproviders1.hashCode(), accountInfoOauthproviders2.hashCode());
        System.assertEquals(accountInfoOauthproviders3.hashCode(), accountInfoOauthproviders4.hashCode());
    }
}
