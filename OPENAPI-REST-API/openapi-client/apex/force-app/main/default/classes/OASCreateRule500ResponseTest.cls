@isTest
private class OASCreateRule500ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateRule500Response createRule500Response1 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response2 = createRule500Response1;
        OASCreateRule500Response createRule500Response3 = new OASCreateRule500Response();
        OASCreateRule500Response createRule500Response4 = createRule500Response3;

        System.assert(createRule500Response1.equals(createRule500Response2));
        System.assert(createRule500Response2.equals(createRule500Response1));
        System.assert(createRule500Response1.equals(createRule500Response1));
        System.assert(createRule500Response3.equals(createRule500Response4));
        System.assert(createRule500Response4.equals(createRule500Response3));
        System.assert(createRule500Response3.equals(createRule500Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateRule500Response createRule500Response1 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response2 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response3 = new OASCreateRule500Response();
        OASCreateRule500Response createRule500Response4 = new OASCreateRule500Response();

        System.assert(createRule500Response1.equals(createRule500Response2));
        System.assert(createRule500Response2.equals(createRule500Response1));
        System.assert(createRule500Response3.equals(createRule500Response4));
        System.assert(createRule500Response4.equals(createRule500Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateRule500Response createRule500Response1 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response2 = new OASCreateRule500Response();

        System.assertEquals(false, createRule500Response1.equals('foo'));
        System.assertEquals(false, createRule500Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateRule500Response createRule500Response1 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response2 = new OASCreateRule500Response();
        OASCreateRule500Response createRule500Response3;

        System.assertEquals(false, createRule500Response1.equals(createRule500Response3));
        System.assertEquals(false, createRule500Response2.equals(createRule500Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateRule500Response createRule500Response1 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response2 = new OASCreateRule500Response();

        System.assertEquals(createRule500Response1.hashCode(), createRule500Response1.hashCode());
        System.assertEquals(createRule500Response2.hashCode(), createRule500Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateRule500Response createRule500Response1 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response2 = OASCreateRule500Response.getExample();
        OASCreateRule500Response createRule500Response3 = new OASCreateRule500Response();
        OASCreateRule500Response createRule500Response4 = new OASCreateRule500Response();

        System.assert(createRule500Response1.equals(createRule500Response2));
        System.assert(createRule500Response3.equals(createRule500Response4));
        System.assertEquals(createRule500Response1.hashCode(), createRule500Response2.hashCode());
        System.assertEquals(createRule500Response3.hashCode(), createRule500Response4.hashCode());
    }
}
