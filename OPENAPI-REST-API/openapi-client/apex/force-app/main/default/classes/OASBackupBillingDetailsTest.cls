@isTest
private class OASBackupBillingDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupBillingDetails backupBillingDetails1 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails2 = backupBillingDetails1;
        OASBackupBillingDetails backupBillingDetails3 = new OASBackupBillingDetails();
        OASBackupBillingDetails backupBillingDetails4 = backupBillingDetails3;

        System.assert(backupBillingDetails1.equals(backupBillingDetails2));
        System.assert(backupBillingDetails2.equals(backupBillingDetails1));
        System.assert(backupBillingDetails1.equals(backupBillingDetails1));
        System.assert(backupBillingDetails3.equals(backupBillingDetails4));
        System.assert(backupBillingDetails4.equals(backupBillingDetails3));
        System.assert(backupBillingDetails3.equals(backupBillingDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupBillingDetails backupBillingDetails1 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails2 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails3 = new OASBackupBillingDetails();
        OASBackupBillingDetails backupBillingDetails4 = new OASBackupBillingDetails();

        System.assert(backupBillingDetails1.equals(backupBillingDetails2));
        System.assert(backupBillingDetails2.equals(backupBillingDetails1));
        System.assert(backupBillingDetails3.equals(backupBillingDetails4));
        System.assert(backupBillingDetails4.equals(backupBillingDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupBillingDetails backupBillingDetails1 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails2 = new OASBackupBillingDetails();

        System.assertEquals(false, backupBillingDetails1.equals('foo'));
        System.assertEquals(false, backupBillingDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupBillingDetails backupBillingDetails1 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails2 = new OASBackupBillingDetails();
        OASBackupBillingDetails backupBillingDetails3;

        System.assertEquals(false, backupBillingDetails1.equals(backupBillingDetails3));
        System.assertEquals(false, backupBillingDetails2.equals(backupBillingDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupBillingDetails backupBillingDetails1 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails2 = new OASBackupBillingDetails();

        System.assertEquals(backupBillingDetails1.hashCode(), backupBillingDetails1.hashCode());
        System.assertEquals(backupBillingDetails2.hashCode(), backupBillingDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupBillingDetails backupBillingDetails1 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails2 = OASBackupBillingDetails.getExample();
        OASBackupBillingDetails backupBillingDetails3 = new OASBackupBillingDetails();
        OASBackupBillingDetails backupBillingDetails4 = new OASBackupBillingDetails();

        System.assert(backupBillingDetails1.equals(backupBillingDetails2));
        System.assert(backupBillingDetails3.equals(backupBillingDetails4));
        System.assertEquals(backupBillingDetails1.hashCode(), backupBillingDetails2.hashCode());
        System.assertEquals(backupBillingDetails3.hashCode(), backupBillingDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupBillingDetails backupBillingDetails = new OASBackupBillingDetails();
        Map<String, String> x-property-mappings = backupBillingDetails.getx-property-mappings();
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
