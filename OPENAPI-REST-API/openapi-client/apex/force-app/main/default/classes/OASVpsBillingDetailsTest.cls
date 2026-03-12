@isTest
private class OASVpsBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsBillingDetails vpsBillingDetails1 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails2 = vpsBillingDetails1;
        OASVpsBillingDetails vpsBillingDetails3 = new OASVpsBillingDetails();
        OASVpsBillingDetails vpsBillingDetails4 = vpsBillingDetails3;

        System.assert(vpsBillingDetails1.equals(vpsBillingDetails2));
        System.assert(vpsBillingDetails2.equals(vpsBillingDetails1));
        System.assert(vpsBillingDetails1.equals(vpsBillingDetails1));
        System.assert(vpsBillingDetails3.equals(vpsBillingDetails4));
        System.assert(vpsBillingDetails4.equals(vpsBillingDetails3));
        System.assert(vpsBillingDetails3.equals(vpsBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsBillingDetails vpsBillingDetails1 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails2 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails3 = new OASVpsBillingDetails();
        OASVpsBillingDetails vpsBillingDetails4 = new OASVpsBillingDetails();

        System.assert(vpsBillingDetails1.equals(vpsBillingDetails2));
        System.assert(vpsBillingDetails2.equals(vpsBillingDetails1));
        System.assert(vpsBillingDetails3.equals(vpsBillingDetails4));
        System.assert(vpsBillingDetails4.equals(vpsBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsBillingDetails vpsBillingDetails1 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails2 = new OASVpsBillingDetails();

        System.assertEquals(false, vpsBillingDetails1.equals('foo'));
        System.assertEquals(false, vpsBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsBillingDetails vpsBillingDetails1 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails2 = new OASVpsBillingDetails();
        OASVpsBillingDetails vpsBillingDetails3;

        System.assertEquals(false, vpsBillingDetails1.equals(vpsBillingDetails3));
        System.assertEquals(false, vpsBillingDetails2.equals(vpsBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsBillingDetails vpsBillingDetails1 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails2 = new OASVpsBillingDetails();

        System.assertEquals(vpsBillingDetails1.hashCode(), vpsBillingDetails1.hashCode());
        System.assertEquals(vpsBillingDetails2.hashCode(), vpsBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsBillingDetails vpsBillingDetails1 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails2 = OASVpsBillingDetails.getExample();
        OASVpsBillingDetails vpsBillingDetails3 = new OASVpsBillingDetails();
        OASVpsBillingDetails vpsBillingDetails4 = new OASVpsBillingDetails();

        System.assert(vpsBillingDetails1.equals(vpsBillingDetails2));
        System.assert(vpsBillingDetails3.equals(vpsBillingDetails4));
        System.assertEquals(vpsBillingDetails1.hashCode(), vpsBillingDetails2.hashCode());
        System.assertEquals(vpsBillingDetails3.hashCode(), vpsBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsBillingDetails vpsBillingDetails = new OASVpsBillingDetails();
        Map<String, String> x-property-mappings = vpsBillingDetails.getx-property-mappings();
        System.assertEquals('serviceLastInvoiceDate', x-property-mappings.get('service_last_invoice_date'));
        System.assertEquals('servicePaymentStatus', x-property-mappings.get('service_payment_status'));
        System.assertEquals('serviceFrequency', x-property-mappings.get('service_frequency'));
        System.assertEquals('nextDate', x-property-mappings.get('next_date'));
        System.assertEquals('serviceNextInvoiceDate', x-property-mappings.get('service_next_invoice_date'));
        System.assertEquals('serviceCurrency', x-property-mappings.get('service_currency'));
        System.assertEquals('serviceCurrencySymbol', x-property-mappings.get('service_currency_symbol'));
        System.assertEquals('serviceCoupon', x-property-mappings.get('service_coupon'));
        System.assertEquals('serviceCostInfo', x-property-mappings.get('service_cost_info'));
        System.assertEquals('serviceExtra', x-property-mappings.get('service_extra'));
        System.assertEquals('serviceExtraJson', x-property-mappings.get('service_extra_json'));
    }
}
