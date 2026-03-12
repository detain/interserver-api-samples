@isTest
private class OASHomeDetailsModulesServersTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesServers homeDetailsModulesServers1 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers2 = homeDetailsModulesServers1;
        OASHomeDetailsModulesServers homeDetailsModulesServers3 = new OASHomeDetailsModulesServers();
        OASHomeDetailsModulesServers homeDetailsModulesServers4 = homeDetailsModulesServers3;

        System.assert(homeDetailsModulesServers1.equals(homeDetailsModulesServers2));
        System.assert(homeDetailsModulesServers2.equals(homeDetailsModulesServers1));
        System.assert(homeDetailsModulesServers1.equals(homeDetailsModulesServers1));
        System.assert(homeDetailsModulesServers3.equals(homeDetailsModulesServers4));
        System.assert(homeDetailsModulesServers4.equals(homeDetailsModulesServers3));
        System.assert(homeDetailsModulesServers3.equals(homeDetailsModulesServers3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesServers homeDetailsModulesServers1 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers2 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers3 = new OASHomeDetailsModulesServers();
        OASHomeDetailsModulesServers homeDetailsModulesServers4 = new OASHomeDetailsModulesServers();

        System.assert(homeDetailsModulesServers1.equals(homeDetailsModulesServers2));
        System.assert(homeDetailsModulesServers2.equals(homeDetailsModulesServers1));
        System.assert(homeDetailsModulesServers3.equals(homeDetailsModulesServers4));
        System.assert(homeDetailsModulesServers4.equals(homeDetailsModulesServers3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesServers homeDetailsModulesServers1 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers2 = new OASHomeDetailsModulesServers();

        System.assertEquals(false, homeDetailsModulesServers1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesServers2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesServers homeDetailsModulesServers1 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers2 = new OASHomeDetailsModulesServers();
        OASHomeDetailsModulesServers homeDetailsModulesServers3;

        System.assertEquals(false, homeDetailsModulesServers1.equals(homeDetailsModulesServers3));
        System.assertEquals(false, homeDetailsModulesServers2.equals(homeDetailsModulesServers3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesServers homeDetailsModulesServers1 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers2 = new OASHomeDetailsModulesServers();

        System.assertEquals(homeDetailsModulesServers1.hashCode(), homeDetailsModulesServers1.hashCode());
        System.assertEquals(homeDetailsModulesServers2.hashCode(), homeDetailsModulesServers2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesServers homeDetailsModulesServers1 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers2 = OASHomeDetailsModulesServers.getExample();
        OASHomeDetailsModulesServers homeDetailsModulesServers3 = new OASHomeDetailsModulesServers();
        OASHomeDetailsModulesServers homeDetailsModulesServers4 = new OASHomeDetailsModulesServers();

        System.assert(homeDetailsModulesServers1.equals(homeDetailsModulesServers2));
        System.assert(homeDetailsModulesServers3.equals(homeDetailsModulesServers4));
        System.assertEquals(homeDetailsModulesServers1.hashCode(), homeDetailsModulesServers2.hashCode());
        System.assertEquals(homeDetailsModulesServers3.hashCode(), homeDetailsModulesServers4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesServers homeDetailsModulesServers = new OASHomeDetailsModulesServers();
        Map<String, String> x-property-mappings = homeDetailsModulesServers.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
