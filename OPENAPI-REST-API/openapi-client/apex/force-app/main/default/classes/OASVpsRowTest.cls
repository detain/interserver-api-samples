@isTest
private class OASVpsRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsRow vpsRow1 = OASVpsRow.getExample();
        OASVpsRow vpsRow2 = vpsRow1;
        OASVpsRow vpsRow3 = new OASVpsRow();
        OASVpsRow vpsRow4 = vpsRow3;

        System.assert(vpsRow1.equals(vpsRow2));
        System.assert(vpsRow2.equals(vpsRow1));
        System.assert(vpsRow1.equals(vpsRow1));
        System.assert(vpsRow3.equals(vpsRow4));
        System.assert(vpsRow4.equals(vpsRow3));
        System.assert(vpsRow3.equals(vpsRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsRow vpsRow1 = OASVpsRow.getExample();
        OASVpsRow vpsRow2 = OASVpsRow.getExample();
        OASVpsRow vpsRow3 = new OASVpsRow();
        OASVpsRow vpsRow4 = new OASVpsRow();

        System.assert(vpsRow1.equals(vpsRow2));
        System.assert(vpsRow2.equals(vpsRow1));
        System.assert(vpsRow3.equals(vpsRow4));
        System.assert(vpsRow4.equals(vpsRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsRow vpsRow1 = OASVpsRow.getExample();
        OASVpsRow vpsRow2 = new OASVpsRow();

        System.assertEquals(false, vpsRow1.equals('foo'));
        System.assertEquals(false, vpsRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsRow vpsRow1 = OASVpsRow.getExample();
        OASVpsRow vpsRow2 = new OASVpsRow();
        OASVpsRow vpsRow3;

        System.assertEquals(false, vpsRow1.equals(vpsRow3));
        System.assertEquals(false, vpsRow2.equals(vpsRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsRow vpsRow1 = OASVpsRow.getExample();
        OASVpsRow vpsRow2 = new OASVpsRow();

        System.assertEquals(vpsRow1.hashCode(), vpsRow1.hashCode());
        System.assertEquals(vpsRow2.hashCode(), vpsRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsRow vpsRow1 = OASVpsRow.getExample();
        OASVpsRow vpsRow2 = OASVpsRow.getExample();
        OASVpsRow vpsRow3 = new OASVpsRow();
        OASVpsRow vpsRow4 = new OASVpsRow();

        System.assert(vpsRow1.equals(vpsRow2));
        System.assert(vpsRow3.equals(vpsRow4));
        System.assertEquals(vpsRow1.hashCode(), vpsRow2.hashCode());
        System.assertEquals(vpsRow3.hashCode(), vpsRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsRow vpsRow = new OASVpsRow();
        Map<String, String> x-property-mappings = vpsRow.getx-property-mappings();
        System.assertEquals('vpsId', x-property-mappings.get('vps_id'));
        System.assertEquals('vpsName', x-property-mappings.get('vps_name'));
        System.assertEquals('repeatInvoicesCost', x-property-mappings.get('repeat_invoices_cost'));
        System.assertEquals('vpsHostname', x-property-mappings.get('vps_hostname'));
        System.assertEquals('vpsIp', x-property-mappings.get('vps_ip'));
        System.assertEquals('vpsStatus', x-property-mappings.get('vps_status'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('vpsComment', x-property-mappings.get('vps_comment'));
    }
}
