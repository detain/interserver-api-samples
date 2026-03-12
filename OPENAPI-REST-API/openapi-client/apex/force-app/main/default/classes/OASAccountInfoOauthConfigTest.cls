@isTest
private class OASAccountInfoOauthConfigTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoOauthConfig accountInfoOauthConfig1 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig2 = accountInfoOauthConfig1;
        OASAccountInfoOauthConfig accountInfoOauthConfig3 = new OASAccountInfoOauthConfig();
        OASAccountInfoOauthConfig accountInfoOauthConfig4 = accountInfoOauthConfig3;

        System.assert(accountInfoOauthConfig1.equals(accountInfoOauthConfig2));
        System.assert(accountInfoOauthConfig2.equals(accountInfoOauthConfig1));
        System.assert(accountInfoOauthConfig1.equals(accountInfoOauthConfig1));
        System.assert(accountInfoOauthConfig3.equals(accountInfoOauthConfig4));
        System.assert(accountInfoOauthConfig4.equals(accountInfoOauthConfig3));
        System.assert(accountInfoOauthConfig3.equals(accountInfoOauthConfig3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoOauthConfig accountInfoOauthConfig1 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig2 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig3 = new OASAccountInfoOauthConfig();
        OASAccountInfoOauthConfig accountInfoOauthConfig4 = new OASAccountInfoOauthConfig();

        System.assert(accountInfoOauthConfig1.equals(accountInfoOauthConfig2));
        System.assert(accountInfoOauthConfig2.equals(accountInfoOauthConfig1));
        System.assert(accountInfoOauthConfig3.equals(accountInfoOauthConfig4));
        System.assert(accountInfoOauthConfig4.equals(accountInfoOauthConfig3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoOauthConfig accountInfoOauthConfig1 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig2 = new OASAccountInfoOauthConfig();

        System.assertEquals(false, accountInfoOauthConfig1.equals('foo'));
        System.assertEquals(false, accountInfoOauthConfig2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoOauthConfig accountInfoOauthConfig1 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig2 = new OASAccountInfoOauthConfig();
        OASAccountInfoOauthConfig accountInfoOauthConfig3;

        System.assertEquals(false, accountInfoOauthConfig1.equals(accountInfoOauthConfig3));
        System.assertEquals(false, accountInfoOauthConfig2.equals(accountInfoOauthConfig3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoOauthConfig accountInfoOauthConfig1 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig2 = new OASAccountInfoOauthConfig();

        System.assertEquals(accountInfoOauthConfig1.hashCode(), accountInfoOauthConfig1.hashCode());
        System.assertEquals(accountInfoOauthConfig2.hashCode(), accountInfoOauthConfig2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoOauthConfig accountInfoOauthConfig1 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig2 = OASAccountInfoOauthConfig.getExample();
        OASAccountInfoOauthConfig accountInfoOauthConfig3 = new OASAccountInfoOauthConfig();
        OASAccountInfoOauthConfig accountInfoOauthConfig4 = new OASAccountInfoOauthConfig();

        System.assert(accountInfoOauthConfig1.equals(accountInfoOauthConfig2));
        System.assert(accountInfoOauthConfig3.equals(accountInfoOauthConfig4));
        System.assertEquals(accountInfoOauthConfig1.hashCode(), accountInfoOauthConfig2.hashCode());
        System.assertEquals(accountInfoOauthConfig3.hashCode(), accountInfoOauthConfig4.hashCode());
    }
}
