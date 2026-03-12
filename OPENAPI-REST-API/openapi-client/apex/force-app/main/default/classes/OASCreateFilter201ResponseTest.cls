@isTest
private class OASCreateFilter201ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateFilter201Response createFilter201Response1 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response2 = createFilter201Response1;
        OASCreateFilter201Response createFilter201Response3 = new OASCreateFilter201Response();
        OASCreateFilter201Response createFilter201Response4 = createFilter201Response3;

        System.assert(createFilter201Response1.equals(createFilter201Response2));
        System.assert(createFilter201Response2.equals(createFilter201Response1));
        System.assert(createFilter201Response1.equals(createFilter201Response1));
        System.assert(createFilter201Response3.equals(createFilter201Response4));
        System.assert(createFilter201Response4.equals(createFilter201Response3));
        System.assert(createFilter201Response3.equals(createFilter201Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateFilter201Response createFilter201Response1 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response2 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response3 = new OASCreateFilter201Response();
        OASCreateFilter201Response createFilter201Response4 = new OASCreateFilter201Response();

        System.assert(createFilter201Response1.equals(createFilter201Response2));
        System.assert(createFilter201Response2.equals(createFilter201Response1));
        System.assert(createFilter201Response3.equals(createFilter201Response4));
        System.assert(createFilter201Response4.equals(createFilter201Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateFilter201Response createFilter201Response1 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response2 = new OASCreateFilter201Response();

        System.assertEquals(false, createFilter201Response1.equals('foo'));
        System.assertEquals(false, createFilter201Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateFilter201Response createFilter201Response1 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response2 = new OASCreateFilter201Response();
        OASCreateFilter201Response createFilter201Response3;

        System.assertEquals(false, createFilter201Response1.equals(createFilter201Response3));
        System.assertEquals(false, createFilter201Response2.equals(createFilter201Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateFilter201Response createFilter201Response1 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response2 = new OASCreateFilter201Response();

        System.assertEquals(createFilter201Response1.hashCode(), createFilter201Response1.hashCode());
        System.assertEquals(createFilter201Response2.hashCode(), createFilter201Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateFilter201Response createFilter201Response1 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response2 = OASCreateFilter201Response.getExample();
        OASCreateFilter201Response createFilter201Response3 = new OASCreateFilter201Response();
        OASCreateFilter201Response createFilter201Response4 = new OASCreateFilter201Response();

        System.assert(createFilter201Response1.equals(createFilter201Response2));
        System.assert(createFilter201Response3.equals(createFilter201Response4));
        System.assertEquals(createFilter201Response1.hashCode(), createFilter201Response2.hashCode());
        System.assertEquals(createFilter201Response3.hashCode(), createFilter201Response4.hashCode());
    }
}
