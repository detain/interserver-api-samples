@isTest
private class OASServerOrderBandwidthLiTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi1 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi2 = serverOrderBandwidthLi1;
        OASServerOrderBandwidthLi serverOrderBandwidthLi3 = new OASServerOrderBandwidthLi();
        OASServerOrderBandwidthLi serverOrderBandwidthLi4 = serverOrderBandwidthLi3;

        System.assert(serverOrderBandwidthLi1.equals(serverOrderBandwidthLi2));
        System.assert(serverOrderBandwidthLi2.equals(serverOrderBandwidthLi1));
        System.assert(serverOrderBandwidthLi1.equals(serverOrderBandwidthLi1));
        System.assert(serverOrderBandwidthLi3.equals(serverOrderBandwidthLi4));
        System.assert(serverOrderBandwidthLi4.equals(serverOrderBandwidthLi3));
        System.assert(serverOrderBandwidthLi3.equals(serverOrderBandwidthLi3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi1 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi2 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi3 = new OASServerOrderBandwidthLi();
        OASServerOrderBandwidthLi serverOrderBandwidthLi4 = new OASServerOrderBandwidthLi();

        System.assert(serverOrderBandwidthLi1.equals(serverOrderBandwidthLi2));
        System.assert(serverOrderBandwidthLi2.equals(serverOrderBandwidthLi1));
        System.assert(serverOrderBandwidthLi3.equals(serverOrderBandwidthLi4));
        System.assert(serverOrderBandwidthLi4.equals(serverOrderBandwidthLi3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi1 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi2 = new OASServerOrderBandwidthLi();

        System.assertEquals(false, serverOrderBandwidthLi1.equals('foo'));
        System.assertEquals(false, serverOrderBandwidthLi2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi1 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi2 = new OASServerOrderBandwidthLi();
        OASServerOrderBandwidthLi serverOrderBandwidthLi3;

        System.assertEquals(false, serverOrderBandwidthLi1.equals(serverOrderBandwidthLi3));
        System.assertEquals(false, serverOrderBandwidthLi2.equals(serverOrderBandwidthLi3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi1 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi2 = new OASServerOrderBandwidthLi();

        System.assertEquals(serverOrderBandwidthLi1.hashCode(), serverOrderBandwidthLi1.hashCode());
        System.assertEquals(serverOrderBandwidthLi2.hashCode(), serverOrderBandwidthLi2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi1 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi2 = OASServerOrderBandwidthLi.getExample();
        OASServerOrderBandwidthLi serverOrderBandwidthLi3 = new OASServerOrderBandwidthLi();
        OASServerOrderBandwidthLi serverOrderBandwidthLi4 = new OASServerOrderBandwidthLi();

        System.assert(serverOrderBandwidthLi1.equals(serverOrderBandwidthLi2));
        System.assert(serverOrderBandwidthLi3.equals(serverOrderBandwidthLi4));
        System.assertEquals(serverOrderBandwidthLi1.hashCode(), serverOrderBandwidthLi2.hashCode());
        System.assertEquals(serverOrderBandwidthLi3.hashCode(), serverOrderBandwidthLi4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderBandwidthLi serverOrderBandwidthLi = new OASServerOrderBandwidthLi();
        Map<String, String> x-property-mappings = serverOrderBandwidthLi.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('15'));
    }
}
