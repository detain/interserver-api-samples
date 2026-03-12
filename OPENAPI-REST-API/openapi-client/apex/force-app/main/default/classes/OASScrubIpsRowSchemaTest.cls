@isTest
private class OASScrubIpsRowSchemaTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpsRowSchema scrubIpsRowSchema1 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema2 = scrubIpsRowSchema1;
        OASScrubIpsRowSchema scrubIpsRowSchema3 = new OASScrubIpsRowSchema();
        OASScrubIpsRowSchema scrubIpsRowSchema4 = scrubIpsRowSchema3;

        System.assert(scrubIpsRowSchema1.equals(scrubIpsRowSchema2));
        System.assert(scrubIpsRowSchema2.equals(scrubIpsRowSchema1));
        System.assert(scrubIpsRowSchema1.equals(scrubIpsRowSchema1));
        System.assert(scrubIpsRowSchema3.equals(scrubIpsRowSchema4));
        System.assert(scrubIpsRowSchema4.equals(scrubIpsRowSchema3));
        System.assert(scrubIpsRowSchema3.equals(scrubIpsRowSchema3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpsRowSchema scrubIpsRowSchema1 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema2 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema3 = new OASScrubIpsRowSchema();
        OASScrubIpsRowSchema scrubIpsRowSchema4 = new OASScrubIpsRowSchema();

        System.assert(scrubIpsRowSchema1.equals(scrubIpsRowSchema2));
        System.assert(scrubIpsRowSchema2.equals(scrubIpsRowSchema1));
        System.assert(scrubIpsRowSchema3.equals(scrubIpsRowSchema4));
        System.assert(scrubIpsRowSchema4.equals(scrubIpsRowSchema3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpsRowSchema scrubIpsRowSchema1 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema2 = new OASScrubIpsRowSchema();

        System.assertEquals(false, scrubIpsRowSchema1.equals('foo'));
        System.assertEquals(false, scrubIpsRowSchema2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpsRowSchema scrubIpsRowSchema1 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema2 = new OASScrubIpsRowSchema();
        OASScrubIpsRowSchema scrubIpsRowSchema3;

        System.assertEquals(false, scrubIpsRowSchema1.equals(scrubIpsRowSchema3));
        System.assertEquals(false, scrubIpsRowSchema2.equals(scrubIpsRowSchema3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpsRowSchema scrubIpsRowSchema1 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema2 = new OASScrubIpsRowSchema();

        System.assertEquals(scrubIpsRowSchema1.hashCode(), scrubIpsRowSchema1.hashCode());
        System.assertEquals(scrubIpsRowSchema2.hashCode(), scrubIpsRowSchema2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpsRowSchema scrubIpsRowSchema1 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema2 = OASScrubIpsRowSchema.getExample();
        OASScrubIpsRowSchema scrubIpsRowSchema3 = new OASScrubIpsRowSchema();
        OASScrubIpsRowSchema scrubIpsRowSchema4 = new OASScrubIpsRowSchema();

        System.assert(scrubIpsRowSchema1.equals(scrubIpsRowSchema2));
        System.assert(scrubIpsRowSchema3.equals(scrubIpsRowSchema4));
        System.assertEquals(scrubIpsRowSchema1.hashCode(), scrubIpsRowSchema2.hashCode());
        System.assertEquals(scrubIpsRowSchema3.hashCode(), scrubIpsRowSchema4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASScrubIpsRowSchema scrubIpsRowSchema = new OASScrubIpsRowSchema();
        Map<String, String> x-property-mappings = scrubIpsRowSchema.getx-property-mappings();
        System.assertEquals('scrubIpId', x-property-mappings.get('scrub_ip_id'));
        System.assertEquals('repeatInvoicesCost', x-property-mappings.get('repeat_invoices_cost'));
        System.assertEquals('scrubIpIp', x-property-mappings.get('scrub_ip_ip'));
        System.assertEquals('scrubIpStatus', x-property-mappings.get('scrub_ip_status'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
    }
}
