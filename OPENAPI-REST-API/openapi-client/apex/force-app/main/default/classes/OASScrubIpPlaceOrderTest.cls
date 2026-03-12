@isTest
private class OASScrubIpPlaceOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder1 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder2 = scrubIpPlaceOrder1;
        OASScrubIpPlaceOrder scrubIpPlaceOrder3 = new OASScrubIpPlaceOrder();
        OASScrubIpPlaceOrder scrubIpPlaceOrder4 = scrubIpPlaceOrder3;

        System.assert(scrubIpPlaceOrder1.equals(scrubIpPlaceOrder2));
        System.assert(scrubIpPlaceOrder2.equals(scrubIpPlaceOrder1));
        System.assert(scrubIpPlaceOrder1.equals(scrubIpPlaceOrder1));
        System.assert(scrubIpPlaceOrder3.equals(scrubIpPlaceOrder4));
        System.assert(scrubIpPlaceOrder4.equals(scrubIpPlaceOrder3));
        System.assert(scrubIpPlaceOrder3.equals(scrubIpPlaceOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder1 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder2 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder3 = new OASScrubIpPlaceOrder();
        OASScrubIpPlaceOrder scrubIpPlaceOrder4 = new OASScrubIpPlaceOrder();

        System.assert(scrubIpPlaceOrder1.equals(scrubIpPlaceOrder2));
        System.assert(scrubIpPlaceOrder2.equals(scrubIpPlaceOrder1));
        System.assert(scrubIpPlaceOrder3.equals(scrubIpPlaceOrder4));
        System.assert(scrubIpPlaceOrder4.equals(scrubIpPlaceOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder1 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder2 = new OASScrubIpPlaceOrder();

        System.assertEquals(false, scrubIpPlaceOrder1.equals('foo'));
        System.assertEquals(false, scrubIpPlaceOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder1 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder2 = new OASScrubIpPlaceOrder();
        OASScrubIpPlaceOrder scrubIpPlaceOrder3;

        System.assertEquals(false, scrubIpPlaceOrder1.equals(scrubIpPlaceOrder3));
        System.assertEquals(false, scrubIpPlaceOrder2.equals(scrubIpPlaceOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder1 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder2 = new OASScrubIpPlaceOrder();

        System.assertEquals(scrubIpPlaceOrder1.hashCode(), scrubIpPlaceOrder1.hashCode());
        System.assertEquals(scrubIpPlaceOrder2.hashCode(), scrubIpPlaceOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder1 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder2 = OASScrubIpPlaceOrder.getExample();
        OASScrubIpPlaceOrder scrubIpPlaceOrder3 = new OASScrubIpPlaceOrder();
        OASScrubIpPlaceOrder scrubIpPlaceOrder4 = new OASScrubIpPlaceOrder();

        System.assert(scrubIpPlaceOrder1.equals(scrubIpPlaceOrder2));
        System.assert(scrubIpPlaceOrder3.equals(scrubIpPlaceOrder4));
        System.assertEquals(scrubIpPlaceOrder1.hashCode(), scrubIpPlaceOrder2.hashCode());
        System.assertEquals(scrubIpPlaceOrder3.hashCode(), scrubIpPlaceOrder4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASScrubIpPlaceOrder scrubIpPlaceOrder = new OASScrubIpPlaceOrder();
        Map<String, String> x-property-mappings = scrubIpPlaceOrder.getx-property-mappings();
        System.assertEquals('serviceType', x-property-mappings.get('service_type'));
    }
}
