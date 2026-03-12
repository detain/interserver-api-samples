@isTest
private class OASLicenseBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseBillingDetails licenseBillingDetails1 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails2 = licenseBillingDetails1;
        OASLicenseBillingDetails licenseBillingDetails3 = new OASLicenseBillingDetails();
        OASLicenseBillingDetails licenseBillingDetails4 = licenseBillingDetails3;

        System.assert(licenseBillingDetails1.equals(licenseBillingDetails2));
        System.assert(licenseBillingDetails2.equals(licenseBillingDetails1));
        System.assert(licenseBillingDetails1.equals(licenseBillingDetails1));
        System.assert(licenseBillingDetails3.equals(licenseBillingDetails4));
        System.assert(licenseBillingDetails4.equals(licenseBillingDetails3));
        System.assert(licenseBillingDetails3.equals(licenseBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseBillingDetails licenseBillingDetails1 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails2 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails3 = new OASLicenseBillingDetails();
        OASLicenseBillingDetails licenseBillingDetails4 = new OASLicenseBillingDetails();

        System.assert(licenseBillingDetails1.equals(licenseBillingDetails2));
        System.assert(licenseBillingDetails2.equals(licenseBillingDetails1));
        System.assert(licenseBillingDetails3.equals(licenseBillingDetails4));
        System.assert(licenseBillingDetails4.equals(licenseBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseBillingDetails licenseBillingDetails1 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails2 = new OASLicenseBillingDetails();

        System.assertEquals(false, licenseBillingDetails1.equals('foo'));
        System.assertEquals(false, licenseBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseBillingDetails licenseBillingDetails1 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails2 = new OASLicenseBillingDetails();
        OASLicenseBillingDetails licenseBillingDetails3;

        System.assertEquals(false, licenseBillingDetails1.equals(licenseBillingDetails3));
        System.assertEquals(false, licenseBillingDetails2.equals(licenseBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseBillingDetails licenseBillingDetails1 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails2 = new OASLicenseBillingDetails();

        System.assertEquals(licenseBillingDetails1.hashCode(), licenseBillingDetails1.hashCode());
        System.assertEquals(licenseBillingDetails2.hashCode(), licenseBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseBillingDetails licenseBillingDetails1 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails2 = OASLicenseBillingDetails.getExample();
        OASLicenseBillingDetails licenseBillingDetails3 = new OASLicenseBillingDetails();
        OASLicenseBillingDetails licenseBillingDetails4 = new OASLicenseBillingDetails();

        System.assert(licenseBillingDetails1.equals(licenseBillingDetails2));
        System.assert(licenseBillingDetails3.equals(licenseBillingDetails4));
        System.assertEquals(licenseBillingDetails1.hashCode(), licenseBillingDetails2.hashCode());
        System.assertEquals(licenseBillingDetails3.hashCode(), licenseBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicenseBillingDetails licenseBillingDetails = new OASLicenseBillingDetails();
        Map<String, String> x-property-mappings = licenseBillingDetails.getx-property-mappings();
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

    @isTest
    private static void defaultValuesPopulated() {
        OASLicenseBillingDetails licenseBillingDetails = new OASLicenseBillingDetails();
        System.assertEquals(new List<String>(), licenseBillingDetails.serviceExtra);
        System.assertEquals(null, licenseBillingDetails.serviceLastInvoiceDate);
        System.assertEquals(null, licenseBillingDetails.servicePaymentStatus);
        System.assertEquals(null, licenseBillingDetails.serviceFrequency);
        System.assertEquals(null, licenseBillingDetails.nextDate);
        System.assertEquals(null, licenseBillingDetails.serviceNextInvoiceDate);
        System.assertEquals(null, licenseBillingDetails.serviceCurrency);
        System.assertEquals(null, licenseBillingDetails.serviceCurrencySymbol);
        System.assertEquals(null, licenseBillingDetails.serviceCoupon);
        System.assertEquals(null, licenseBillingDetails.serviceCostInfo);
        System.assertEquals(null, licenseBillingDetails.serviceExtraJson);
    }
}
