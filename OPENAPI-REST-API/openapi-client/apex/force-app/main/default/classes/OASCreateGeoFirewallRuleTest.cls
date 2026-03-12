@isTest
private class OASCreateGeoFirewallRuleTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateGeoFirewallRule createGeoFirewallRule1 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule2 = createGeoFirewallRule1;
        OASCreateGeoFirewallRule createGeoFirewallRule3 = new OASCreateGeoFirewallRule();
        OASCreateGeoFirewallRule createGeoFirewallRule4 = createGeoFirewallRule3;

        System.assert(createGeoFirewallRule1.equals(createGeoFirewallRule2));
        System.assert(createGeoFirewallRule2.equals(createGeoFirewallRule1));
        System.assert(createGeoFirewallRule1.equals(createGeoFirewallRule1));
        System.assert(createGeoFirewallRule3.equals(createGeoFirewallRule4));
        System.assert(createGeoFirewallRule4.equals(createGeoFirewallRule3));
        System.assert(createGeoFirewallRule3.equals(createGeoFirewallRule3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateGeoFirewallRule createGeoFirewallRule1 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule2 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule3 = new OASCreateGeoFirewallRule();
        OASCreateGeoFirewallRule createGeoFirewallRule4 = new OASCreateGeoFirewallRule();

        System.assert(createGeoFirewallRule1.equals(createGeoFirewallRule2));
        System.assert(createGeoFirewallRule2.equals(createGeoFirewallRule1));
        System.assert(createGeoFirewallRule3.equals(createGeoFirewallRule4));
        System.assert(createGeoFirewallRule4.equals(createGeoFirewallRule3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateGeoFirewallRule createGeoFirewallRule1 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule2 = new OASCreateGeoFirewallRule();

        System.assertEquals(false, createGeoFirewallRule1.equals('foo'));
        System.assertEquals(false, createGeoFirewallRule2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateGeoFirewallRule createGeoFirewallRule1 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule2 = new OASCreateGeoFirewallRule();
        OASCreateGeoFirewallRule createGeoFirewallRule3;

        System.assertEquals(false, createGeoFirewallRule1.equals(createGeoFirewallRule3));
        System.assertEquals(false, createGeoFirewallRule2.equals(createGeoFirewallRule3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateGeoFirewallRule createGeoFirewallRule1 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule2 = new OASCreateGeoFirewallRule();

        System.assertEquals(createGeoFirewallRule1.hashCode(), createGeoFirewallRule1.hashCode());
        System.assertEquals(createGeoFirewallRule2.hashCode(), createGeoFirewallRule2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateGeoFirewallRule createGeoFirewallRule1 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule2 = OASCreateGeoFirewallRule.getExample();
        OASCreateGeoFirewallRule createGeoFirewallRule3 = new OASCreateGeoFirewallRule();
        OASCreateGeoFirewallRule createGeoFirewallRule4 = new OASCreateGeoFirewallRule();

        System.assert(createGeoFirewallRule1.equals(createGeoFirewallRule2));
        System.assert(createGeoFirewallRule3.equals(createGeoFirewallRule4));
        System.assertEquals(createGeoFirewallRule1.hashCode(), createGeoFirewallRule2.hashCode());
        System.assertEquals(createGeoFirewallRule3.hashCode(), createGeoFirewallRule4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASCreateGeoFirewallRule createGeoFirewallRule = new OASCreateGeoFirewallRule();
        Map<String, String> x-property-mappings = createGeoFirewallRule.getx-property-mappings();
        System.assertEquals('xdpAction', x-property-mappings.get('xdp_action'));
        System.assertEquals('destinationPort', x-property-mappings.get('destination_port'));
        System.assertEquals('countryCode', x-property-mappings.get('country_code'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASCreateGeoFirewallRule createGeoFirewallRule = new OASCreateGeoFirewallRule();
        System.assertEquals(80, createGeoFirewallRule.destinationPort);
        System.assertEquals(null, createGeoFirewallRule.xdpAction);
        System.assertEquals(null, createGeoFirewallRule.countryCode);
        System.assertEquals(null, createGeoFirewallRule.asn);
    }
}
