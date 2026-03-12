@isTest
private class OASLicensesOrderServiceCategoriesTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories1 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories2 = licensesOrderServiceCategories1;
        OASLicensesOrderServiceCategories licensesOrderServiceCategories3 = new OASLicensesOrderServiceCategories();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories4 = licensesOrderServiceCategories3;

        System.assert(licensesOrderServiceCategories1.equals(licensesOrderServiceCategories2));
        System.assert(licensesOrderServiceCategories2.equals(licensesOrderServiceCategories1));
        System.assert(licensesOrderServiceCategories1.equals(licensesOrderServiceCategories1));
        System.assert(licensesOrderServiceCategories3.equals(licensesOrderServiceCategories4));
        System.assert(licensesOrderServiceCategories4.equals(licensesOrderServiceCategories3));
        System.assert(licensesOrderServiceCategories3.equals(licensesOrderServiceCategories3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories1 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories2 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories3 = new OASLicensesOrderServiceCategories();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories4 = new OASLicensesOrderServiceCategories();

        System.assert(licensesOrderServiceCategories1.equals(licensesOrderServiceCategories2));
        System.assert(licensesOrderServiceCategories2.equals(licensesOrderServiceCategories1));
        System.assert(licensesOrderServiceCategories3.equals(licensesOrderServiceCategories4));
        System.assert(licensesOrderServiceCategories4.equals(licensesOrderServiceCategories3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories1 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories2 = new OASLicensesOrderServiceCategories();

        System.assertEquals(false, licensesOrderServiceCategories1.equals('foo'));
        System.assertEquals(false, licensesOrderServiceCategories2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories1 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories2 = new OASLicensesOrderServiceCategories();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories3;

        System.assertEquals(false, licensesOrderServiceCategories1.equals(licensesOrderServiceCategories3));
        System.assertEquals(false, licensesOrderServiceCategories2.equals(licensesOrderServiceCategories3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories1 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories2 = new OASLicensesOrderServiceCategories();

        System.assertEquals(licensesOrderServiceCategories1.hashCode(), licensesOrderServiceCategories1.hashCode());
        System.assertEquals(licensesOrderServiceCategories2.hashCode(), licensesOrderServiceCategories2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories1 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories2 = OASLicensesOrderServiceCategories.getExample();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories3 = new OASLicensesOrderServiceCategories();
        OASLicensesOrderServiceCategories licensesOrderServiceCategories4 = new OASLicensesOrderServiceCategories();

        System.assert(licensesOrderServiceCategories1.equals(licensesOrderServiceCategories2));
        System.assert(licensesOrderServiceCategories3.equals(licensesOrderServiceCategories4));
        System.assertEquals(licensesOrderServiceCategories1.hashCode(), licensesOrderServiceCategories2.hashCode());
        System.assertEquals(licensesOrderServiceCategories3.hashCode(), licensesOrderServiceCategories4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicensesOrderServiceCategories licensesOrderServiceCategories = new OASLicensesOrderServiceCategories();
        Map<String, String> x-property-mappings = licensesOrderServiceCategories.getx-property-mappings();
        System.assertEquals('licensesOrderServiceCategories509', x-property-mappings.get('LicensesOrderServiceCategories509'));
    }
}
