@isTest
private class OASCreateFirewallRuleTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateFirewallRule createFirewallRule1 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule2 = createFirewallRule1;
        OASCreateFirewallRule createFirewallRule3 = new OASCreateFirewallRule();
        OASCreateFirewallRule createFirewallRule4 = createFirewallRule3;

        System.assert(createFirewallRule1.equals(createFirewallRule2));
        System.assert(createFirewallRule2.equals(createFirewallRule1));
        System.assert(createFirewallRule1.equals(createFirewallRule1));
        System.assert(createFirewallRule3.equals(createFirewallRule4));
        System.assert(createFirewallRule4.equals(createFirewallRule3));
        System.assert(createFirewallRule3.equals(createFirewallRule3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateFirewallRule createFirewallRule1 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule2 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule3 = new OASCreateFirewallRule();
        OASCreateFirewallRule createFirewallRule4 = new OASCreateFirewallRule();

        System.assert(createFirewallRule1.equals(createFirewallRule2));
        System.assert(createFirewallRule2.equals(createFirewallRule1));
        System.assert(createFirewallRule3.equals(createFirewallRule4));
        System.assert(createFirewallRule4.equals(createFirewallRule3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateFirewallRule createFirewallRule1 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule2 = new OASCreateFirewallRule();

        System.assertEquals(false, createFirewallRule1.equals('foo'));
        System.assertEquals(false, createFirewallRule2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateFirewallRule createFirewallRule1 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule2 = new OASCreateFirewallRule();
        OASCreateFirewallRule createFirewallRule3;

        System.assertEquals(false, createFirewallRule1.equals(createFirewallRule3));
        System.assertEquals(false, createFirewallRule2.equals(createFirewallRule3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateFirewallRule createFirewallRule1 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule2 = new OASCreateFirewallRule();

        System.assertEquals(createFirewallRule1.hashCode(), createFirewallRule1.hashCode());
        System.assertEquals(createFirewallRule2.hashCode(), createFirewallRule2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateFirewallRule createFirewallRule1 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule2 = OASCreateFirewallRule.getExample();
        OASCreateFirewallRule createFirewallRule3 = new OASCreateFirewallRule();
        OASCreateFirewallRule createFirewallRule4 = new OASCreateFirewallRule();

        System.assert(createFirewallRule1.equals(createFirewallRule2));
        System.assert(createFirewallRule3.equals(createFirewallRule4));
        System.assertEquals(createFirewallRule1.hashCode(), createFirewallRule2.hashCode());
        System.assertEquals(createFirewallRule3.hashCode(), createFirewallRule4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASCreateFirewallRule createFirewallRule = new OASCreateFirewallRule();
        Map<String, String> x-property-mappings = createFirewallRule.getx-property-mappings();
        System.assertEquals('protocolId', x-property-mappings.get('protocol_id'));
        System.assertEquals('xdpAction', x-property-mappings.get('xdp_action'));
        System.assertEquals('destinationPort', x-property-mappings.get('destination_port'));
        System.assertEquals('sourceIp', x-property-mappings.get('source_ip'));
        System.assertEquals('sourcePort', x-property-mappings.get('source_port'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASCreateFirewallRule createFirewallRule = new OASCreateFirewallRule();
        System.assertEquals(80, createFirewallRule.destinationPort);
        System.assertEquals('0.0.0.0', createFirewallRule.sourceIp);
        System.assertEquals(0, createFirewallRule.sourcePort);
        System.assertEquals(null, createFirewallRule.protocolId);
        System.assertEquals(null, createFirewallRule.xdpAction);
    }
}
