@isTest
private class OASServerOrderIpsLiTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderIpsLi serverOrderIpsLi1 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi2 = serverOrderIpsLi1;
        OASServerOrderIpsLi serverOrderIpsLi3 = new OASServerOrderIpsLi();
        OASServerOrderIpsLi serverOrderIpsLi4 = serverOrderIpsLi3;

        System.assert(serverOrderIpsLi1.equals(serverOrderIpsLi2));
        System.assert(serverOrderIpsLi2.equals(serverOrderIpsLi1));
        System.assert(serverOrderIpsLi1.equals(serverOrderIpsLi1));
        System.assert(serverOrderIpsLi3.equals(serverOrderIpsLi4));
        System.assert(serverOrderIpsLi4.equals(serverOrderIpsLi3));
        System.assert(serverOrderIpsLi3.equals(serverOrderIpsLi3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderIpsLi serverOrderIpsLi1 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi2 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi3 = new OASServerOrderIpsLi();
        OASServerOrderIpsLi serverOrderIpsLi4 = new OASServerOrderIpsLi();

        System.assert(serverOrderIpsLi1.equals(serverOrderIpsLi2));
        System.assert(serverOrderIpsLi2.equals(serverOrderIpsLi1));
        System.assert(serverOrderIpsLi3.equals(serverOrderIpsLi4));
        System.assert(serverOrderIpsLi4.equals(serverOrderIpsLi3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderIpsLi serverOrderIpsLi1 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi2 = new OASServerOrderIpsLi();

        System.assertEquals(false, serverOrderIpsLi1.equals('foo'));
        System.assertEquals(false, serverOrderIpsLi2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderIpsLi serverOrderIpsLi1 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi2 = new OASServerOrderIpsLi();
        OASServerOrderIpsLi serverOrderIpsLi3;

        System.assertEquals(false, serverOrderIpsLi1.equals(serverOrderIpsLi3));
        System.assertEquals(false, serverOrderIpsLi2.equals(serverOrderIpsLi3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderIpsLi serverOrderIpsLi1 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi2 = new OASServerOrderIpsLi();

        System.assertEquals(serverOrderIpsLi1.hashCode(), serverOrderIpsLi1.hashCode());
        System.assertEquals(serverOrderIpsLi2.hashCode(), serverOrderIpsLi2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderIpsLi serverOrderIpsLi1 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi2 = OASServerOrderIpsLi.getExample();
        OASServerOrderIpsLi serverOrderIpsLi3 = new OASServerOrderIpsLi();
        OASServerOrderIpsLi serverOrderIpsLi4 = new OASServerOrderIpsLi();

        System.assert(serverOrderIpsLi1.equals(serverOrderIpsLi2));
        System.assert(serverOrderIpsLi3.equals(serverOrderIpsLi4));
        System.assertEquals(serverOrderIpsLi1.hashCode(), serverOrderIpsLi2.hashCode());
        System.assertEquals(serverOrderIpsLi3.hashCode(), serverOrderIpsLi4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderIpsLi serverOrderIpsLi = new OASServerOrderIpsLi();
        Map<String, String> x-property-mappings = serverOrderIpsLi.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('9'));
    }
}
