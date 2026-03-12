@isTest
private class OASHomeDetailsModulesLicensesTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses1 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses2 = homeDetailsModulesLicenses1;
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses3 = new OASHomeDetailsModulesLicenses();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses4 = homeDetailsModulesLicenses3;

        System.assert(homeDetailsModulesLicenses1.equals(homeDetailsModulesLicenses2));
        System.assert(homeDetailsModulesLicenses2.equals(homeDetailsModulesLicenses1));
        System.assert(homeDetailsModulesLicenses1.equals(homeDetailsModulesLicenses1));
        System.assert(homeDetailsModulesLicenses3.equals(homeDetailsModulesLicenses4));
        System.assert(homeDetailsModulesLicenses4.equals(homeDetailsModulesLicenses3));
        System.assert(homeDetailsModulesLicenses3.equals(homeDetailsModulesLicenses3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses1 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses2 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses3 = new OASHomeDetailsModulesLicenses();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses4 = new OASHomeDetailsModulesLicenses();

        System.assert(homeDetailsModulesLicenses1.equals(homeDetailsModulesLicenses2));
        System.assert(homeDetailsModulesLicenses2.equals(homeDetailsModulesLicenses1));
        System.assert(homeDetailsModulesLicenses3.equals(homeDetailsModulesLicenses4));
        System.assert(homeDetailsModulesLicenses4.equals(homeDetailsModulesLicenses3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses1 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses2 = new OASHomeDetailsModulesLicenses();

        System.assertEquals(false, homeDetailsModulesLicenses1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesLicenses2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses1 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses2 = new OASHomeDetailsModulesLicenses();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses3;

        System.assertEquals(false, homeDetailsModulesLicenses1.equals(homeDetailsModulesLicenses3));
        System.assertEquals(false, homeDetailsModulesLicenses2.equals(homeDetailsModulesLicenses3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses1 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses2 = new OASHomeDetailsModulesLicenses();

        System.assertEquals(homeDetailsModulesLicenses1.hashCode(), homeDetailsModulesLicenses1.hashCode());
        System.assertEquals(homeDetailsModulesLicenses2.hashCode(), homeDetailsModulesLicenses2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses1 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses2 = OASHomeDetailsModulesLicenses.getExample();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses3 = new OASHomeDetailsModulesLicenses();
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses4 = new OASHomeDetailsModulesLicenses();

        System.assert(homeDetailsModulesLicenses1.equals(homeDetailsModulesLicenses2));
        System.assert(homeDetailsModulesLicenses3.equals(homeDetailsModulesLicenses4));
        System.assertEquals(homeDetailsModulesLicenses1.hashCode(), homeDetailsModulesLicenses2.hashCode());
        System.assertEquals(homeDetailsModulesLicenses3.hashCode(), homeDetailsModulesLicenses4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesLicenses homeDetailsModulesLicenses = new OASHomeDetailsModulesLicenses();
        Map<String, String> x-property-mappings = homeDetailsModulesLicenses.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
