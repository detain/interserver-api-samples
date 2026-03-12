@isTest
private class OASScrubIpFilterTypesTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpFilterTypes scrubIpFilterTypes1 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes2 = scrubIpFilterTypes1;
        OASScrubIpFilterTypes scrubIpFilterTypes3 = new OASScrubIpFilterTypes();
        OASScrubIpFilterTypes scrubIpFilterTypes4 = scrubIpFilterTypes3;

        System.assert(scrubIpFilterTypes1.equals(scrubIpFilterTypes2));
        System.assert(scrubIpFilterTypes2.equals(scrubIpFilterTypes1));
        System.assert(scrubIpFilterTypes1.equals(scrubIpFilterTypes1));
        System.assert(scrubIpFilterTypes3.equals(scrubIpFilterTypes4));
        System.assert(scrubIpFilterTypes4.equals(scrubIpFilterTypes3));
        System.assert(scrubIpFilterTypes3.equals(scrubIpFilterTypes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpFilterTypes scrubIpFilterTypes1 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes2 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes3 = new OASScrubIpFilterTypes();
        OASScrubIpFilterTypes scrubIpFilterTypes4 = new OASScrubIpFilterTypes();

        System.assert(scrubIpFilterTypes1.equals(scrubIpFilterTypes2));
        System.assert(scrubIpFilterTypes2.equals(scrubIpFilterTypes1));
        System.assert(scrubIpFilterTypes3.equals(scrubIpFilterTypes4));
        System.assert(scrubIpFilterTypes4.equals(scrubIpFilterTypes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpFilterTypes scrubIpFilterTypes1 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes2 = new OASScrubIpFilterTypes();

        System.assertEquals(false, scrubIpFilterTypes1.equals('foo'));
        System.assertEquals(false, scrubIpFilterTypes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpFilterTypes scrubIpFilterTypes1 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes2 = new OASScrubIpFilterTypes();
        OASScrubIpFilterTypes scrubIpFilterTypes3;

        System.assertEquals(false, scrubIpFilterTypes1.equals(scrubIpFilterTypes3));
        System.assertEquals(false, scrubIpFilterTypes2.equals(scrubIpFilterTypes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpFilterTypes scrubIpFilterTypes1 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes2 = new OASScrubIpFilterTypes();

        System.assertEquals(scrubIpFilterTypes1.hashCode(), scrubIpFilterTypes1.hashCode());
        System.assertEquals(scrubIpFilterTypes2.hashCode(), scrubIpFilterTypes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpFilterTypes scrubIpFilterTypes1 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes2 = OASScrubIpFilterTypes.getExample();
        OASScrubIpFilterTypes scrubIpFilterTypes3 = new OASScrubIpFilterTypes();
        OASScrubIpFilterTypes scrubIpFilterTypes4 = new OASScrubIpFilterTypes();

        System.assert(scrubIpFilterTypes1.equals(scrubIpFilterTypes2));
        System.assert(scrubIpFilterTypes3.equals(scrubIpFilterTypes4));
        System.assertEquals(scrubIpFilterTypes1.hashCode(), scrubIpFilterTypes2.hashCode());
        System.assertEquals(scrubIpFilterTypes3.hashCode(), scrubIpFilterTypes4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASScrubIpFilterTypes scrubIpFilterTypes = new OASScrubIpFilterTypes();
        System.assertEquals(new Map<String, OASScrubIpFilterTypesFiltersValue>(), scrubIpFilterTypes.filters);
        System.assertEquals(null, scrubIpFilterTypes.success);
    }
}
