@isTest
private class OASHomeDetailsModulesQuickserversTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers1 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers2 = homeDetailsModulesQuickservers1;
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers3 = new OASHomeDetailsModulesQuickservers();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers4 = homeDetailsModulesQuickservers3;

        System.assert(homeDetailsModulesQuickservers1.equals(homeDetailsModulesQuickservers2));
        System.assert(homeDetailsModulesQuickservers2.equals(homeDetailsModulesQuickservers1));
        System.assert(homeDetailsModulesQuickservers1.equals(homeDetailsModulesQuickservers1));
        System.assert(homeDetailsModulesQuickservers3.equals(homeDetailsModulesQuickservers4));
        System.assert(homeDetailsModulesQuickservers4.equals(homeDetailsModulesQuickservers3));
        System.assert(homeDetailsModulesQuickservers3.equals(homeDetailsModulesQuickservers3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers1 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers2 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers3 = new OASHomeDetailsModulesQuickservers();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers4 = new OASHomeDetailsModulesQuickservers();

        System.assert(homeDetailsModulesQuickservers1.equals(homeDetailsModulesQuickservers2));
        System.assert(homeDetailsModulesQuickservers2.equals(homeDetailsModulesQuickservers1));
        System.assert(homeDetailsModulesQuickservers3.equals(homeDetailsModulesQuickservers4));
        System.assert(homeDetailsModulesQuickservers4.equals(homeDetailsModulesQuickservers3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers1 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers2 = new OASHomeDetailsModulesQuickservers();

        System.assertEquals(false, homeDetailsModulesQuickservers1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesQuickservers2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers1 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers2 = new OASHomeDetailsModulesQuickservers();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers3;

        System.assertEquals(false, homeDetailsModulesQuickservers1.equals(homeDetailsModulesQuickservers3));
        System.assertEquals(false, homeDetailsModulesQuickservers2.equals(homeDetailsModulesQuickservers3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers1 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers2 = new OASHomeDetailsModulesQuickservers();

        System.assertEquals(homeDetailsModulesQuickservers1.hashCode(), homeDetailsModulesQuickservers1.hashCode());
        System.assertEquals(homeDetailsModulesQuickservers2.hashCode(), homeDetailsModulesQuickservers2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers1 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers2 = OASHomeDetailsModulesQuickservers.getExample();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers3 = new OASHomeDetailsModulesQuickservers();
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers4 = new OASHomeDetailsModulesQuickservers();

        System.assert(homeDetailsModulesQuickservers1.equals(homeDetailsModulesQuickservers2));
        System.assert(homeDetailsModulesQuickservers3.equals(homeDetailsModulesQuickservers4));
        System.assertEquals(homeDetailsModulesQuickservers1.hashCode(), homeDetailsModulesQuickservers2.hashCode());
        System.assertEquals(homeDetailsModulesQuickservers3.hashCode(), homeDetailsModulesQuickservers4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesQuickservers homeDetailsModulesQuickservers = new OASHomeDetailsModulesQuickservers();
        Map<String, String> x-property-mappings = homeDetailsModulesQuickservers.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
