@isTest
private class OASLicenseServiceInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicenseServiceInfo licenseServiceInfo1 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo2 = licenseServiceInfo1;
        OASLicenseServiceInfo licenseServiceInfo3 = new OASLicenseServiceInfo();
        OASLicenseServiceInfo licenseServiceInfo4 = licenseServiceInfo3;

        System.assert(licenseServiceInfo1.equals(licenseServiceInfo2));
        System.assert(licenseServiceInfo2.equals(licenseServiceInfo1));
        System.assert(licenseServiceInfo1.equals(licenseServiceInfo1));
        System.assert(licenseServiceInfo3.equals(licenseServiceInfo4));
        System.assert(licenseServiceInfo4.equals(licenseServiceInfo3));
        System.assert(licenseServiceInfo3.equals(licenseServiceInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicenseServiceInfo licenseServiceInfo1 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo2 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo3 = new OASLicenseServiceInfo();
        OASLicenseServiceInfo licenseServiceInfo4 = new OASLicenseServiceInfo();

        System.assert(licenseServiceInfo1.equals(licenseServiceInfo2));
        System.assert(licenseServiceInfo2.equals(licenseServiceInfo1));
        System.assert(licenseServiceInfo3.equals(licenseServiceInfo4));
        System.assert(licenseServiceInfo4.equals(licenseServiceInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicenseServiceInfo licenseServiceInfo1 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo2 = new OASLicenseServiceInfo();

        System.assertEquals(false, licenseServiceInfo1.equals('foo'));
        System.assertEquals(false, licenseServiceInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicenseServiceInfo licenseServiceInfo1 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo2 = new OASLicenseServiceInfo();
        OASLicenseServiceInfo licenseServiceInfo3;

        System.assertEquals(false, licenseServiceInfo1.equals(licenseServiceInfo3));
        System.assertEquals(false, licenseServiceInfo2.equals(licenseServiceInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicenseServiceInfo licenseServiceInfo1 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo2 = new OASLicenseServiceInfo();

        System.assertEquals(licenseServiceInfo1.hashCode(), licenseServiceInfo1.hashCode());
        System.assertEquals(licenseServiceInfo2.hashCode(), licenseServiceInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicenseServiceInfo licenseServiceInfo1 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo2 = OASLicenseServiceInfo.getExample();
        OASLicenseServiceInfo licenseServiceInfo3 = new OASLicenseServiceInfo();
        OASLicenseServiceInfo licenseServiceInfo4 = new OASLicenseServiceInfo();

        System.assert(licenseServiceInfo1.equals(licenseServiceInfo2));
        System.assert(licenseServiceInfo3.equals(licenseServiceInfo4));
        System.assertEquals(licenseServiceInfo1.hashCode(), licenseServiceInfo2.hashCode());
        System.assertEquals(licenseServiceInfo3.hashCode(), licenseServiceInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicenseServiceInfo licenseServiceInfo = new OASLicenseServiceInfo();
        Map<String, String> x-property-mappings = licenseServiceInfo.getx-property-mappings();
        System.assertEquals('licenseId', x-property-mappings.get('license_id'));
        System.assertEquals('licenseType', x-property-mappings.get('license_type'));
        System.assertEquals('licenseCurrency', x-property-mappings.get('license_currency'));
        System.assertEquals('licenseOrderDate', x-property-mappings.get('license_order_date'));
        System.assertEquals('licenseCustid', x-property-mappings.get('license_custid'));
        System.assertEquals('licenseIp', x-property-mappings.get('license_ip'));
        System.assertEquals('licenseStatus', x-property-mappings.get('license_status'));
        System.assertEquals('licenseInvoice', x-property-mappings.get('license_invoice'));
        System.assertEquals('licenseCoupon', x-property-mappings.get('license_coupon'));
        System.assertEquals('licenseHostname', x-property-mappings.get('license_hostname'));
        System.assertEquals('licenseKey', x-property-mappings.get('license_key'));
        System.assertEquals('licenseExtra', x-property-mappings.get('license_extra'));
    }
}
