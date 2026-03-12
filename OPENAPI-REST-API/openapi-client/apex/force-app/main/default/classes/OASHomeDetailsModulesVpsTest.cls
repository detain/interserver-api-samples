@isTest
private class OASHomeDetailsModulesVpsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesVps homeDetailsModulesVps1 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps2 = homeDetailsModulesVps1;
        OASHomeDetailsModulesVps homeDetailsModulesVps3 = new OASHomeDetailsModulesVps();
        OASHomeDetailsModulesVps homeDetailsModulesVps4 = homeDetailsModulesVps3;

        System.assert(homeDetailsModulesVps1.equals(homeDetailsModulesVps2));
        System.assert(homeDetailsModulesVps2.equals(homeDetailsModulesVps1));
        System.assert(homeDetailsModulesVps1.equals(homeDetailsModulesVps1));
        System.assert(homeDetailsModulesVps3.equals(homeDetailsModulesVps4));
        System.assert(homeDetailsModulesVps4.equals(homeDetailsModulesVps3));
        System.assert(homeDetailsModulesVps3.equals(homeDetailsModulesVps3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesVps homeDetailsModulesVps1 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps2 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps3 = new OASHomeDetailsModulesVps();
        OASHomeDetailsModulesVps homeDetailsModulesVps4 = new OASHomeDetailsModulesVps();

        System.assert(homeDetailsModulesVps1.equals(homeDetailsModulesVps2));
        System.assert(homeDetailsModulesVps2.equals(homeDetailsModulesVps1));
        System.assert(homeDetailsModulesVps3.equals(homeDetailsModulesVps4));
        System.assert(homeDetailsModulesVps4.equals(homeDetailsModulesVps3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesVps homeDetailsModulesVps1 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps2 = new OASHomeDetailsModulesVps();

        System.assertEquals(false, homeDetailsModulesVps1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesVps2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesVps homeDetailsModulesVps1 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps2 = new OASHomeDetailsModulesVps();
        OASHomeDetailsModulesVps homeDetailsModulesVps3;

        System.assertEquals(false, homeDetailsModulesVps1.equals(homeDetailsModulesVps3));
        System.assertEquals(false, homeDetailsModulesVps2.equals(homeDetailsModulesVps3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesVps homeDetailsModulesVps1 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps2 = new OASHomeDetailsModulesVps();

        System.assertEquals(homeDetailsModulesVps1.hashCode(), homeDetailsModulesVps1.hashCode());
        System.assertEquals(homeDetailsModulesVps2.hashCode(), homeDetailsModulesVps2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesVps homeDetailsModulesVps1 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps2 = OASHomeDetailsModulesVps.getExample();
        OASHomeDetailsModulesVps homeDetailsModulesVps3 = new OASHomeDetailsModulesVps();
        OASHomeDetailsModulesVps homeDetailsModulesVps4 = new OASHomeDetailsModulesVps();

        System.assert(homeDetailsModulesVps1.equals(homeDetailsModulesVps2));
        System.assert(homeDetailsModulesVps3.equals(homeDetailsModulesVps4));
        System.assertEquals(homeDetailsModulesVps1.hashCode(), homeDetailsModulesVps2.hashCode());
        System.assertEquals(homeDetailsModulesVps3.hashCode(), homeDetailsModulesVps4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesVps homeDetailsModulesVps = new OASHomeDetailsModulesVps();
        Map<String, String> x-property-mappings = homeDetailsModulesVps.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
