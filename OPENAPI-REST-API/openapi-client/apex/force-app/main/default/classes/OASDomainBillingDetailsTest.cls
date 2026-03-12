@isTest
private class OASDomainBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainBillingDetails domainBillingDetails1 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails2 = domainBillingDetails1;
        OASDomainBillingDetails domainBillingDetails3 = new OASDomainBillingDetails();
        OASDomainBillingDetails domainBillingDetails4 = domainBillingDetails3;

        System.assert(domainBillingDetails1.equals(domainBillingDetails2));
        System.assert(domainBillingDetails2.equals(domainBillingDetails1));
        System.assert(domainBillingDetails1.equals(domainBillingDetails1));
        System.assert(domainBillingDetails3.equals(domainBillingDetails4));
        System.assert(domainBillingDetails4.equals(domainBillingDetails3));
        System.assert(domainBillingDetails3.equals(domainBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainBillingDetails domainBillingDetails1 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails2 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails3 = new OASDomainBillingDetails();
        OASDomainBillingDetails domainBillingDetails4 = new OASDomainBillingDetails();

        System.assert(domainBillingDetails1.equals(domainBillingDetails2));
        System.assert(domainBillingDetails2.equals(domainBillingDetails1));
        System.assert(domainBillingDetails3.equals(domainBillingDetails4));
        System.assert(domainBillingDetails4.equals(domainBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainBillingDetails domainBillingDetails1 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails2 = new OASDomainBillingDetails();

        System.assertEquals(false, domainBillingDetails1.equals('foo'));
        System.assertEquals(false, domainBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainBillingDetails domainBillingDetails1 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails2 = new OASDomainBillingDetails();
        OASDomainBillingDetails domainBillingDetails3;

        System.assertEquals(false, domainBillingDetails1.equals(domainBillingDetails3));
        System.assertEquals(false, domainBillingDetails2.equals(domainBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainBillingDetails domainBillingDetails1 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails2 = new OASDomainBillingDetails();

        System.assertEquals(domainBillingDetails1.hashCode(), domainBillingDetails1.hashCode());
        System.assertEquals(domainBillingDetails2.hashCode(), domainBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainBillingDetails domainBillingDetails1 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails2 = OASDomainBillingDetails.getExample();
        OASDomainBillingDetails domainBillingDetails3 = new OASDomainBillingDetails();
        OASDomainBillingDetails domainBillingDetails4 = new OASDomainBillingDetails();

        System.assert(domainBillingDetails1.equals(domainBillingDetails2));
        System.assert(domainBillingDetails3.equals(domainBillingDetails4));
        System.assertEquals(domainBillingDetails1.hashCode(), domainBillingDetails2.hashCode());
        System.assertEquals(domainBillingDetails3.hashCode(), domainBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainBillingDetails domainBillingDetails = new OASDomainBillingDetails();
        Map<String, String> x-property-mappings = domainBillingDetails.getx-property-mappings();
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
}
