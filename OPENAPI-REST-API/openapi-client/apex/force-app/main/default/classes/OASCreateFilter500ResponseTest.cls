@isTest
private class OASCreateFilter500ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateFilter500Response createFilter500Response1 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response2 = createFilter500Response1;
        OASCreateFilter500Response createFilter500Response3 = new OASCreateFilter500Response();
        OASCreateFilter500Response createFilter500Response4 = createFilter500Response3;

        System.assert(createFilter500Response1.equals(createFilter500Response2));
        System.assert(createFilter500Response2.equals(createFilter500Response1));
        System.assert(createFilter500Response1.equals(createFilter500Response1));
        System.assert(createFilter500Response3.equals(createFilter500Response4));
        System.assert(createFilter500Response4.equals(createFilter500Response3));
        System.assert(createFilter500Response3.equals(createFilter500Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateFilter500Response createFilter500Response1 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response2 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response3 = new OASCreateFilter500Response();
        OASCreateFilter500Response createFilter500Response4 = new OASCreateFilter500Response();

        System.assert(createFilter500Response1.equals(createFilter500Response2));
        System.assert(createFilter500Response2.equals(createFilter500Response1));
        System.assert(createFilter500Response3.equals(createFilter500Response4));
        System.assert(createFilter500Response4.equals(createFilter500Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateFilter500Response createFilter500Response1 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response2 = new OASCreateFilter500Response();

        System.assertEquals(false, createFilter500Response1.equals('foo'));
        System.assertEquals(false, createFilter500Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateFilter500Response createFilter500Response1 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response2 = new OASCreateFilter500Response();
        OASCreateFilter500Response createFilter500Response3;

        System.assertEquals(false, createFilter500Response1.equals(createFilter500Response3));
        System.assertEquals(false, createFilter500Response2.equals(createFilter500Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateFilter500Response createFilter500Response1 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response2 = new OASCreateFilter500Response();

        System.assertEquals(createFilter500Response1.hashCode(), createFilter500Response1.hashCode());
        System.assertEquals(createFilter500Response2.hashCode(), createFilter500Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateFilter500Response createFilter500Response1 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response2 = OASCreateFilter500Response.getExample();
        OASCreateFilter500Response createFilter500Response3 = new OASCreateFilter500Response();
        OASCreateFilter500Response createFilter500Response4 = new OASCreateFilter500Response();

        System.assert(createFilter500Response1.equals(createFilter500Response2));
        System.assert(createFilter500Response3.equals(createFilter500Response4));
        System.assertEquals(createFilter500Response1.hashCode(), createFilter500Response2.hashCode());
        System.assertEquals(createFilter500Response3.hashCode(), createFilter500Response4.hashCode());
    }
}
