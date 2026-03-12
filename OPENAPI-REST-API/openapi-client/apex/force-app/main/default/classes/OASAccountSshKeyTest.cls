@isTest
private class OASAccountSshKeyTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountSshKey accountSshKey1 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey2 = accountSshKey1;
        OASAccountSshKey accountSshKey3 = new OASAccountSshKey();
        OASAccountSshKey accountSshKey4 = accountSshKey3;

        System.assert(accountSshKey1.equals(accountSshKey2));
        System.assert(accountSshKey2.equals(accountSshKey1));
        System.assert(accountSshKey1.equals(accountSshKey1));
        System.assert(accountSshKey3.equals(accountSshKey4));
        System.assert(accountSshKey4.equals(accountSshKey3));
        System.assert(accountSshKey3.equals(accountSshKey3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountSshKey accountSshKey1 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey2 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey3 = new OASAccountSshKey();
        OASAccountSshKey accountSshKey4 = new OASAccountSshKey();

        System.assert(accountSshKey1.equals(accountSshKey2));
        System.assert(accountSshKey2.equals(accountSshKey1));
        System.assert(accountSshKey3.equals(accountSshKey4));
        System.assert(accountSshKey4.equals(accountSshKey3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountSshKey accountSshKey1 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey2 = new OASAccountSshKey();

        System.assertEquals(false, accountSshKey1.equals('foo'));
        System.assertEquals(false, accountSshKey2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountSshKey accountSshKey1 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey2 = new OASAccountSshKey();
        OASAccountSshKey accountSshKey3;

        System.assertEquals(false, accountSshKey1.equals(accountSshKey3));
        System.assertEquals(false, accountSshKey2.equals(accountSshKey3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountSshKey accountSshKey1 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey2 = new OASAccountSshKey();

        System.assertEquals(accountSshKey1.hashCode(), accountSshKey1.hashCode());
        System.assertEquals(accountSshKey2.hashCode(), accountSshKey2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountSshKey accountSshKey1 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey2 = OASAccountSshKey.getExample();
        OASAccountSshKey accountSshKey3 = new OASAccountSshKey();
        OASAccountSshKey accountSshKey4 = new OASAccountSshKey();

        System.assert(accountSshKey1.equals(accountSshKey2));
        System.assert(accountSshKey3.equals(accountSshKey4));
        System.assertEquals(accountSshKey1.hashCode(), accountSshKey2.hashCode());
        System.assertEquals(accountSshKey3.hashCode(), accountSshKey4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAccountSshKey accountSshKey = new OASAccountSshKey();
        Map<String, String> x-property-mappings = accountSshKey.getx-property-mappings();
        System.assertEquals('sshKey', x-property-mappings.get('ssh_key'));
    }
}
