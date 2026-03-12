@isTest
private class OASDeleteFirewallRuleTest {
    @isTest
    private static void equalsSameInstance() {
        OASDeleteFirewallRule deleteFirewallRule1 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule2 = deleteFirewallRule1;
        OASDeleteFirewallRule deleteFirewallRule3 = new OASDeleteFirewallRule();
        OASDeleteFirewallRule deleteFirewallRule4 = deleteFirewallRule3;

        System.assert(deleteFirewallRule1.equals(deleteFirewallRule2));
        System.assert(deleteFirewallRule2.equals(deleteFirewallRule1));
        System.assert(deleteFirewallRule1.equals(deleteFirewallRule1));
        System.assert(deleteFirewallRule3.equals(deleteFirewallRule4));
        System.assert(deleteFirewallRule4.equals(deleteFirewallRule3));
        System.assert(deleteFirewallRule3.equals(deleteFirewallRule3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDeleteFirewallRule deleteFirewallRule1 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule2 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule3 = new OASDeleteFirewallRule();
        OASDeleteFirewallRule deleteFirewallRule4 = new OASDeleteFirewallRule();

        System.assert(deleteFirewallRule1.equals(deleteFirewallRule2));
        System.assert(deleteFirewallRule2.equals(deleteFirewallRule1));
        System.assert(deleteFirewallRule3.equals(deleteFirewallRule4));
        System.assert(deleteFirewallRule4.equals(deleteFirewallRule3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDeleteFirewallRule deleteFirewallRule1 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule2 = new OASDeleteFirewallRule();

        System.assertEquals(false, deleteFirewallRule1.equals('foo'));
        System.assertEquals(false, deleteFirewallRule2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDeleteFirewallRule deleteFirewallRule1 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule2 = new OASDeleteFirewallRule();
        OASDeleteFirewallRule deleteFirewallRule3;

        System.assertEquals(false, deleteFirewallRule1.equals(deleteFirewallRule3));
        System.assertEquals(false, deleteFirewallRule2.equals(deleteFirewallRule3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDeleteFirewallRule deleteFirewallRule1 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule2 = new OASDeleteFirewallRule();

        System.assertEquals(deleteFirewallRule1.hashCode(), deleteFirewallRule1.hashCode());
        System.assertEquals(deleteFirewallRule2.hashCode(), deleteFirewallRule2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDeleteFirewallRule deleteFirewallRule1 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule2 = OASDeleteFirewallRule.getExample();
        OASDeleteFirewallRule deleteFirewallRule3 = new OASDeleteFirewallRule();
        OASDeleteFirewallRule deleteFirewallRule4 = new OASDeleteFirewallRule();

        System.assert(deleteFirewallRule1.equals(deleteFirewallRule2));
        System.assert(deleteFirewallRule3.equals(deleteFirewallRule4));
        System.assertEquals(deleteFirewallRule1.hashCode(), deleteFirewallRule2.hashCode());
        System.assertEquals(deleteFirewallRule3.hashCode(), deleteFirewallRule4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDeleteFirewallRule deleteFirewallRule = new OASDeleteFirewallRule();
        Map<String, String> x-property-mappings = deleteFirewallRule.getx-property-mappings();
        System.assertEquals('ruleId', x-property-mappings.get('rule_id'));
    }
}
