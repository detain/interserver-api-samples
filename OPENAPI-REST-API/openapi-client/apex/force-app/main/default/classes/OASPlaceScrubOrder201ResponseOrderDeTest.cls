@isTest
private class OASPlaceScrubOrder201ResponseOrderDeTest {
    @isTest
    private static void equalsSameInstance() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails1 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails2 = placeScrubOrder201ResponseOrderDetails1;
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails3 = new OASPlaceScrubOrder201ResponseOrderDe();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails4 = placeScrubOrder201ResponseOrderDetails3;

        System.assert(placeScrubOrder201ResponseOrderDetails1.equals(placeScrubOrder201ResponseOrderDetails2));
        System.assert(placeScrubOrder201ResponseOrderDetails2.equals(placeScrubOrder201ResponseOrderDetails1));
        System.assert(placeScrubOrder201ResponseOrderDetails1.equals(placeScrubOrder201ResponseOrderDetails1));
        System.assert(placeScrubOrder201ResponseOrderDetails3.equals(placeScrubOrder201ResponseOrderDetails4));
        System.assert(placeScrubOrder201ResponseOrderDetails4.equals(placeScrubOrder201ResponseOrderDetails3));
        System.assert(placeScrubOrder201ResponseOrderDetails3.equals(placeScrubOrder201ResponseOrderDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails1 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails2 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails3 = new OASPlaceScrubOrder201ResponseOrderDe();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails4 = new OASPlaceScrubOrder201ResponseOrderDe();

        System.assert(placeScrubOrder201ResponseOrderDetails1.equals(placeScrubOrder201ResponseOrderDetails2));
        System.assert(placeScrubOrder201ResponseOrderDetails2.equals(placeScrubOrder201ResponseOrderDetails1));
        System.assert(placeScrubOrder201ResponseOrderDetails3.equals(placeScrubOrder201ResponseOrderDetails4));
        System.assert(placeScrubOrder201ResponseOrderDetails4.equals(placeScrubOrder201ResponseOrderDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails1 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails2 = new OASPlaceScrubOrder201ResponseOrderDe();

        System.assertEquals(false, placeScrubOrder201ResponseOrderDetails1.equals('foo'));
        System.assertEquals(false, placeScrubOrder201ResponseOrderDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails1 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails2 = new OASPlaceScrubOrder201ResponseOrderDe();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails3;

        System.assertEquals(false, placeScrubOrder201ResponseOrderDetails1.equals(placeScrubOrder201ResponseOrderDetails3));
        System.assertEquals(false, placeScrubOrder201ResponseOrderDetails2.equals(placeScrubOrder201ResponseOrderDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails1 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails2 = new OASPlaceScrubOrder201ResponseOrderDe();

        System.assertEquals(placeScrubOrder201ResponseOrderDetails1.hashCode(), placeScrubOrder201ResponseOrderDetails1.hashCode());
        System.assertEquals(placeScrubOrder201ResponseOrderDetails2.hashCode(), placeScrubOrder201ResponseOrderDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails1 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails2 = OASPlaceScrubOrder201ResponseOrderDe.getExample();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails3 = new OASPlaceScrubOrder201ResponseOrderDe();
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails4 = new OASPlaceScrubOrder201ResponseOrderDe();

        System.assert(placeScrubOrder201ResponseOrderDetails1.equals(placeScrubOrder201ResponseOrderDetails2));
        System.assert(placeScrubOrder201ResponseOrderDetails3.equals(placeScrubOrder201ResponseOrderDetails4));
        System.assertEquals(placeScrubOrder201ResponseOrderDetails1.hashCode(), placeScrubOrder201ResponseOrderDetails2.hashCode());
        System.assertEquals(placeScrubOrder201ResponseOrderDetails3.hashCode(), placeScrubOrder201ResponseOrderDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASPlaceScrubOrder201ResponseOrderDe placeScrubOrder201ResponseOrderDetails = new OASPlaceScrubOrder201ResponseOrderDe();
        Map<String, String> x-property-mappings = placeScrubOrder201ResponseOrderDetails.getx-property-mappings();
        System.assertEquals('totalCost', x-property-mappings.get('total_cost'));
        System.assertEquals('serviceId', x-property-mappings.get('service_id'));
        System.assertEquals('invoiceId', x-property-mappings.get('invoice_id'));
        System.assertEquals('invoiceDescription', x-property-mappings.get('invoice_description'));
        System.assertEquals('cjParams', x-property-mappings.get('cj_params'));
    }
}
