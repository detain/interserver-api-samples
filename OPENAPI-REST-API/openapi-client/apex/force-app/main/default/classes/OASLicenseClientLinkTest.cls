@isTest
private class OASLicenseClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseClientLink licenseClientLink1 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink2 = licenseClientLink1;
        OASLicenseClientLink licenseClientLink3 = new OASLicenseClientLink();
        OASLicenseClientLink licenseClientLink4 = licenseClientLink3;

        System.assert(licenseClientLink1.equals(licenseClientLink2));
        System.assert(licenseClientLink2.equals(licenseClientLink1));
        System.assert(licenseClientLink1.equals(licenseClientLink1));
        System.assert(licenseClientLink3.equals(licenseClientLink4));
        System.assert(licenseClientLink4.equals(licenseClientLink3));
        System.assert(licenseClientLink3.equals(licenseClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseClientLink licenseClientLink1 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink2 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink3 = new OASLicenseClientLink();
        OASLicenseClientLink licenseClientLink4 = new OASLicenseClientLink();

        System.assert(licenseClientLink1.equals(licenseClientLink2));
        System.assert(licenseClientLink2.equals(licenseClientLink1));
        System.assert(licenseClientLink3.equals(licenseClientLink4));
        System.assert(licenseClientLink4.equals(licenseClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseClientLink licenseClientLink1 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink2 = new OASLicenseClientLink();

        System.assertEquals(false, licenseClientLink1.equals('foo'));
        System.assertEquals(false, licenseClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseClientLink licenseClientLink1 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink2 = new OASLicenseClientLink();
        OASLicenseClientLink licenseClientLink3;

        System.assertEquals(false, licenseClientLink1.equals(licenseClientLink3));
        System.assertEquals(false, licenseClientLink2.equals(licenseClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseClientLink licenseClientLink1 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink2 = new OASLicenseClientLink();

        System.assertEquals(licenseClientLink1.hashCode(), licenseClientLink1.hashCode());
        System.assertEquals(licenseClientLink2.hashCode(), licenseClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseClientLink licenseClientLink1 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink2 = OASLicenseClientLink.getExample();
        OASLicenseClientLink licenseClientLink3 = new OASLicenseClientLink();
        OASLicenseClientLink licenseClientLink4 = new OASLicenseClientLink();

        System.assert(licenseClientLink1.equals(licenseClientLink2));
        System.assert(licenseClientLink3.equals(licenseClientLink4));
        System.assertEquals(licenseClientLink1.hashCode(), licenseClientLink2.hashCode());
        System.assertEquals(licenseClientLink3.hashCode(), licenseClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicenseClientLink licenseClientLink = new OASLicenseClientLink();
        Map<String, String> x-property-mappings = licenseClientLink.getx-property-mappings();
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('otherAttr', x-property-mappings.get('other_attr'));
    }
}
