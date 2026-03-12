@isTest
private class OASScrubIpsLogRowSchemaTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema1 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema2 = scrubIpsLogRowSchema1;
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema3 = new OASScrubIpsLogRowSchema();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema4 = scrubIpsLogRowSchema3;

        System.assert(scrubIpsLogRowSchema1.equals(scrubIpsLogRowSchema2));
        System.assert(scrubIpsLogRowSchema2.equals(scrubIpsLogRowSchema1));
        System.assert(scrubIpsLogRowSchema1.equals(scrubIpsLogRowSchema1));
        System.assert(scrubIpsLogRowSchema3.equals(scrubIpsLogRowSchema4));
        System.assert(scrubIpsLogRowSchema4.equals(scrubIpsLogRowSchema3));
        System.assert(scrubIpsLogRowSchema3.equals(scrubIpsLogRowSchema3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema1 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema2 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema3 = new OASScrubIpsLogRowSchema();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema4 = new OASScrubIpsLogRowSchema();

        System.assert(scrubIpsLogRowSchema1.equals(scrubIpsLogRowSchema2));
        System.assert(scrubIpsLogRowSchema2.equals(scrubIpsLogRowSchema1));
        System.assert(scrubIpsLogRowSchema3.equals(scrubIpsLogRowSchema4));
        System.assert(scrubIpsLogRowSchema4.equals(scrubIpsLogRowSchema3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema1 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema2 = new OASScrubIpsLogRowSchema();

        System.assertEquals(false, scrubIpsLogRowSchema1.equals('foo'));
        System.assertEquals(false, scrubIpsLogRowSchema2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema1 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema2 = new OASScrubIpsLogRowSchema();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema3;

        System.assertEquals(false, scrubIpsLogRowSchema1.equals(scrubIpsLogRowSchema3));
        System.assertEquals(false, scrubIpsLogRowSchema2.equals(scrubIpsLogRowSchema3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema1 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema2 = new OASScrubIpsLogRowSchema();

        System.assertEquals(scrubIpsLogRowSchema1.hashCode(), scrubIpsLogRowSchema1.hashCode());
        System.assertEquals(scrubIpsLogRowSchema2.hashCode(), scrubIpsLogRowSchema2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema1 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema2 = OASScrubIpsLogRowSchema.getExample();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema3 = new OASScrubIpsLogRowSchema();
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema4 = new OASScrubIpsLogRowSchema();

        System.assert(scrubIpsLogRowSchema1.equals(scrubIpsLogRowSchema2));
        System.assert(scrubIpsLogRowSchema3.equals(scrubIpsLogRowSchema4));
        System.assertEquals(scrubIpsLogRowSchema1.hashCode(), scrubIpsLogRowSchema2.hashCode());
        System.assertEquals(scrubIpsLogRowSchema3.hashCode(), scrubIpsLogRowSchema4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASScrubIpsLogRowSchema scrubIpsLogRowSchema = new OASScrubIpsLogRowSchema();
        Map<String, String> x-property-mappings = scrubIpsLogRowSchema.getx-property-mappings();
        System.assertEquals('r_date', x-property-mappings.get('date'));
        System.assertEquals('blockedIp', x-property-mappings.get('blocked_ip'));
        System.assertEquals('targetIp', x-property-mappings.get('target_ip'));
        System.assertEquals('targetPort', x-property-mappings.get('target_port'));
        System.assertEquals('byteCount', x-property-mappings.get('byte_count'));
        System.assertEquals('xdpAction', x-property-mappings.get('xdp_action'));
    }
}
