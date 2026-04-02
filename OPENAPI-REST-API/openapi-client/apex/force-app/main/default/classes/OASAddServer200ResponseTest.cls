@isTest
private class OASAddServer200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASAddServer200Response addServer200Response1 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response2 = addServer200Response1;
        OASAddServer200Response addServer200Response3 = new OASAddServer200Response();
        OASAddServer200Response addServer200Response4 = addServer200Response3;

        System.assert(addServer200Response1.equals(addServer200Response2));
        System.assert(addServer200Response2.equals(addServer200Response1));
        System.assert(addServer200Response1.equals(addServer200Response1));
        System.assert(addServer200Response3.equals(addServer200Response4));
        System.assert(addServer200Response4.equals(addServer200Response3));
        System.assert(addServer200Response3.equals(addServer200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAddServer200Response addServer200Response1 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response2 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response3 = new OASAddServer200Response();
        OASAddServer200Response addServer200Response4 = new OASAddServer200Response();

        System.assert(addServer200Response1.equals(addServer200Response2));
        System.assert(addServer200Response2.equals(addServer200Response1));
        System.assert(addServer200Response3.equals(addServer200Response4));
        System.assert(addServer200Response4.equals(addServer200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAddServer200Response addServer200Response1 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response2 = new OASAddServer200Response();

        System.assertEquals(false, addServer200Response1.equals('foo'));
        System.assertEquals(false, addServer200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAddServer200Response addServer200Response1 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response2 = new OASAddServer200Response();
        OASAddServer200Response addServer200Response3;

        System.assertEquals(false, addServer200Response1.equals(addServer200Response3));
        System.assertEquals(false, addServer200Response2.equals(addServer200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAddServer200Response addServer200Response1 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response2 = new OASAddServer200Response();

        System.assertEquals(addServer200Response1.hashCode(), addServer200Response1.hashCode());
        System.assertEquals(addServer200Response2.hashCode(), addServer200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAddServer200Response addServer200Response1 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response2 = OASAddServer200Response.getExample();
        OASAddServer200Response addServer200Response3 = new OASAddServer200Response();
        OASAddServer200Response addServer200Response4 = new OASAddServer200Response();

        System.assert(addServer200Response1.equals(addServer200Response2));
        System.assert(addServer200Response3.equals(addServer200Response4));
        System.assertEquals(addServer200Response1.hashCode(), addServer200Response2.hashCode());
        System.assertEquals(addServer200Response3.hashCode(), addServer200Response4.hashCode());
    }
}
