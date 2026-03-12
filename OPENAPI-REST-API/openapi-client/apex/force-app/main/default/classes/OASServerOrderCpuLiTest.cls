@isTest
private class OASServerOrderCpuLiTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderCpuLi serverOrderCpuLi1 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi2 = serverOrderCpuLi1;
        OASServerOrderCpuLi serverOrderCpuLi3 = new OASServerOrderCpuLi();
        OASServerOrderCpuLi serverOrderCpuLi4 = serverOrderCpuLi3;

        System.assert(serverOrderCpuLi1.equals(serverOrderCpuLi2));
        System.assert(serverOrderCpuLi2.equals(serverOrderCpuLi1));
        System.assert(serverOrderCpuLi1.equals(serverOrderCpuLi1));
        System.assert(serverOrderCpuLi3.equals(serverOrderCpuLi4));
        System.assert(serverOrderCpuLi4.equals(serverOrderCpuLi3));
        System.assert(serverOrderCpuLi3.equals(serverOrderCpuLi3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderCpuLi serverOrderCpuLi1 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi2 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi3 = new OASServerOrderCpuLi();
        OASServerOrderCpuLi serverOrderCpuLi4 = new OASServerOrderCpuLi();

        System.assert(serverOrderCpuLi1.equals(serverOrderCpuLi2));
        System.assert(serverOrderCpuLi2.equals(serverOrderCpuLi1));
        System.assert(serverOrderCpuLi3.equals(serverOrderCpuLi4));
        System.assert(serverOrderCpuLi4.equals(serverOrderCpuLi3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderCpuLi serverOrderCpuLi1 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi2 = new OASServerOrderCpuLi();

        System.assertEquals(false, serverOrderCpuLi1.equals('foo'));
        System.assertEquals(false, serverOrderCpuLi2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderCpuLi serverOrderCpuLi1 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi2 = new OASServerOrderCpuLi();
        OASServerOrderCpuLi serverOrderCpuLi3;

        System.assertEquals(false, serverOrderCpuLi1.equals(serverOrderCpuLi3));
        System.assertEquals(false, serverOrderCpuLi2.equals(serverOrderCpuLi3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderCpuLi serverOrderCpuLi1 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi2 = new OASServerOrderCpuLi();

        System.assertEquals(serverOrderCpuLi1.hashCode(), serverOrderCpuLi1.hashCode());
        System.assertEquals(serverOrderCpuLi2.hashCode(), serverOrderCpuLi2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderCpuLi serverOrderCpuLi1 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi2 = OASServerOrderCpuLi.getExample();
        OASServerOrderCpuLi serverOrderCpuLi3 = new OASServerOrderCpuLi();
        OASServerOrderCpuLi serverOrderCpuLi4 = new OASServerOrderCpuLi();

        System.assert(serverOrderCpuLi1.equals(serverOrderCpuLi2));
        System.assert(serverOrderCpuLi3.equals(serverOrderCpuLi4));
        System.assertEquals(serverOrderCpuLi1.hashCode(), serverOrderCpuLi2.hashCode());
        System.assertEquals(serverOrderCpuLi3.hashCode(), serverOrderCpuLi4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderCpuLi serverOrderCpuLi = new OASServerOrderCpuLi();
        Map<String, String> x-property-mappings = serverOrderCpuLi.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('254'));
    }
}
