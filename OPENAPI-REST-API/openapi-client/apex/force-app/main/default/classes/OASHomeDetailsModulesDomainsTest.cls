@isTest
private class OASHomeDetailsModulesDomainsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains1 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains2 = homeDetailsModulesDomains1;
        OASHomeDetailsModulesDomains homeDetailsModulesDomains3 = new OASHomeDetailsModulesDomains();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains4 = homeDetailsModulesDomains3;

        System.assert(homeDetailsModulesDomains1.equals(homeDetailsModulesDomains2));
        System.assert(homeDetailsModulesDomains2.equals(homeDetailsModulesDomains1));
        System.assert(homeDetailsModulesDomains1.equals(homeDetailsModulesDomains1));
        System.assert(homeDetailsModulesDomains3.equals(homeDetailsModulesDomains4));
        System.assert(homeDetailsModulesDomains4.equals(homeDetailsModulesDomains3));
        System.assert(homeDetailsModulesDomains3.equals(homeDetailsModulesDomains3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains1 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains2 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains3 = new OASHomeDetailsModulesDomains();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains4 = new OASHomeDetailsModulesDomains();

        System.assert(homeDetailsModulesDomains1.equals(homeDetailsModulesDomains2));
        System.assert(homeDetailsModulesDomains2.equals(homeDetailsModulesDomains1));
        System.assert(homeDetailsModulesDomains3.equals(homeDetailsModulesDomains4));
        System.assert(homeDetailsModulesDomains4.equals(homeDetailsModulesDomains3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains1 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains2 = new OASHomeDetailsModulesDomains();

        System.assertEquals(false, homeDetailsModulesDomains1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesDomains2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains1 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains2 = new OASHomeDetailsModulesDomains();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains3;

        System.assertEquals(false, homeDetailsModulesDomains1.equals(homeDetailsModulesDomains3));
        System.assertEquals(false, homeDetailsModulesDomains2.equals(homeDetailsModulesDomains3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains1 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains2 = new OASHomeDetailsModulesDomains();

        System.assertEquals(homeDetailsModulesDomains1.hashCode(), homeDetailsModulesDomains1.hashCode());
        System.assertEquals(homeDetailsModulesDomains2.hashCode(), homeDetailsModulesDomains2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains1 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains2 = OASHomeDetailsModulesDomains.getExample();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains3 = new OASHomeDetailsModulesDomains();
        OASHomeDetailsModulesDomains homeDetailsModulesDomains4 = new OASHomeDetailsModulesDomains();

        System.assert(homeDetailsModulesDomains1.equals(homeDetailsModulesDomains2));
        System.assert(homeDetailsModulesDomains3.equals(homeDetailsModulesDomains4));
        System.assertEquals(homeDetailsModulesDomains1.hashCode(), homeDetailsModulesDomains2.hashCode());
        System.assertEquals(homeDetailsModulesDomains3.hashCode(), homeDetailsModulesDomains4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesDomains homeDetailsModulesDomains = new OASHomeDetailsModulesDomains();
        Map<String, String> x-property-mappings = homeDetailsModulesDomains.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
