@isTest
private class OASLicensesOrderServiceCategories509Test {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5091 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5092 = licensesOrderServiceCategories5091;
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5093 = new OASLicensesOrderServiceCategories509();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5094 = licensesOrderServiceCategories5093;

        System.assert(licensesOrderServiceCategories5091.equals(licensesOrderServiceCategories5092));
        System.assert(licensesOrderServiceCategories5092.equals(licensesOrderServiceCategories5091));
        System.assert(licensesOrderServiceCategories5091.equals(licensesOrderServiceCategories5091));
        System.assert(licensesOrderServiceCategories5093.equals(licensesOrderServiceCategories5094));
        System.assert(licensesOrderServiceCategories5094.equals(licensesOrderServiceCategories5093));
        System.assert(licensesOrderServiceCategories5093.equals(licensesOrderServiceCategories5093));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5091 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5092 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5093 = new OASLicensesOrderServiceCategories509();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5094 = new OASLicensesOrderServiceCategories509();

        System.assert(licensesOrderServiceCategories5091.equals(licensesOrderServiceCategories5092));
        System.assert(licensesOrderServiceCategories5092.equals(licensesOrderServiceCategories5091));
        System.assert(licensesOrderServiceCategories5093.equals(licensesOrderServiceCategories5094));
        System.assert(licensesOrderServiceCategories5094.equals(licensesOrderServiceCategories5093));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5091 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5092 = new OASLicensesOrderServiceCategories509();

        System.assertEquals(false, licensesOrderServiceCategories5091.equals('foo'));
        System.assertEquals(false, licensesOrderServiceCategories5092.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5091 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5092 = new OASLicensesOrderServiceCategories509();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5093;

        System.assertEquals(false, licensesOrderServiceCategories5091.equals(licensesOrderServiceCategories5093));
        System.assertEquals(false, licensesOrderServiceCategories5092.equals(licensesOrderServiceCategories5093));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5091 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5092 = new OASLicensesOrderServiceCategories509();

        System.assertEquals(licensesOrderServiceCategories5091.hashCode(), licensesOrderServiceCategories5091.hashCode());
        System.assertEquals(licensesOrderServiceCategories5092.hashCode(), licensesOrderServiceCategories5092.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5091 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5092 = OASLicensesOrderServiceCategories509.getExample();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5093 = new OASLicensesOrderServiceCategories509();
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories5094 = new OASLicensesOrderServiceCategories509();

        System.assert(licensesOrderServiceCategories5091.equals(licensesOrderServiceCategories5092));
        System.assert(licensesOrderServiceCategories5093.equals(licensesOrderServiceCategories5094));
        System.assertEquals(licensesOrderServiceCategories5091.hashCode(), licensesOrderServiceCategories5092.hashCode());
        System.assertEquals(licensesOrderServiceCategories5093.hashCode(), licensesOrderServiceCategories5094.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicensesOrderServiceCategories509 licensesOrderServiceCategories509 = new OASLicensesOrderServiceCategories509();
        Map<String, String> x-property-mappings = licensesOrderServiceCategories509.getx-property-mappings();
        System.assertEquals('categoryId', x-property-mappings.get('category_id'));
        System.assertEquals('categoryName', x-property-mappings.get('category_name'));
        System.assertEquals('categoryTag', x-property-mappings.get('category_tag'));
        System.assertEquals('categoryModule', x-property-mappings.get('category_module'));
    }
}
