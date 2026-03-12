@isTest
private class OASCreateGeoRule400ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateGeoRule400Response createGeoRule400Response1 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response2 = createGeoRule400Response1;
        OASCreateGeoRule400Response createGeoRule400Response3 = new OASCreateGeoRule400Response();
        OASCreateGeoRule400Response createGeoRule400Response4 = createGeoRule400Response3;

        System.assert(createGeoRule400Response1.equals(createGeoRule400Response2));
        System.assert(createGeoRule400Response2.equals(createGeoRule400Response1));
        System.assert(createGeoRule400Response1.equals(createGeoRule400Response1));
        System.assert(createGeoRule400Response3.equals(createGeoRule400Response4));
        System.assert(createGeoRule400Response4.equals(createGeoRule400Response3));
        System.assert(createGeoRule400Response3.equals(createGeoRule400Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateGeoRule400Response createGeoRule400Response1 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response2 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response3 = new OASCreateGeoRule400Response();
        OASCreateGeoRule400Response createGeoRule400Response4 = new OASCreateGeoRule400Response();

        System.assert(createGeoRule400Response1.equals(createGeoRule400Response2));
        System.assert(createGeoRule400Response2.equals(createGeoRule400Response1));
        System.assert(createGeoRule400Response3.equals(createGeoRule400Response4));
        System.assert(createGeoRule400Response4.equals(createGeoRule400Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateGeoRule400Response createGeoRule400Response1 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response2 = new OASCreateGeoRule400Response();

        System.assertEquals(false, createGeoRule400Response1.equals('foo'));
        System.assertEquals(false, createGeoRule400Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateGeoRule400Response createGeoRule400Response1 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response2 = new OASCreateGeoRule400Response();
        OASCreateGeoRule400Response createGeoRule400Response3;

        System.assertEquals(false, createGeoRule400Response1.equals(createGeoRule400Response3));
        System.assertEquals(false, createGeoRule400Response2.equals(createGeoRule400Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateGeoRule400Response createGeoRule400Response1 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response2 = new OASCreateGeoRule400Response();

        System.assertEquals(createGeoRule400Response1.hashCode(), createGeoRule400Response1.hashCode());
        System.assertEquals(createGeoRule400Response2.hashCode(), createGeoRule400Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateGeoRule400Response createGeoRule400Response1 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response2 = OASCreateGeoRule400Response.getExample();
        OASCreateGeoRule400Response createGeoRule400Response3 = new OASCreateGeoRule400Response();
        OASCreateGeoRule400Response createGeoRule400Response4 = new OASCreateGeoRule400Response();

        System.assert(createGeoRule400Response1.equals(createGeoRule400Response2));
        System.assert(createGeoRule400Response3.equals(createGeoRule400Response4));
        System.assertEquals(createGeoRule400Response1.hashCode(), createGeoRule400Response2.hashCode());
        System.assertEquals(createGeoRule400Response3.hashCode(), createGeoRule400Response4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASCreateGeoRule400Response createGeoRule400Response = new OASCreateGeoRule400Response();
        System.assertEquals(new List<String>(), createGeoRule400Response.errors);
        System.assertEquals(null, createGeoRule400Response.success);
        System.assertEquals(null, createGeoRule400Response.text);
    }
}
