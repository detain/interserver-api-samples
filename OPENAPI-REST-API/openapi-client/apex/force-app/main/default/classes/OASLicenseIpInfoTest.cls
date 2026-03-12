@isTest
private class OASLicenseIpInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseIpInfo licenseIpInfo1 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo2 = licenseIpInfo1;
        OASLicenseIpInfo licenseIpInfo3 = new OASLicenseIpInfo();
        OASLicenseIpInfo licenseIpInfo4 = licenseIpInfo3;

        System.assert(licenseIpInfo1.equals(licenseIpInfo2));
        System.assert(licenseIpInfo2.equals(licenseIpInfo1));
        System.assert(licenseIpInfo1.equals(licenseIpInfo1));
        System.assert(licenseIpInfo3.equals(licenseIpInfo4));
        System.assert(licenseIpInfo4.equals(licenseIpInfo3));
        System.assert(licenseIpInfo3.equals(licenseIpInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseIpInfo licenseIpInfo1 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo2 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo3 = new OASLicenseIpInfo();
        OASLicenseIpInfo licenseIpInfo4 = new OASLicenseIpInfo();

        System.assert(licenseIpInfo1.equals(licenseIpInfo2));
        System.assert(licenseIpInfo2.equals(licenseIpInfo1));
        System.assert(licenseIpInfo3.equals(licenseIpInfo4));
        System.assert(licenseIpInfo4.equals(licenseIpInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseIpInfo licenseIpInfo1 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo2 = new OASLicenseIpInfo();

        System.assertEquals(false, licenseIpInfo1.equals('foo'));
        System.assertEquals(false, licenseIpInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseIpInfo licenseIpInfo1 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo2 = new OASLicenseIpInfo();
        OASLicenseIpInfo licenseIpInfo3;

        System.assertEquals(false, licenseIpInfo1.equals(licenseIpInfo3));
        System.assertEquals(false, licenseIpInfo2.equals(licenseIpInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseIpInfo licenseIpInfo1 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo2 = new OASLicenseIpInfo();

        System.assertEquals(licenseIpInfo1.hashCode(), licenseIpInfo1.hashCode());
        System.assertEquals(licenseIpInfo2.hashCode(), licenseIpInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseIpInfo licenseIpInfo1 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo2 = OASLicenseIpInfo.getExample();
        OASLicenseIpInfo licenseIpInfo3 = new OASLicenseIpInfo();
        OASLicenseIpInfo licenseIpInfo4 = new OASLicenseIpInfo();

        System.assert(licenseIpInfo1.equals(licenseIpInfo2));
        System.assert(licenseIpInfo3.equals(licenseIpInfo4));
        System.assertEquals(licenseIpInfo1.hashCode(), licenseIpInfo2.hashCode());
        System.assertEquals(licenseIpInfo3.hashCode(), licenseIpInfo4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASLicenseIpInfo licenseIpInfo = new OASLicenseIpInfo();
        System.assertEquals(new List<OASLicenseIpInfoRow>(), licenseIpInfo.rows);
        System.assertEquals(null, licenseIpInfo.title);
    }
}
