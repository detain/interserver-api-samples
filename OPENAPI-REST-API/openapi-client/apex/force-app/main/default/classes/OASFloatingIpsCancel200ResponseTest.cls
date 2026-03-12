@isTest
private class OASFloatingIpsCancel200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASFloatingIpsCancel200Response floatingIpsCancel200Response1 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response2 = floatingIpsCancel200Response1;
        OASFloatingIpsCancel200Response floatingIpsCancel200Response3 = new OASFloatingIpsCancel200Response();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response4 = floatingIpsCancel200Response3;

        System.assert(floatingIpsCancel200Response1.equals(floatingIpsCancel200Response2));
        System.assert(floatingIpsCancel200Response2.equals(floatingIpsCancel200Response1));
        System.assert(floatingIpsCancel200Response1.equals(floatingIpsCancel200Response1));
        System.assert(floatingIpsCancel200Response3.equals(floatingIpsCancel200Response4));
        System.assert(floatingIpsCancel200Response4.equals(floatingIpsCancel200Response3));
        System.assert(floatingIpsCancel200Response3.equals(floatingIpsCancel200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASFloatingIpsCancel200Response floatingIpsCancel200Response1 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response2 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response3 = new OASFloatingIpsCancel200Response();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response4 = new OASFloatingIpsCancel200Response();

        System.assert(floatingIpsCancel200Response1.equals(floatingIpsCancel200Response2));
        System.assert(floatingIpsCancel200Response2.equals(floatingIpsCancel200Response1));
        System.assert(floatingIpsCancel200Response3.equals(floatingIpsCancel200Response4));
        System.assert(floatingIpsCancel200Response4.equals(floatingIpsCancel200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASFloatingIpsCancel200Response floatingIpsCancel200Response1 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response2 = new OASFloatingIpsCancel200Response();

        System.assertEquals(false, floatingIpsCancel200Response1.equals('foo'));
        System.assertEquals(false, floatingIpsCancel200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASFloatingIpsCancel200Response floatingIpsCancel200Response1 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response2 = new OASFloatingIpsCancel200Response();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response3;

        System.assertEquals(false, floatingIpsCancel200Response1.equals(floatingIpsCancel200Response3));
        System.assertEquals(false, floatingIpsCancel200Response2.equals(floatingIpsCancel200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASFloatingIpsCancel200Response floatingIpsCancel200Response1 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response2 = new OASFloatingIpsCancel200Response();

        System.assertEquals(floatingIpsCancel200Response1.hashCode(), floatingIpsCancel200Response1.hashCode());
        System.assertEquals(floatingIpsCancel200Response2.hashCode(), floatingIpsCancel200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASFloatingIpsCancel200Response floatingIpsCancel200Response1 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response2 = OASFloatingIpsCancel200Response.getExample();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response3 = new OASFloatingIpsCancel200Response();
        OASFloatingIpsCancel200Response floatingIpsCancel200Response4 = new OASFloatingIpsCancel200Response();

        System.assert(floatingIpsCancel200Response1.equals(floatingIpsCancel200Response2));
        System.assert(floatingIpsCancel200Response3.equals(floatingIpsCancel200Response4));
        System.assertEquals(floatingIpsCancel200Response1.hashCode(), floatingIpsCancel200Response2.hashCode());
        System.assertEquals(floatingIpsCancel200Response3.hashCode(), floatingIpsCancel200Response4.hashCode());
    }
}
