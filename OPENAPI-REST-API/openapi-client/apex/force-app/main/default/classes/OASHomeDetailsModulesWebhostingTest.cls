@isTest
private class OASHomeDetailsModulesWebhostingTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting1 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting2 = homeDetailsModulesWebhosting1;
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting3 = new OASHomeDetailsModulesWebhosting();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting4 = homeDetailsModulesWebhosting3;

        System.assert(homeDetailsModulesWebhosting1.equals(homeDetailsModulesWebhosting2));
        System.assert(homeDetailsModulesWebhosting2.equals(homeDetailsModulesWebhosting1));
        System.assert(homeDetailsModulesWebhosting1.equals(homeDetailsModulesWebhosting1));
        System.assert(homeDetailsModulesWebhosting3.equals(homeDetailsModulesWebhosting4));
        System.assert(homeDetailsModulesWebhosting4.equals(homeDetailsModulesWebhosting3));
        System.assert(homeDetailsModulesWebhosting3.equals(homeDetailsModulesWebhosting3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting1 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting2 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting3 = new OASHomeDetailsModulesWebhosting();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting4 = new OASHomeDetailsModulesWebhosting();

        System.assert(homeDetailsModulesWebhosting1.equals(homeDetailsModulesWebhosting2));
        System.assert(homeDetailsModulesWebhosting2.equals(homeDetailsModulesWebhosting1));
        System.assert(homeDetailsModulesWebhosting3.equals(homeDetailsModulesWebhosting4));
        System.assert(homeDetailsModulesWebhosting4.equals(homeDetailsModulesWebhosting3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting1 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting2 = new OASHomeDetailsModulesWebhosting();

        System.assertEquals(false, homeDetailsModulesWebhosting1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesWebhosting2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting1 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting2 = new OASHomeDetailsModulesWebhosting();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting3;

        System.assertEquals(false, homeDetailsModulesWebhosting1.equals(homeDetailsModulesWebhosting3));
        System.assertEquals(false, homeDetailsModulesWebhosting2.equals(homeDetailsModulesWebhosting3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting1 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting2 = new OASHomeDetailsModulesWebhosting();

        System.assertEquals(homeDetailsModulesWebhosting1.hashCode(), homeDetailsModulesWebhosting1.hashCode());
        System.assertEquals(homeDetailsModulesWebhosting2.hashCode(), homeDetailsModulesWebhosting2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting1 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting2 = OASHomeDetailsModulesWebhosting.getExample();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting3 = new OASHomeDetailsModulesWebhosting();
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting4 = new OASHomeDetailsModulesWebhosting();

        System.assert(homeDetailsModulesWebhosting1.equals(homeDetailsModulesWebhosting2));
        System.assert(homeDetailsModulesWebhosting3.equals(homeDetailsModulesWebhosting4));
        System.assertEquals(homeDetailsModulesWebhosting1.hashCode(), homeDetailsModulesWebhosting2.hashCode());
        System.assertEquals(homeDetailsModulesWebhosting3.hashCode(), homeDetailsModulesWebhosting4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesWebhosting homeDetailsModulesWebhosting = new OASHomeDetailsModulesWebhosting();
        Map<String, String> x-property-mappings = homeDetailsModulesWebhosting.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
