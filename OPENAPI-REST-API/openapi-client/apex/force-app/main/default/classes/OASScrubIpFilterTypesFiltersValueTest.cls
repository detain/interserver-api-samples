@isTest
private class OASScrubIpFilterTypesFiltersValueTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue1 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue2 = scrubIpFilterTypesFiltersValue1;
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue3 = new OASScrubIpFilterTypesFiltersValue();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue4 = scrubIpFilterTypesFiltersValue3;

        System.assert(scrubIpFilterTypesFiltersValue1.equals(scrubIpFilterTypesFiltersValue2));
        System.assert(scrubIpFilterTypesFiltersValue2.equals(scrubIpFilterTypesFiltersValue1));
        System.assert(scrubIpFilterTypesFiltersValue1.equals(scrubIpFilterTypesFiltersValue1));
        System.assert(scrubIpFilterTypesFiltersValue3.equals(scrubIpFilterTypesFiltersValue4));
        System.assert(scrubIpFilterTypesFiltersValue4.equals(scrubIpFilterTypesFiltersValue3));
        System.assert(scrubIpFilterTypesFiltersValue3.equals(scrubIpFilterTypesFiltersValue3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue1 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue2 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue3 = new OASScrubIpFilterTypesFiltersValue();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue4 = new OASScrubIpFilterTypesFiltersValue();

        System.assert(scrubIpFilterTypesFiltersValue1.equals(scrubIpFilterTypesFiltersValue2));
        System.assert(scrubIpFilterTypesFiltersValue2.equals(scrubIpFilterTypesFiltersValue1));
        System.assert(scrubIpFilterTypesFiltersValue3.equals(scrubIpFilterTypesFiltersValue4));
        System.assert(scrubIpFilterTypesFiltersValue4.equals(scrubIpFilterTypesFiltersValue3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue1 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue2 = new OASScrubIpFilterTypesFiltersValue();

        System.assertEquals(false, scrubIpFilterTypesFiltersValue1.equals('foo'));
        System.assertEquals(false, scrubIpFilterTypesFiltersValue2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue1 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue2 = new OASScrubIpFilterTypesFiltersValue();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue3;

        System.assertEquals(false, scrubIpFilterTypesFiltersValue1.equals(scrubIpFilterTypesFiltersValue3));
        System.assertEquals(false, scrubIpFilterTypesFiltersValue2.equals(scrubIpFilterTypesFiltersValue3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue1 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue2 = new OASScrubIpFilterTypesFiltersValue();

        System.assertEquals(scrubIpFilterTypesFiltersValue1.hashCode(), scrubIpFilterTypesFiltersValue1.hashCode());
        System.assertEquals(scrubIpFilterTypesFiltersValue2.hashCode(), scrubIpFilterTypesFiltersValue2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue1 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue2 = OASScrubIpFilterTypesFiltersValue.getExample();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue3 = new OASScrubIpFilterTypesFiltersValue();
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue4 = new OASScrubIpFilterTypesFiltersValue();

        System.assert(scrubIpFilterTypesFiltersValue1.equals(scrubIpFilterTypesFiltersValue2));
        System.assert(scrubIpFilterTypesFiltersValue3.equals(scrubIpFilterTypesFiltersValue4));
        System.assertEquals(scrubIpFilterTypesFiltersValue1.hashCode(), scrubIpFilterTypesFiltersValue2.hashCode());
        System.assertEquals(scrubIpFilterTypesFiltersValue3.hashCode(), scrubIpFilterTypesFiltersValue4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASScrubIpFilterTypesFiltersValue scrubIpFilterTypesFiltersValue = new OASScrubIpFilterTypesFiltersValue();
        Map<String, String> x-property-mappings = scrubIpFilterTypesFiltersValue.getx-property-mappings();
        System.assertEquals('r_desc', x-property-mappings.get('desc'));
    }
}
