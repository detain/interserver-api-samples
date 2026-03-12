@isTest
private class OASCreateFilterTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateFilter createFilter1 = OASCreateFilter.getExample();
        OASCreateFilter createFilter2 = createFilter1;
        OASCreateFilter createFilter3 = new OASCreateFilter();
        OASCreateFilter createFilter4 = createFilter3;

        System.assert(createFilter1.equals(createFilter2));
        System.assert(createFilter2.equals(createFilter1));
        System.assert(createFilter1.equals(createFilter1));
        System.assert(createFilter3.equals(createFilter4));
        System.assert(createFilter4.equals(createFilter3));
        System.assert(createFilter3.equals(createFilter3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateFilter createFilter1 = OASCreateFilter.getExample();
        OASCreateFilter createFilter2 = OASCreateFilter.getExample();
        OASCreateFilter createFilter3 = new OASCreateFilter();
        OASCreateFilter createFilter4 = new OASCreateFilter();

        System.assert(createFilter1.equals(createFilter2));
        System.assert(createFilter2.equals(createFilter1));
        System.assert(createFilter3.equals(createFilter4));
        System.assert(createFilter4.equals(createFilter3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateFilter createFilter1 = OASCreateFilter.getExample();
        OASCreateFilter createFilter2 = new OASCreateFilter();

        System.assertEquals(false, createFilter1.equals('foo'));
        System.assertEquals(false, createFilter2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateFilter createFilter1 = OASCreateFilter.getExample();
        OASCreateFilter createFilter2 = new OASCreateFilter();
        OASCreateFilter createFilter3;

        System.assertEquals(false, createFilter1.equals(createFilter3));
        System.assertEquals(false, createFilter2.equals(createFilter3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateFilter createFilter1 = OASCreateFilter.getExample();
        OASCreateFilter createFilter2 = new OASCreateFilter();

        System.assertEquals(createFilter1.hashCode(), createFilter1.hashCode());
        System.assertEquals(createFilter2.hashCode(), createFilter2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateFilter createFilter1 = OASCreateFilter.getExample();
        OASCreateFilter createFilter2 = OASCreateFilter.getExample();
        OASCreateFilter createFilter3 = new OASCreateFilter();
        OASCreateFilter createFilter4 = new OASCreateFilter();

        System.assert(createFilter1.equals(createFilter2));
        System.assert(createFilter3.equals(createFilter4));
        System.assertEquals(createFilter1.hashCode(), createFilter2.hashCode());
        System.assertEquals(createFilter3.hashCode(), createFilter4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASCreateFilter createFilter = new OASCreateFilter();
        Map<String, String> x-property-mappings = createFilter.getx-property-mappings();
        System.assertEquals('filterType', x-property-mappings.get('filter_type'));
    }
}
