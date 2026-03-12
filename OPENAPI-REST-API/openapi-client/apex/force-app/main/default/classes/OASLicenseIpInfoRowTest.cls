@isTest
private class OASLicenseIpInfoRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseIpInfoRow licenseIpInfoRow1 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow2 = licenseIpInfoRow1;
        OASLicenseIpInfoRow licenseIpInfoRow3 = new OASLicenseIpInfoRow();
        OASLicenseIpInfoRow licenseIpInfoRow4 = licenseIpInfoRow3;

        System.assert(licenseIpInfoRow1.equals(licenseIpInfoRow2));
        System.assert(licenseIpInfoRow2.equals(licenseIpInfoRow1));
        System.assert(licenseIpInfoRow1.equals(licenseIpInfoRow1));
        System.assert(licenseIpInfoRow3.equals(licenseIpInfoRow4));
        System.assert(licenseIpInfoRow4.equals(licenseIpInfoRow3));
        System.assert(licenseIpInfoRow3.equals(licenseIpInfoRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseIpInfoRow licenseIpInfoRow1 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow2 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow3 = new OASLicenseIpInfoRow();
        OASLicenseIpInfoRow licenseIpInfoRow4 = new OASLicenseIpInfoRow();

        System.assert(licenseIpInfoRow1.equals(licenseIpInfoRow2));
        System.assert(licenseIpInfoRow2.equals(licenseIpInfoRow1));
        System.assert(licenseIpInfoRow3.equals(licenseIpInfoRow4));
        System.assert(licenseIpInfoRow4.equals(licenseIpInfoRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseIpInfoRow licenseIpInfoRow1 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow2 = new OASLicenseIpInfoRow();

        System.assertEquals(false, licenseIpInfoRow1.equals('foo'));
        System.assertEquals(false, licenseIpInfoRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseIpInfoRow licenseIpInfoRow1 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow2 = new OASLicenseIpInfoRow();
        OASLicenseIpInfoRow licenseIpInfoRow3;

        System.assertEquals(false, licenseIpInfoRow1.equals(licenseIpInfoRow3));
        System.assertEquals(false, licenseIpInfoRow2.equals(licenseIpInfoRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseIpInfoRow licenseIpInfoRow1 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow2 = new OASLicenseIpInfoRow();

        System.assertEquals(licenseIpInfoRow1.hashCode(), licenseIpInfoRow1.hashCode());
        System.assertEquals(licenseIpInfoRow2.hashCode(), licenseIpInfoRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseIpInfoRow licenseIpInfoRow1 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow2 = OASLicenseIpInfoRow.getExample();
        OASLicenseIpInfoRow licenseIpInfoRow3 = new OASLicenseIpInfoRow();
        OASLicenseIpInfoRow licenseIpInfoRow4 = new OASLicenseIpInfoRow();

        System.assert(licenseIpInfoRow1.equals(licenseIpInfoRow2));
        System.assert(licenseIpInfoRow3.equals(licenseIpInfoRow4));
        System.assertEquals(licenseIpInfoRow1.hashCode(), licenseIpInfoRow2.hashCode());
        System.assertEquals(licenseIpInfoRow3.hashCode(), licenseIpInfoRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicenseIpInfoRow licenseIpInfoRow = new OASLicenseIpInfoRow();
        Map<String, String> x-property-mappings = licenseIpInfoRow.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
