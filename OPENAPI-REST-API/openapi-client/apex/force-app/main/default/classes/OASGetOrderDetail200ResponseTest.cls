@isTest
private class OASGetOrderDetail200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetOrderDetail200Response getOrderDetail200Response1 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response2 = getOrderDetail200Response1;
        OASGetOrderDetail200Response getOrderDetail200Response3 = new OASGetOrderDetail200Response();
        OASGetOrderDetail200Response getOrderDetail200Response4 = getOrderDetail200Response3;

        System.assert(getOrderDetail200Response1.equals(getOrderDetail200Response2));
        System.assert(getOrderDetail200Response2.equals(getOrderDetail200Response1));
        System.assert(getOrderDetail200Response1.equals(getOrderDetail200Response1));
        System.assert(getOrderDetail200Response3.equals(getOrderDetail200Response4));
        System.assert(getOrderDetail200Response4.equals(getOrderDetail200Response3));
        System.assert(getOrderDetail200Response3.equals(getOrderDetail200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetOrderDetail200Response getOrderDetail200Response1 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response2 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response3 = new OASGetOrderDetail200Response();
        OASGetOrderDetail200Response getOrderDetail200Response4 = new OASGetOrderDetail200Response();

        System.assert(getOrderDetail200Response1.equals(getOrderDetail200Response2));
        System.assert(getOrderDetail200Response2.equals(getOrderDetail200Response1));
        System.assert(getOrderDetail200Response3.equals(getOrderDetail200Response4));
        System.assert(getOrderDetail200Response4.equals(getOrderDetail200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetOrderDetail200Response getOrderDetail200Response1 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response2 = new OASGetOrderDetail200Response();

        System.assertEquals(false, getOrderDetail200Response1.equals('foo'));
        System.assertEquals(false, getOrderDetail200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetOrderDetail200Response getOrderDetail200Response1 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response2 = new OASGetOrderDetail200Response();
        OASGetOrderDetail200Response getOrderDetail200Response3;

        System.assertEquals(false, getOrderDetail200Response1.equals(getOrderDetail200Response3));
        System.assertEquals(false, getOrderDetail200Response2.equals(getOrderDetail200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetOrderDetail200Response getOrderDetail200Response1 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response2 = new OASGetOrderDetail200Response();

        System.assertEquals(getOrderDetail200Response1.hashCode(), getOrderDetail200Response1.hashCode());
        System.assertEquals(getOrderDetail200Response2.hashCode(), getOrderDetail200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetOrderDetail200Response getOrderDetail200Response1 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response2 = OASGetOrderDetail200Response.getExample();
        OASGetOrderDetail200Response getOrderDetail200Response3 = new OASGetOrderDetail200Response();
        OASGetOrderDetail200Response getOrderDetail200Response4 = new OASGetOrderDetail200Response();

        System.assert(getOrderDetail200Response1.equals(getOrderDetail200Response2));
        System.assert(getOrderDetail200Response3.equals(getOrderDetail200Response4));
        System.assertEquals(getOrderDetail200Response1.hashCode(), getOrderDetail200Response2.hashCode());
        System.assertEquals(getOrderDetail200Response3.hashCode(), getOrderDetail200Response4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASGetOrderDetail200Response getOrderDetail200Response = new OASGetOrderDetail200Response();
        System.assertEquals(new List<OASGetOrderDetail200ResponseServiceT>(), getOrderDetail200Response.serviceTypes);
        System.assertEquals(new List<OASGetOrderDetail200ResponseIpsInner>(), getOrderDetail200Response.ips);
        System.assertEquals(null, getOrderDetail200Response.packageCosts);
    }
}
