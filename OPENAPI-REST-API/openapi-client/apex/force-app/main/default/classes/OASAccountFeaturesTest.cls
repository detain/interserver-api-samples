@isTest
private class OASAccountFeaturesTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountFeatures accountFeatures1 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures2 = accountFeatures1;
        OASAccountFeatures accountFeatures3 = new OASAccountFeatures();
        OASAccountFeatures accountFeatures4 = accountFeatures3;

        System.assert(accountFeatures1.equals(accountFeatures2));
        System.assert(accountFeatures2.equals(accountFeatures1));
        System.assert(accountFeatures1.equals(accountFeatures1));
        System.assert(accountFeatures3.equals(accountFeatures4));
        System.assert(accountFeatures4.equals(accountFeatures3));
        System.assert(accountFeatures3.equals(accountFeatures3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountFeatures accountFeatures1 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures2 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures3 = new OASAccountFeatures();
        OASAccountFeatures accountFeatures4 = new OASAccountFeatures();

        System.assert(accountFeatures1.equals(accountFeatures2));
        System.assert(accountFeatures2.equals(accountFeatures1));
        System.assert(accountFeatures3.equals(accountFeatures4));
        System.assert(accountFeatures4.equals(accountFeatures3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountFeatures accountFeatures1 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures2 = new OASAccountFeatures();

        System.assertEquals(false, accountFeatures1.equals('foo'));
        System.assertEquals(false, accountFeatures2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountFeatures accountFeatures1 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures2 = new OASAccountFeatures();
        OASAccountFeatures accountFeatures3;

        System.assertEquals(false, accountFeatures1.equals(accountFeatures3));
        System.assertEquals(false, accountFeatures2.equals(accountFeatures3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountFeatures accountFeatures1 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures2 = new OASAccountFeatures();

        System.assertEquals(accountFeatures1.hashCode(), accountFeatures1.hashCode());
        System.assertEquals(accountFeatures2.hashCode(), accountFeatures2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountFeatures accountFeatures1 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures2 = OASAccountFeatures.getExample();
        OASAccountFeatures accountFeatures3 = new OASAccountFeatures();
        OASAccountFeatures accountFeatures4 = new OASAccountFeatures();

        System.assert(accountFeatures1.equals(accountFeatures2));
        System.assert(accountFeatures3.equals(accountFeatures4));
        System.assertEquals(accountFeatures1.hashCode(), accountFeatures2.hashCode());
        System.assertEquals(accountFeatures3.hashCode(), accountFeatures4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAccountFeatures accountFeatures = new OASAccountFeatures();
        Map<String, String> x-property-mappings = accountFeatures.getx-property-mappings();
        System.assertEquals('disableReset', x-property-mappings.get('disable_reset'));
        System.assertEquals('disableReinstall', x-property-mappings.get('disable_reinstall'));
    }
}
