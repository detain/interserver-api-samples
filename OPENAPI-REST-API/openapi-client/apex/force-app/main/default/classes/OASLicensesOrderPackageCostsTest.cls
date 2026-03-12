@isTest
private class OASLicensesOrderPackageCostsTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts1 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts2 = licensesOrderPackageCosts1;
        OASLicensesOrderPackageCosts licensesOrderPackageCosts3 = new OASLicensesOrderPackageCosts();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts4 = licensesOrderPackageCosts3;

        System.assert(licensesOrderPackageCosts1.equals(licensesOrderPackageCosts2));
        System.assert(licensesOrderPackageCosts2.equals(licensesOrderPackageCosts1));
        System.assert(licensesOrderPackageCosts1.equals(licensesOrderPackageCosts1));
        System.assert(licensesOrderPackageCosts3.equals(licensesOrderPackageCosts4));
        System.assert(licensesOrderPackageCosts4.equals(licensesOrderPackageCosts3));
        System.assert(licensesOrderPackageCosts3.equals(licensesOrderPackageCosts3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts1 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts2 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts3 = new OASLicensesOrderPackageCosts();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts4 = new OASLicensesOrderPackageCosts();

        System.assert(licensesOrderPackageCosts1.equals(licensesOrderPackageCosts2));
        System.assert(licensesOrderPackageCosts2.equals(licensesOrderPackageCosts1));
        System.assert(licensesOrderPackageCosts3.equals(licensesOrderPackageCosts4));
        System.assert(licensesOrderPackageCosts4.equals(licensesOrderPackageCosts3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts1 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts2 = new OASLicensesOrderPackageCosts();

        System.assertEquals(false, licensesOrderPackageCosts1.equals('foo'));
        System.assertEquals(false, licensesOrderPackageCosts2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts1 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts2 = new OASLicensesOrderPackageCosts();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts3;

        System.assertEquals(false, licensesOrderPackageCosts1.equals(licensesOrderPackageCosts3));
        System.assertEquals(false, licensesOrderPackageCosts2.equals(licensesOrderPackageCosts3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts1 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts2 = new OASLicensesOrderPackageCosts();

        System.assertEquals(licensesOrderPackageCosts1.hashCode(), licensesOrderPackageCosts1.hashCode());
        System.assertEquals(licensesOrderPackageCosts2.hashCode(), licensesOrderPackageCosts2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts1 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts2 = OASLicensesOrderPackageCosts.getExample();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts3 = new OASLicensesOrderPackageCosts();
        OASLicensesOrderPackageCosts licensesOrderPackageCosts4 = new OASLicensesOrderPackageCosts();

        System.assert(licensesOrderPackageCosts1.equals(licensesOrderPackageCosts2));
        System.assert(licensesOrderPackageCosts3.equals(licensesOrderPackageCosts4));
        System.assertEquals(licensesOrderPackageCosts1.hashCode(), licensesOrderPackageCosts2.hashCode());
        System.assertEquals(licensesOrderPackageCosts3.hashCode(), licensesOrderPackageCosts4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicensesOrderPackageCosts licensesOrderPackageCosts = new OASLicensesOrderPackageCosts();
        Map<String, String> x-property-mappings = licensesOrderPackageCosts.getx-property-mappings();
        System.assertEquals('licensesOrderPackageCosts11468', x-property-mappings.get('LicensesOrderPackageCosts11468'));
    }
}
