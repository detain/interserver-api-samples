@isTest
private class OASDeleteGeoFirewallRuleTest {
    @isTest
    private static void equalsSameInstance() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule1 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule2 = deleteGeoFirewallRule1;
        OASDeleteGeoFirewallRule deleteGeoFirewallRule3 = new OASDeleteGeoFirewallRule();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule4 = deleteGeoFirewallRule3;

        System.assert(deleteGeoFirewallRule1.equals(deleteGeoFirewallRule2));
        System.assert(deleteGeoFirewallRule2.equals(deleteGeoFirewallRule1));
        System.assert(deleteGeoFirewallRule1.equals(deleteGeoFirewallRule1));
        System.assert(deleteGeoFirewallRule3.equals(deleteGeoFirewallRule4));
        System.assert(deleteGeoFirewallRule4.equals(deleteGeoFirewallRule3));
        System.assert(deleteGeoFirewallRule3.equals(deleteGeoFirewallRule3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule1 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule2 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule3 = new OASDeleteGeoFirewallRule();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule4 = new OASDeleteGeoFirewallRule();

        System.assert(deleteGeoFirewallRule1.equals(deleteGeoFirewallRule2));
        System.assert(deleteGeoFirewallRule2.equals(deleteGeoFirewallRule1));
        System.assert(deleteGeoFirewallRule3.equals(deleteGeoFirewallRule4));
        System.assert(deleteGeoFirewallRule4.equals(deleteGeoFirewallRule3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule1 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule2 = new OASDeleteGeoFirewallRule();

        System.assertEquals(false, deleteGeoFirewallRule1.equals('foo'));
        System.assertEquals(false, deleteGeoFirewallRule2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule1 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule2 = new OASDeleteGeoFirewallRule();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule3;

        System.assertEquals(false, deleteGeoFirewallRule1.equals(deleteGeoFirewallRule3));
        System.assertEquals(false, deleteGeoFirewallRule2.equals(deleteGeoFirewallRule3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule1 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule2 = new OASDeleteGeoFirewallRule();

        System.assertEquals(deleteGeoFirewallRule1.hashCode(), deleteGeoFirewallRule1.hashCode());
        System.assertEquals(deleteGeoFirewallRule2.hashCode(), deleteGeoFirewallRule2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule1 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule2 = OASDeleteGeoFirewallRule.getExample();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule3 = new OASDeleteGeoFirewallRule();
        OASDeleteGeoFirewallRule deleteGeoFirewallRule4 = new OASDeleteGeoFirewallRule();

        System.assert(deleteGeoFirewallRule1.equals(deleteGeoFirewallRule2));
        System.assert(deleteGeoFirewallRule3.equals(deleteGeoFirewallRule4));
        System.assertEquals(deleteGeoFirewallRule1.hashCode(), deleteGeoFirewallRule2.hashCode());
        System.assertEquals(deleteGeoFirewallRule3.hashCode(), deleteGeoFirewallRule4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDeleteGeoFirewallRule deleteGeoFirewallRule = new OASDeleteGeoFirewallRule();
        Map<String, String> x-property-mappings = deleteGeoFirewallRule.getx-property-mappings();
        System.assertEquals('ruleId', x-property-mappings.get('rule_id'));
    }
}
