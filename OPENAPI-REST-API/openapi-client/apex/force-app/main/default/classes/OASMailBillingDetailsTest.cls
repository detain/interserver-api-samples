@isTest
private class OASMailBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailBillingDetails mailBillingDetails1 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails2 = mailBillingDetails1;
        OASMailBillingDetails mailBillingDetails3 = new OASMailBillingDetails();
        OASMailBillingDetails mailBillingDetails4 = mailBillingDetails3;

        System.assert(mailBillingDetails1.equals(mailBillingDetails2));
        System.assert(mailBillingDetails2.equals(mailBillingDetails1));
        System.assert(mailBillingDetails1.equals(mailBillingDetails1));
        System.assert(mailBillingDetails3.equals(mailBillingDetails4));
        System.assert(mailBillingDetails4.equals(mailBillingDetails3));
        System.assert(mailBillingDetails3.equals(mailBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailBillingDetails mailBillingDetails1 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails2 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails3 = new OASMailBillingDetails();
        OASMailBillingDetails mailBillingDetails4 = new OASMailBillingDetails();

        System.assert(mailBillingDetails1.equals(mailBillingDetails2));
        System.assert(mailBillingDetails2.equals(mailBillingDetails1));
        System.assert(mailBillingDetails3.equals(mailBillingDetails4));
        System.assert(mailBillingDetails4.equals(mailBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailBillingDetails mailBillingDetails1 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails2 = new OASMailBillingDetails();

        System.assertEquals(false, mailBillingDetails1.equals('foo'));
        System.assertEquals(false, mailBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailBillingDetails mailBillingDetails1 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails2 = new OASMailBillingDetails();
        OASMailBillingDetails mailBillingDetails3;

        System.assertEquals(false, mailBillingDetails1.equals(mailBillingDetails3));
        System.assertEquals(false, mailBillingDetails2.equals(mailBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailBillingDetails mailBillingDetails1 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails2 = new OASMailBillingDetails();

        System.assertEquals(mailBillingDetails1.hashCode(), mailBillingDetails1.hashCode());
        System.assertEquals(mailBillingDetails2.hashCode(), mailBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailBillingDetails mailBillingDetails1 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails2 = OASMailBillingDetails.getExample();
        OASMailBillingDetails mailBillingDetails3 = new OASMailBillingDetails();
        OASMailBillingDetails mailBillingDetails4 = new OASMailBillingDetails();

        System.assert(mailBillingDetails1.equals(mailBillingDetails2));
        System.assert(mailBillingDetails3.equals(mailBillingDetails4));
        System.assertEquals(mailBillingDetails1.hashCode(), mailBillingDetails2.hashCode());
        System.assertEquals(mailBillingDetails3.hashCode(), mailBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailBillingDetails mailBillingDetails = new OASMailBillingDetails();
        Map<String, String> x-property-mappings = mailBillingDetails.getx-property-mappings();
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
        OASMailBillingDetails mailBillingDetails = new OASMailBillingDetails();
        System.assertEquals(new List<String>(), mailBillingDetails.serviceExtra);
        System.assertEquals(null, mailBillingDetails.serviceLastInvoiceDate);
        System.assertEquals(null, mailBillingDetails.servicePaymentStatus);
        System.assertEquals(null, mailBillingDetails.serviceFrequency);
        System.assertEquals(null, mailBillingDetails.nextDate);
        System.assertEquals(null, mailBillingDetails.serviceNextInvoiceDate);
        System.assertEquals(null, mailBillingDetails.serviceCurrency);
        System.assertEquals(null, mailBillingDetails.serviceCurrencySymbol);
        System.assertEquals(null, mailBillingDetails.serviceCostInfo);
        System.assertEquals(null, mailBillingDetails.serviceExtraJson);
    }
}
