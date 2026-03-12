@isTest
private class OASCreateFilter400ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASCreateFilter400Response createFilter400Response1 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response2 = createFilter400Response1;
        OASCreateFilter400Response createFilter400Response3 = new OASCreateFilter400Response();
        OASCreateFilter400Response createFilter400Response4 = createFilter400Response3;

        System.assert(createFilter400Response1.equals(createFilter400Response2));
        System.assert(createFilter400Response2.equals(createFilter400Response1));
        System.assert(createFilter400Response1.equals(createFilter400Response1));
        System.assert(createFilter400Response3.equals(createFilter400Response4));
        System.assert(createFilter400Response4.equals(createFilter400Response3));
        System.assert(createFilter400Response3.equals(createFilter400Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCreateFilter400Response createFilter400Response1 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response2 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response3 = new OASCreateFilter400Response();
        OASCreateFilter400Response createFilter400Response4 = new OASCreateFilter400Response();

        System.assert(createFilter400Response1.equals(createFilter400Response2));
        System.assert(createFilter400Response2.equals(createFilter400Response1));
        System.assert(createFilter400Response3.equals(createFilter400Response4));
        System.assert(createFilter400Response4.equals(createFilter400Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCreateFilter400Response createFilter400Response1 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response2 = new OASCreateFilter400Response();

        System.assertEquals(false, createFilter400Response1.equals('foo'));
        System.assertEquals(false, createFilter400Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCreateFilter400Response createFilter400Response1 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response2 = new OASCreateFilter400Response();
        OASCreateFilter400Response createFilter400Response3;

        System.assertEquals(false, createFilter400Response1.equals(createFilter400Response3));
        System.assertEquals(false, createFilter400Response2.equals(createFilter400Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCreateFilter400Response createFilter400Response1 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response2 = new OASCreateFilter400Response();

        System.assertEquals(createFilter400Response1.hashCode(), createFilter400Response1.hashCode());
        System.assertEquals(createFilter400Response2.hashCode(), createFilter400Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCreateFilter400Response createFilter400Response1 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response2 = OASCreateFilter400Response.getExample();
        OASCreateFilter400Response createFilter400Response3 = new OASCreateFilter400Response();
        OASCreateFilter400Response createFilter400Response4 = new OASCreateFilter400Response();

        System.assert(createFilter400Response1.equals(createFilter400Response2));
        System.assert(createFilter400Response3.equals(createFilter400Response4));
        System.assertEquals(createFilter400Response1.hashCode(), createFilter400Response2.hashCode());
        System.assertEquals(createFilter400Response3.hashCode(), createFilter400Response4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASCreateFilter400Response createFilter400Response = new OASCreateFilter400Response();
        System.assertEquals(new List<String>(), createFilter400Response.errors);
        System.assertEquals(null, createFilter400Response.success);
        System.assertEquals(null, createFilter400Response.text);
    }
}
