@isTest
private class OASVpsOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrder vpsOrder1 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder2 = vpsOrder1;
        OASVpsOrder vpsOrder3 = new OASVpsOrder();
        OASVpsOrder vpsOrder4 = vpsOrder3;

        System.assert(vpsOrder1.equals(vpsOrder2));
        System.assert(vpsOrder2.equals(vpsOrder1));
        System.assert(vpsOrder1.equals(vpsOrder1));
        System.assert(vpsOrder3.equals(vpsOrder4));
        System.assert(vpsOrder4.equals(vpsOrder3));
        System.assert(vpsOrder3.equals(vpsOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrder vpsOrder1 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder2 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder3 = new OASVpsOrder();
        OASVpsOrder vpsOrder4 = new OASVpsOrder();

        System.assert(vpsOrder1.equals(vpsOrder2));
        System.assert(vpsOrder2.equals(vpsOrder1));
        System.assert(vpsOrder3.equals(vpsOrder4));
        System.assert(vpsOrder4.equals(vpsOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrder vpsOrder1 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder2 = new OASVpsOrder();

        System.assertEquals(false, vpsOrder1.equals('foo'));
        System.assertEquals(false, vpsOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrder vpsOrder1 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder2 = new OASVpsOrder();
        OASVpsOrder vpsOrder3;

        System.assertEquals(false, vpsOrder1.equals(vpsOrder3));
        System.assertEquals(false, vpsOrder2.equals(vpsOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrder vpsOrder1 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder2 = new OASVpsOrder();

        System.assertEquals(vpsOrder1.hashCode(), vpsOrder1.hashCode());
        System.assertEquals(vpsOrder2.hashCode(), vpsOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrder vpsOrder1 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder2 = OASVpsOrder.getExample();
        OASVpsOrder vpsOrder3 = new OASVpsOrder();
        OASVpsOrder vpsOrder4 = new OASVpsOrder();

        System.assert(vpsOrder1.equals(vpsOrder2));
        System.assert(vpsOrder3.equals(vpsOrder4));
        System.assertEquals(vpsOrder1.hashCode(), vpsOrder2.hashCode());
        System.assertEquals(vpsOrder3.hashCode(), vpsOrder4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrder vpsOrder = new OASVpsOrder();
        Map<String, String> x-property-mappings = vpsOrder.getx-property-mappings();
        System.assertEquals('r_currency', x-property-mappings.get('currency'));
    }
}
