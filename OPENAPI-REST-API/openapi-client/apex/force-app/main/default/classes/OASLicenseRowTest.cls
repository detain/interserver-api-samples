@isTest
private class OASLicenseRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseRow licenseRow1 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow2 = licenseRow1;
        OASLicenseRow licenseRow3 = new OASLicenseRow();
        OASLicenseRow licenseRow4 = licenseRow3;

        System.assert(licenseRow1.equals(licenseRow2));
        System.assert(licenseRow2.equals(licenseRow1));
        System.assert(licenseRow1.equals(licenseRow1));
        System.assert(licenseRow3.equals(licenseRow4));
        System.assert(licenseRow4.equals(licenseRow3));
        System.assert(licenseRow3.equals(licenseRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseRow licenseRow1 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow2 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow3 = new OASLicenseRow();
        OASLicenseRow licenseRow4 = new OASLicenseRow();

        System.assert(licenseRow1.equals(licenseRow2));
        System.assert(licenseRow2.equals(licenseRow1));
        System.assert(licenseRow3.equals(licenseRow4));
        System.assert(licenseRow4.equals(licenseRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseRow licenseRow1 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow2 = new OASLicenseRow();

        System.assertEquals(false, licenseRow1.equals('foo'));
        System.assertEquals(false, licenseRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseRow licenseRow1 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow2 = new OASLicenseRow();
        OASLicenseRow licenseRow3;

        System.assertEquals(false, licenseRow1.equals(licenseRow3));
        System.assertEquals(false, licenseRow2.equals(licenseRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseRow licenseRow1 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow2 = new OASLicenseRow();

        System.assertEquals(licenseRow1.hashCode(), licenseRow1.hashCode());
        System.assertEquals(licenseRow2.hashCode(), licenseRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseRow licenseRow1 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow2 = OASLicenseRow.getExample();
        OASLicenseRow licenseRow3 = new OASLicenseRow();
        OASLicenseRow licenseRow4 = new OASLicenseRow();

        System.assert(licenseRow1.equals(licenseRow2));
        System.assert(licenseRow3.equals(licenseRow4));
        System.assertEquals(licenseRow1.hashCode(), licenseRow2.hashCode());
        System.assertEquals(licenseRow3.hashCode(), licenseRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicenseRow licenseRow = new OASLicenseRow();
        Map<String, String> x-property-mappings = licenseRow.getx-property-mappings();
        System.assertEquals('licenseId', x-property-mappings.get('license_id'));
        System.assertEquals('licenseHostname', x-property-mappings.get('license_hostname'));
        System.assertEquals('licenseIp', x-property-mappings.get('license_ip'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('licenseStatus', x-property-mappings.get('license_status'));
        System.assertEquals('invoicesPaid', x-property-mappings.get('invoices_paid'));
        System.assertEquals('invoicesDate', x-property-mappings.get('invoices_date'));
    }
}
