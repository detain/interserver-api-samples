@isTest
private class OASLicenseExtraInfoTablesTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseExtraInfoTables licenseExtraInfoTables1 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables2 = licenseExtraInfoTables1;
        OASLicenseExtraInfoTables licenseExtraInfoTables3 = new OASLicenseExtraInfoTables();
        OASLicenseExtraInfoTables licenseExtraInfoTables4 = licenseExtraInfoTables3;

        System.assert(licenseExtraInfoTables1.equals(licenseExtraInfoTables2));
        System.assert(licenseExtraInfoTables2.equals(licenseExtraInfoTables1));
        System.assert(licenseExtraInfoTables1.equals(licenseExtraInfoTables1));
        System.assert(licenseExtraInfoTables3.equals(licenseExtraInfoTables4));
        System.assert(licenseExtraInfoTables4.equals(licenseExtraInfoTables3));
        System.assert(licenseExtraInfoTables3.equals(licenseExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseExtraInfoTables licenseExtraInfoTables1 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables2 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables3 = new OASLicenseExtraInfoTables();
        OASLicenseExtraInfoTables licenseExtraInfoTables4 = new OASLicenseExtraInfoTables();

        System.assert(licenseExtraInfoTables1.equals(licenseExtraInfoTables2));
        System.assert(licenseExtraInfoTables2.equals(licenseExtraInfoTables1));
        System.assert(licenseExtraInfoTables3.equals(licenseExtraInfoTables4));
        System.assert(licenseExtraInfoTables4.equals(licenseExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseExtraInfoTables licenseExtraInfoTables1 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables2 = new OASLicenseExtraInfoTables();

        System.assertEquals(false, licenseExtraInfoTables1.equals('foo'));
        System.assertEquals(false, licenseExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseExtraInfoTables licenseExtraInfoTables1 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables2 = new OASLicenseExtraInfoTables();
        OASLicenseExtraInfoTables licenseExtraInfoTables3;

        System.assertEquals(false, licenseExtraInfoTables1.equals(licenseExtraInfoTables3));
        System.assertEquals(false, licenseExtraInfoTables2.equals(licenseExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseExtraInfoTables licenseExtraInfoTables1 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables2 = new OASLicenseExtraInfoTables();

        System.assertEquals(licenseExtraInfoTables1.hashCode(), licenseExtraInfoTables1.hashCode());
        System.assertEquals(licenseExtraInfoTables2.hashCode(), licenseExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseExtraInfoTables licenseExtraInfoTables1 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables2 = OASLicenseExtraInfoTables.getExample();
        OASLicenseExtraInfoTables licenseExtraInfoTables3 = new OASLicenseExtraInfoTables();
        OASLicenseExtraInfoTables licenseExtraInfoTables4 = new OASLicenseExtraInfoTables();

        System.assert(licenseExtraInfoTables1.equals(licenseExtraInfoTables2));
        System.assert(licenseExtraInfoTables3.equals(licenseExtraInfoTables4));
        System.assertEquals(licenseExtraInfoTables1.hashCode(), licenseExtraInfoTables2.hashCode());
        System.assertEquals(licenseExtraInfoTables3.hashCode(), licenseExtraInfoTables4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicenseExtraInfoTables licenseExtraInfoTables = new OASLicenseExtraInfoTables();
        Map<String, String> x-property-mappings = licenseExtraInfoTables.getx-property-mappings();
        System.assertEquals('ipInfo', x-property-mappings.get('ip_info'));
    }
}
