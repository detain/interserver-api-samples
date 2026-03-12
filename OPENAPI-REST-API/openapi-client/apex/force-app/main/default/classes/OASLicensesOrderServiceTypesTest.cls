@isTest
private class OASLicensesOrderServiceTypesTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes1 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes2 = licensesOrderServiceTypes1;
        OASLicensesOrderServiceTypes licensesOrderServiceTypes3 = new OASLicensesOrderServiceTypes();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes4 = licensesOrderServiceTypes3;

        System.assert(licensesOrderServiceTypes1.equals(licensesOrderServiceTypes2));
        System.assert(licensesOrderServiceTypes2.equals(licensesOrderServiceTypes1));
        System.assert(licensesOrderServiceTypes1.equals(licensesOrderServiceTypes1));
        System.assert(licensesOrderServiceTypes3.equals(licensesOrderServiceTypes4));
        System.assert(licensesOrderServiceTypes4.equals(licensesOrderServiceTypes3));
        System.assert(licensesOrderServiceTypes3.equals(licensesOrderServiceTypes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes1 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes2 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes3 = new OASLicensesOrderServiceTypes();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes4 = new OASLicensesOrderServiceTypes();

        System.assert(licensesOrderServiceTypes1.equals(licensesOrderServiceTypes2));
        System.assert(licensesOrderServiceTypes2.equals(licensesOrderServiceTypes1));
        System.assert(licensesOrderServiceTypes3.equals(licensesOrderServiceTypes4));
        System.assert(licensesOrderServiceTypes4.equals(licensesOrderServiceTypes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes1 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes2 = new OASLicensesOrderServiceTypes();

        System.assertEquals(false, licensesOrderServiceTypes1.equals('foo'));
        System.assertEquals(false, licensesOrderServiceTypes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes1 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes2 = new OASLicensesOrderServiceTypes();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes3;

        System.assertEquals(false, licensesOrderServiceTypes1.equals(licensesOrderServiceTypes3));
        System.assertEquals(false, licensesOrderServiceTypes2.equals(licensesOrderServiceTypes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes1 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes2 = new OASLicensesOrderServiceTypes();

        System.assertEquals(licensesOrderServiceTypes1.hashCode(), licensesOrderServiceTypes1.hashCode());
        System.assertEquals(licensesOrderServiceTypes2.hashCode(), licensesOrderServiceTypes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes1 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes2 = OASLicensesOrderServiceTypes.getExample();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes3 = new OASLicensesOrderServiceTypes();
        OASLicensesOrderServiceTypes licensesOrderServiceTypes4 = new OASLicensesOrderServiceTypes();

        System.assert(licensesOrderServiceTypes1.equals(licensesOrderServiceTypes2));
        System.assert(licensesOrderServiceTypes3.equals(licensesOrderServiceTypes4));
        System.assertEquals(licensesOrderServiceTypes1.hashCode(), licensesOrderServiceTypes2.hashCode());
        System.assertEquals(licensesOrderServiceTypes3.hashCode(), licensesOrderServiceTypes4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicensesOrderServiceTypes licensesOrderServiceTypes = new OASLicensesOrderServiceTypes();
        Map<String, String> x-property-mappings = licensesOrderServiceTypes.getx-property-mappings();
        System.assertEquals('licensesOrderServiceTypes11482', x-property-mappings.get('LicensesOrderServiceTypes11482'));
    }
}
