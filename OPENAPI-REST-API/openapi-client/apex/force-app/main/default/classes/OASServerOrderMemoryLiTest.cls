@isTest
private class OASServerOrderMemoryLiTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderMemoryLi serverOrderMemoryLi1 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi2 = serverOrderMemoryLi1;
        OASServerOrderMemoryLi serverOrderMemoryLi3 = new OASServerOrderMemoryLi();
        OASServerOrderMemoryLi serverOrderMemoryLi4 = serverOrderMemoryLi3;

        System.assert(serverOrderMemoryLi1.equals(serverOrderMemoryLi2));
        System.assert(serverOrderMemoryLi2.equals(serverOrderMemoryLi1));
        System.assert(serverOrderMemoryLi1.equals(serverOrderMemoryLi1));
        System.assert(serverOrderMemoryLi3.equals(serverOrderMemoryLi4));
        System.assert(serverOrderMemoryLi4.equals(serverOrderMemoryLi3));
        System.assert(serverOrderMemoryLi3.equals(serverOrderMemoryLi3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderMemoryLi serverOrderMemoryLi1 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi2 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi3 = new OASServerOrderMemoryLi();
        OASServerOrderMemoryLi serverOrderMemoryLi4 = new OASServerOrderMemoryLi();

        System.assert(serverOrderMemoryLi1.equals(serverOrderMemoryLi2));
        System.assert(serverOrderMemoryLi2.equals(serverOrderMemoryLi1));
        System.assert(serverOrderMemoryLi3.equals(serverOrderMemoryLi4));
        System.assert(serverOrderMemoryLi4.equals(serverOrderMemoryLi3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderMemoryLi serverOrderMemoryLi1 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi2 = new OASServerOrderMemoryLi();

        System.assertEquals(false, serverOrderMemoryLi1.equals('foo'));
        System.assertEquals(false, serverOrderMemoryLi2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderMemoryLi serverOrderMemoryLi1 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi2 = new OASServerOrderMemoryLi();
        OASServerOrderMemoryLi serverOrderMemoryLi3;

        System.assertEquals(false, serverOrderMemoryLi1.equals(serverOrderMemoryLi3));
        System.assertEquals(false, serverOrderMemoryLi2.equals(serverOrderMemoryLi3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderMemoryLi serverOrderMemoryLi1 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi2 = new OASServerOrderMemoryLi();

        System.assertEquals(serverOrderMemoryLi1.hashCode(), serverOrderMemoryLi1.hashCode());
        System.assertEquals(serverOrderMemoryLi2.hashCode(), serverOrderMemoryLi2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderMemoryLi serverOrderMemoryLi1 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi2 = OASServerOrderMemoryLi.getExample();
        OASServerOrderMemoryLi serverOrderMemoryLi3 = new OASServerOrderMemoryLi();
        OASServerOrderMemoryLi serverOrderMemoryLi4 = new OASServerOrderMemoryLi();

        System.assert(serverOrderMemoryLi1.equals(serverOrderMemoryLi2));
        System.assert(serverOrderMemoryLi3.equals(serverOrderMemoryLi4));
        System.assertEquals(serverOrderMemoryLi1.hashCode(), serverOrderMemoryLi2.hashCode());
        System.assertEquals(serverOrderMemoryLi3.hashCode(), serverOrderMemoryLi4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderMemoryLi serverOrderMemoryLi = new OASServerOrderMemoryLi();
        Map<String, String> x-property-mappings = serverOrderMemoryLi.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('254'));
    }
}
