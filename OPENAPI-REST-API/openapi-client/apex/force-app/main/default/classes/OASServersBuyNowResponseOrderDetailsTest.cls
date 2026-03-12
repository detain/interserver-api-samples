@isTest
private class OASServersBuyNowResponseOrderDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails1 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails2 = serversBuyNowResponseOrderDetails1;
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails3 = new OASServersBuyNowResponseOrderDetails();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails4 = serversBuyNowResponseOrderDetails3;

        System.assert(serversBuyNowResponseOrderDetails1.equals(serversBuyNowResponseOrderDetails2));
        System.assert(serversBuyNowResponseOrderDetails2.equals(serversBuyNowResponseOrderDetails1));
        System.assert(serversBuyNowResponseOrderDetails1.equals(serversBuyNowResponseOrderDetails1));
        System.assert(serversBuyNowResponseOrderDetails3.equals(serversBuyNowResponseOrderDetails4));
        System.assert(serversBuyNowResponseOrderDetails4.equals(serversBuyNowResponseOrderDetails3));
        System.assert(serversBuyNowResponseOrderDetails3.equals(serversBuyNowResponseOrderDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails1 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails2 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails3 = new OASServersBuyNowResponseOrderDetails();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails4 = new OASServersBuyNowResponseOrderDetails();

        System.assert(serversBuyNowResponseOrderDetails1.equals(serversBuyNowResponseOrderDetails2));
        System.assert(serversBuyNowResponseOrderDetails2.equals(serversBuyNowResponseOrderDetails1));
        System.assert(serversBuyNowResponseOrderDetails3.equals(serversBuyNowResponseOrderDetails4));
        System.assert(serversBuyNowResponseOrderDetails4.equals(serversBuyNowResponseOrderDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails1 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails2 = new OASServersBuyNowResponseOrderDetails();

        System.assertEquals(false, serversBuyNowResponseOrderDetails1.equals('foo'));
        System.assertEquals(false, serversBuyNowResponseOrderDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails1 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails2 = new OASServersBuyNowResponseOrderDetails();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails3;

        System.assertEquals(false, serversBuyNowResponseOrderDetails1.equals(serversBuyNowResponseOrderDetails3));
        System.assertEquals(false, serversBuyNowResponseOrderDetails2.equals(serversBuyNowResponseOrderDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails1 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails2 = new OASServersBuyNowResponseOrderDetails();

        System.assertEquals(serversBuyNowResponseOrderDetails1.hashCode(), serversBuyNowResponseOrderDetails1.hashCode());
        System.assertEquals(serversBuyNowResponseOrderDetails2.hashCode(), serversBuyNowResponseOrderDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails1 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails2 = OASServersBuyNowResponseOrderDetails.getExample();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails3 = new OASServersBuyNowResponseOrderDetails();
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails4 = new OASServersBuyNowResponseOrderDetails();

        System.assert(serversBuyNowResponseOrderDetails1.equals(serversBuyNowResponseOrderDetails2));
        System.assert(serversBuyNowResponseOrderDetails3.equals(serversBuyNowResponseOrderDetails4));
        System.assertEquals(serversBuyNowResponseOrderDetails1.hashCode(), serversBuyNowResponseOrderDetails2.hashCode());
        System.assertEquals(serversBuyNowResponseOrderDetails3.hashCode(), serversBuyNowResponseOrderDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails = new OASServersBuyNowResponseOrderDetails();
        Map<String, String> x-property-mappings = serversBuyNowResponseOrderDetails.getx-property-mappings();
        System.assertEquals('serviceId', x-property-mappings.get('service_id'));
        System.assertEquals('invoiceId', x-property-mappings.get('invoice_id'));
    }
}
