@isTest
private class OASGetScrubIpDetails200ResponseBilliTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails1 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails2 = getScrubIpDetails200ResponseBillingDetails1;
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails3 = new OASGetScrubIpDetails200ResponseBilli();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails4 = getScrubIpDetails200ResponseBillingDetails3;

        System.assert(getScrubIpDetails200ResponseBillingDetails1.equals(getScrubIpDetails200ResponseBillingDetails2));
        System.assert(getScrubIpDetails200ResponseBillingDetails2.equals(getScrubIpDetails200ResponseBillingDetails1));
        System.assert(getScrubIpDetails200ResponseBillingDetails1.equals(getScrubIpDetails200ResponseBillingDetails1));
        System.assert(getScrubIpDetails200ResponseBillingDetails3.equals(getScrubIpDetails200ResponseBillingDetails4));
        System.assert(getScrubIpDetails200ResponseBillingDetails4.equals(getScrubIpDetails200ResponseBillingDetails3));
        System.assert(getScrubIpDetails200ResponseBillingDetails3.equals(getScrubIpDetails200ResponseBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails1 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails2 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails3 = new OASGetScrubIpDetails200ResponseBilli();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails4 = new OASGetScrubIpDetails200ResponseBilli();

        System.assert(getScrubIpDetails200ResponseBillingDetails1.equals(getScrubIpDetails200ResponseBillingDetails2));
        System.assert(getScrubIpDetails200ResponseBillingDetails2.equals(getScrubIpDetails200ResponseBillingDetails1));
        System.assert(getScrubIpDetails200ResponseBillingDetails3.equals(getScrubIpDetails200ResponseBillingDetails4));
        System.assert(getScrubIpDetails200ResponseBillingDetails4.equals(getScrubIpDetails200ResponseBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails1 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails2 = new OASGetScrubIpDetails200ResponseBilli();

        System.assertEquals(false, getScrubIpDetails200ResponseBillingDetails1.equals('foo'));
        System.assertEquals(false, getScrubIpDetails200ResponseBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails1 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails2 = new OASGetScrubIpDetails200ResponseBilli();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails3;

        System.assertEquals(false, getScrubIpDetails200ResponseBillingDetails1.equals(getScrubIpDetails200ResponseBillingDetails3));
        System.assertEquals(false, getScrubIpDetails200ResponseBillingDetails2.equals(getScrubIpDetails200ResponseBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails1 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails2 = new OASGetScrubIpDetails200ResponseBilli();

        System.assertEquals(getScrubIpDetails200ResponseBillingDetails1.hashCode(), getScrubIpDetails200ResponseBillingDetails1.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseBillingDetails2.hashCode(), getScrubIpDetails200ResponseBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails1 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails2 = OASGetScrubIpDetails200ResponseBilli.getExample();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails3 = new OASGetScrubIpDetails200ResponseBilli();
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails4 = new OASGetScrubIpDetails200ResponseBilli();

        System.assert(getScrubIpDetails200ResponseBillingDetails1.equals(getScrubIpDetails200ResponseBillingDetails2));
        System.assert(getScrubIpDetails200ResponseBillingDetails3.equals(getScrubIpDetails200ResponseBillingDetails4));
        System.assertEquals(getScrubIpDetails200ResponseBillingDetails1.hashCode(), getScrubIpDetails200ResponseBillingDetails2.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseBillingDetails3.hashCode(), getScrubIpDetails200ResponseBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetScrubIpDetails200ResponseBilli getScrubIpDetails200ResponseBillingDetails = new OASGetScrubIpDetails200ResponseBilli();
        Map<String, String> x-property-mappings = getScrubIpDetails200ResponseBillingDetails.getx-property-mappings();
        System.assertEquals('serviceLastInvoiceDate', x-property-mappings.get('service_last_invoice_date'));
        System.assertEquals('servicePaymentStatus', x-property-mappings.get('service_payment_status'));
        System.assertEquals('serviceFrequency', x-property-mappings.get('service_frequency'));
        System.assertEquals('nextDate', x-property-mappings.get('next_date'));
        System.assertEquals('serviceNextInvoiceDate', x-property-mappings.get('service_next_invoice_date'));
        System.assertEquals('serviceCurrency', x-property-mappings.get('service_currency'));
        System.assertEquals('serviceCurrencySymbol', x-property-mappings.get('service_currency_symbol'));
        System.assertEquals('serviceCostInfo', x-property-mappings.get('service_cost_info'));
    }
}
