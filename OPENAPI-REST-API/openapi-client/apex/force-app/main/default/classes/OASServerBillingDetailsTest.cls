@isTest
private class OASServerBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerBillingDetails serverBillingDetails1 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails2 = serverBillingDetails1;
        OASServerBillingDetails serverBillingDetails3 = new OASServerBillingDetails();
        OASServerBillingDetails serverBillingDetails4 = serverBillingDetails3;

        System.assert(serverBillingDetails1.equals(serverBillingDetails2));
        System.assert(serverBillingDetails2.equals(serverBillingDetails1));
        System.assert(serverBillingDetails1.equals(serverBillingDetails1));
        System.assert(serverBillingDetails3.equals(serverBillingDetails4));
        System.assert(serverBillingDetails4.equals(serverBillingDetails3));
        System.assert(serverBillingDetails3.equals(serverBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerBillingDetails serverBillingDetails1 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails2 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails3 = new OASServerBillingDetails();
        OASServerBillingDetails serverBillingDetails4 = new OASServerBillingDetails();

        System.assert(serverBillingDetails1.equals(serverBillingDetails2));
        System.assert(serverBillingDetails2.equals(serverBillingDetails1));
        System.assert(serverBillingDetails3.equals(serverBillingDetails4));
        System.assert(serverBillingDetails4.equals(serverBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerBillingDetails serverBillingDetails1 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails2 = new OASServerBillingDetails();

        System.assertEquals(false, serverBillingDetails1.equals('foo'));
        System.assertEquals(false, serverBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerBillingDetails serverBillingDetails1 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails2 = new OASServerBillingDetails();
        OASServerBillingDetails serverBillingDetails3;

        System.assertEquals(false, serverBillingDetails1.equals(serverBillingDetails3));
        System.assertEquals(false, serverBillingDetails2.equals(serverBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerBillingDetails serverBillingDetails1 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails2 = new OASServerBillingDetails();

        System.assertEquals(serverBillingDetails1.hashCode(), serverBillingDetails1.hashCode());
        System.assertEquals(serverBillingDetails2.hashCode(), serverBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerBillingDetails serverBillingDetails1 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails2 = OASServerBillingDetails.getExample();
        OASServerBillingDetails serverBillingDetails3 = new OASServerBillingDetails();
        OASServerBillingDetails serverBillingDetails4 = new OASServerBillingDetails();

        System.assert(serverBillingDetails1.equals(serverBillingDetails2));
        System.assert(serverBillingDetails3.equals(serverBillingDetails4));
        System.assertEquals(serverBillingDetails1.hashCode(), serverBillingDetails2.hashCode());
        System.assertEquals(serverBillingDetails3.hashCode(), serverBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerBillingDetails serverBillingDetails = new OASServerBillingDetails();
        Map<String, String> x-property-mappings = serverBillingDetails.getx-property-mappings();
        System.assertEquals('serviceLastInvoiceDate', x-property-mappings.get('service_last_invoice_date'));
        System.assertEquals('servicePaymentStatus', x-property-mappings.get('service_payment_status'));
        System.assertEquals('serviceFrequency', x-property-mappings.get('service_frequency'));
        System.assertEquals('nextDate', x-property-mappings.get('next_date'));
        System.assertEquals('serviceNextInvoiceDate', x-property-mappings.get('service_next_invoice_date'));
        System.assertEquals('serviceCurrency', x-property-mappings.get('service_currency'));
        System.assertEquals('serviceCurrencySymbol', x-property-mappings.get('service_currency_symbol'));
        System.assertEquals('serviceCostInfo', x-property-mappings.get('service_cost_info'));
        System.assertEquals('serviceExtra', x-property-mappings.get('service_extra'));
        System.assertEquals('serviceExtraJson', x-property-mappings.get('service_extra_json'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServerBillingDetails serverBillingDetails = new OASServerBillingDetails();
        System.assertEquals(new List<String>(), serverBillingDetails.serviceExtra);
        System.assertEquals(null, serverBillingDetails.serviceLastInvoiceDate);
        System.assertEquals(null, serverBillingDetails.servicePaymentStatus);
        System.assertEquals(null, serverBillingDetails.serviceFrequency);
        System.assertEquals(null, serverBillingDetails.nextDate);
        System.assertEquals(null, serverBillingDetails.serviceNextInvoiceDate);
        System.assertEquals(null, serverBillingDetails.serviceCurrency);
        System.assertEquals(null, serverBillingDetails.serviceCurrencySymbol);
        System.assertEquals(null, serverBillingDetails.serviceCostInfo);
        System.assertEquals(null, serverBillingDetails.serviceExtraJson);
    }
}
