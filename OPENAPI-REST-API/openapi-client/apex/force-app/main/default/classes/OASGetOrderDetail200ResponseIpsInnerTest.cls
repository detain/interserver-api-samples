@isTest
private class OASGetOrderDetail200ResponseIpsInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner1 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner2 = getOrderDetail200ResponseIpsInner1;
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner3 = new OASGetOrderDetail200ResponseIpsInner();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner4 = getOrderDetail200ResponseIpsInner3;

        System.assert(getOrderDetail200ResponseIpsInner1.equals(getOrderDetail200ResponseIpsInner2));
        System.assert(getOrderDetail200ResponseIpsInner2.equals(getOrderDetail200ResponseIpsInner1));
        System.assert(getOrderDetail200ResponseIpsInner1.equals(getOrderDetail200ResponseIpsInner1));
        System.assert(getOrderDetail200ResponseIpsInner3.equals(getOrderDetail200ResponseIpsInner4));
        System.assert(getOrderDetail200ResponseIpsInner4.equals(getOrderDetail200ResponseIpsInner3));
        System.assert(getOrderDetail200ResponseIpsInner3.equals(getOrderDetail200ResponseIpsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner1 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner2 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner3 = new OASGetOrderDetail200ResponseIpsInner();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner4 = new OASGetOrderDetail200ResponseIpsInner();

        System.assert(getOrderDetail200ResponseIpsInner1.equals(getOrderDetail200ResponseIpsInner2));
        System.assert(getOrderDetail200ResponseIpsInner2.equals(getOrderDetail200ResponseIpsInner1));
        System.assert(getOrderDetail200ResponseIpsInner3.equals(getOrderDetail200ResponseIpsInner4));
        System.assert(getOrderDetail200ResponseIpsInner4.equals(getOrderDetail200ResponseIpsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner1 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner2 = new OASGetOrderDetail200ResponseIpsInner();

        System.assertEquals(false, getOrderDetail200ResponseIpsInner1.equals('foo'));
        System.assertEquals(false, getOrderDetail200ResponseIpsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner1 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner2 = new OASGetOrderDetail200ResponseIpsInner();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner3;

        System.assertEquals(false, getOrderDetail200ResponseIpsInner1.equals(getOrderDetail200ResponseIpsInner3));
        System.assertEquals(false, getOrderDetail200ResponseIpsInner2.equals(getOrderDetail200ResponseIpsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner1 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner2 = new OASGetOrderDetail200ResponseIpsInner();

        System.assertEquals(getOrderDetail200ResponseIpsInner1.hashCode(), getOrderDetail200ResponseIpsInner1.hashCode());
        System.assertEquals(getOrderDetail200ResponseIpsInner2.hashCode(), getOrderDetail200ResponseIpsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner1 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner2 = OASGetOrderDetail200ResponseIpsInner.getExample();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner3 = new OASGetOrderDetail200ResponseIpsInner();
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner4 = new OASGetOrderDetail200ResponseIpsInner();

        System.assert(getOrderDetail200ResponseIpsInner1.equals(getOrderDetail200ResponseIpsInner2));
        System.assert(getOrderDetail200ResponseIpsInner3.equals(getOrderDetail200ResponseIpsInner4));
        System.assertEquals(getOrderDetail200ResponseIpsInner1.hashCode(), getOrderDetail200ResponseIpsInner2.hashCode());
        System.assertEquals(getOrderDetail200ResponseIpsInner3.hashCode(), getOrderDetail200ResponseIpsInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetOrderDetail200ResponseIpsInner getOrderDetail200ResponseIpsInner = new OASGetOrderDetail200ResponseIpsInner();
        Map<String, String> x-property-mappings = getOrderDetail200ResponseIpsInner.getx-property-mappings();
        System.assertEquals('serviceId', x-property-mappings.get('service_id'));
        System.assertEquals('serviceModule', x-property-mappings.get('service_module'));
        System.assertEquals('serviceHostname', x-property-mappings.get('service_hostname'));
    }
}
