@isTest
private class OASCreateRule201ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateRule201Response createRule201Response1 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response2 = createRule201Response1;
        OASCreateRule201Response createRule201Response3 = new OASCreateRule201Response();
        OASCreateRule201Response createRule201Response4 = createRule201Response3;

        System.assert(createRule201Response1.equals(createRule201Response2));
        System.assert(createRule201Response2.equals(createRule201Response1));
        System.assert(createRule201Response1.equals(createRule201Response1));
        System.assert(createRule201Response3.equals(createRule201Response4));
        System.assert(createRule201Response4.equals(createRule201Response3));
        System.assert(createRule201Response3.equals(createRule201Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateRule201Response createRule201Response1 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response2 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response3 = new OASCreateRule201Response();
        OASCreateRule201Response createRule201Response4 = new OASCreateRule201Response();

        System.assert(createRule201Response1.equals(createRule201Response2));
        System.assert(createRule201Response2.equals(createRule201Response1));
        System.assert(createRule201Response3.equals(createRule201Response4));
        System.assert(createRule201Response4.equals(createRule201Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateRule201Response createRule201Response1 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response2 = new OASCreateRule201Response();

        System.assertEquals(false, createRule201Response1.equals('foo'));
        System.assertEquals(false, createRule201Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateRule201Response createRule201Response1 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response2 = new OASCreateRule201Response();
        OASCreateRule201Response createRule201Response3;

        System.assertEquals(false, createRule201Response1.equals(createRule201Response3));
        System.assertEquals(false, createRule201Response2.equals(createRule201Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateRule201Response createRule201Response1 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response2 = new OASCreateRule201Response();

        System.assertEquals(createRule201Response1.hashCode(), createRule201Response1.hashCode());
        System.assertEquals(createRule201Response2.hashCode(), createRule201Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateRule201Response createRule201Response1 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response2 = OASCreateRule201Response.getExample();
        OASCreateRule201Response createRule201Response3 = new OASCreateRule201Response();
        OASCreateRule201Response createRule201Response4 = new OASCreateRule201Response();

        System.assert(createRule201Response1.equals(createRule201Response2));
        System.assert(createRule201Response3.equals(createRule201Response4));
        System.assertEquals(createRule201Response1.hashCode(), createRule201Response2.hashCode());
        System.assertEquals(createRule201Response3.hashCode(), createRule201Response4.hashCode());
    }
}
