@isTest
private class OASServersCancel200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASServersCancel200Response serversCancel200Response1 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response2 = serversCancel200Response1;
        OASServersCancel200Response serversCancel200Response3 = new OASServersCancel200Response();
        OASServersCancel200Response serversCancel200Response4 = serversCancel200Response3;

        System.assert(serversCancel200Response1.equals(serversCancel200Response2));
        System.assert(serversCancel200Response2.equals(serversCancel200Response1));
        System.assert(serversCancel200Response1.equals(serversCancel200Response1));
        System.assert(serversCancel200Response3.equals(serversCancel200Response4));
        System.assert(serversCancel200Response4.equals(serversCancel200Response3));
        System.assert(serversCancel200Response3.equals(serversCancel200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServersCancel200Response serversCancel200Response1 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response2 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response3 = new OASServersCancel200Response();
        OASServersCancel200Response serversCancel200Response4 = new OASServersCancel200Response();

        System.assert(serversCancel200Response1.equals(serversCancel200Response2));
        System.assert(serversCancel200Response2.equals(serversCancel200Response1));
        System.assert(serversCancel200Response3.equals(serversCancel200Response4));
        System.assert(serversCancel200Response4.equals(serversCancel200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServersCancel200Response serversCancel200Response1 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response2 = new OASServersCancel200Response();

        System.assertEquals(false, serversCancel200Response1.equals('foo'));
        System.assertEquals(false, serversCancel200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServersCancel200Response serversCancel200Response1 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response2 = new OASServersCancel200Response();
        OASServersCancel200Response serversCancel200Response3;

        System.assertEquals(false, serversCancel200Response1.equals(serversCancel200Response3));
        System.assertEquals(false, serversCancel200Response2.equals(serversCancel200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServersCancel200Response serversCancel200Response1 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response2 = new OASServersCancel200Response();

        System.assertEquals(serversCancel200Response1.hashCode(), serversCancel200Response1.hashCode());
        System.assertEquals(serversCancel200Response2.hashCode(), serversCancel200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServersCancel200Response serversCancel200Response1 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response2 = OASServersCancel200Response.getExample();
        OASServersCancel200Response serversCancel200Response3 = new OASServersCancel200Response();
        OASServersCancel200Response serversCancel200Response4 = new OASServersCancel200Response();

        System.assert(serversCancel200Response1.equals(serversCancel200Response2));
        System.assert(serversCancel200Response3.equals(serversCancel200Response4));
        System.assertEquals(serversCancel200Response1.hashCode(), serversCancel200Response2.hashCode());
        System.assertEquals(serversCancel200Response3.hashCode(), serversCancel200Response4.hashCode());
    }
}
