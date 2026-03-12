@isTest
private class OASWebsiteRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteRow websiteRow1 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow2 = websiteRow1;
        OASWebsiteRow websiteRow3 = new OASWebsiteRow();
        OASWebsiteRow websiteRow4 = websiteRow3;

        System.assert(websiteRow1.equals(websiteRow2));
        System.assert(websiteRow2.equals(websiteRow1));
        System.assert(websiteRow1.equals(websiteRow1));
        System.assert(websiteRow3.equals(websiteRow4));
        System.assert(websiteRow4.equals(websiteRow3));
        System.assert(websiteRow3.equals(websiteRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteRow websiteRow1 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow2 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow3 = new OASWebsiteRow();
        OASWebsiteRow websiteRow4 = new OASWebsiteRow();

        System.assert(websiteRow1.equals(websiteRow2));
        System.assert(websiteRow2.equals(websiteRow1));
        System.assert(websiteRow3.equals(websiteRow4));
        System.assert(websiteRow4.equals(websiteRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteRow websiteRow1 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow2 = new OASWebsiteRow();

        System.assertEquals(false, websiteRow1.equals('foo'));
        System.assertEquals(false, websiteRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteRow websiteRow1 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow2 = new OASWebsiteRow();
        OASWebsiteRow websiteRow3;

        System.assertEquals(false, websiteRow1.equals(websiteRow3));
        System.assertEquals(false, websiteRow2.equals(websiteRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteRow websiteRow1 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow2 = new OASWebsiteRow();

        System.assertEquals(websiteRow1.hashCode(), websiteRow1.hashCode());
        System.assertEquals(websiteRow2.hashCode(), websiteRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteRow websiteRow1 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow2 = OASWebsiteRow.getExample();
        OASWebsiteRow websiteRow3 = new OASWebsiteRow();
        OASWebsiteRow websiteRow4 = new OASWebsiteRow();

        System.assert(websiteRow1.equals(websiteRow2));
        System.assert(websiteRow3.equals(websiteRow4));
        System.assertEquals(websiteRow1.hashCode(), websiteRow2.hashCode());
        System.assertEquals(websiteRow3.hashCode(), websiteRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsiteRow websiteRow = new OASWebsiteRow();
        Map<String, String> x-property-mappings = websiteRow.getx-property-mappings();
        System.assertEquals('websiteId', x-property-mappings.get('website_id'));
        System.assertEquals('websiteHostname', x-property-mappings.get('website_hostname'));
        System.assertEquals('repeatInvoicesCost', x-property-mappings.get('repeat_invoices_cost'));
        System.assertEquals('websiteStatus', x-property-mappings.get('website_status'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('websiteComment', x-property-mappings.get('website_comment'));
    }
}
