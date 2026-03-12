@isTest
private class OASWebsiteBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteBillingDetails websiteBillingDetails1 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails2 = websiteBillingDetails1;
        OASWebsiteBillingDetails websiteBillingDetails3 = new OASWebsiteBillingDetails();
        OASWebsiteBillingDetails websiteBillingDetails4 = websiteBillingDetails3;

        System.assert(websiteBillingDetails1.equals(websiteBillingDetails2));
        System.assert(websiteBillingDetails2.equals(websiteBillingDetails1));
        System.assert(websiteBillingDetails1.equals(websiteBillingDetails1));
        System.assert(websiteBillingDetails3.equals(websiteBillingDetails4));
        System.assert(websiteBillingDetails4.equals(websiteBillingDetails3));
        System.assert(websiteBillingDetails3.equals(websiteBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteBillingDetails websiteBillingDetails1 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails2 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails3 = new OASWebsiteBillingDetails();
        OASWebsiteBillingDetails websiteBillingDetails4 = new OASWebsiteBillingDetails();

        System.assert(websiteBillingDetails1.equals(websiteBillingDetails2));
        System.assert(websiteBillingDetails2.equals(websiteBillingDetails1));
        System.assert(websiteBillingDetails3.equals(websiteBillingDetails4));
        System.assert(websiteBillingDetails4.equals(websiteBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteBillingDetails websiteBillingDetails1 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails2 = new OASWebsiteBillingDetails();

        System.assertEquals(false, websiteBillingDetails1.equals('foo'));
        System.assertEquals(false, websiteBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteBillingDetails websiteBillingDetails1 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails2 = new OASWebsiteBillingDetails();
        OASWebsiteBillingDetails websiteBillingDetails3;

        System.assertEquals(false, websiteBillingDetails1.equals(websiteBillingDetails3));
        System.assertEquals(false, websiteBillingDetails2.equals(websiteBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteBillingDetails websiteBillingDetails1 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails2 = new OASWebsiteBillingDetails();

        System.assertEquals(websiteBillingDetails1.hashCode(), websiteBillingDetails1.hashCode());
        System.assertEquals(websiteBillingDetails2.hashCode(), websiteBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteBillingDetails websiteBillingDetails1 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails2 = OASWebsiteBillingDetails.getExample();
        OASWebsiteBillingDetails websiteBillingDetails3 = new OASWebsiteBillingDetails();
        OASWebsiteBillingDetails websiteBillingDetails4 = new OASWebsiteBillingDetails();

        System.assert(websiteBillingDetails1.equals(websiteBillingDetails2));
        System.assert(websiteBillingDetails3.equals(websiteBillingDetails4));
        System.assertEquals(websiteBillingDetails1.hashCode(), websiteBillingDetails2.hashCode());
        System.assertEquals(websiteBillingDetails3.hashCode(), websiteBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsiteBillingDetails websiteBillingDetails = new OASWebsiteBillingDetails();
        Map<String, String> x-property-mappings = websiteBillingDetails.getx-property-mappings();
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
