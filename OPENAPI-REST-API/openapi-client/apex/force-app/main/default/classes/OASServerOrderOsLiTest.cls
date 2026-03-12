@isTest
private class OASServerOrderOsLiTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderOsLi serverOrderOsLi1 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi2 = serverOrderOsLi1;
        OASServerOrderOsLi serverOrderOsLi3 = new OASServerOrderOsLi();
        OASServerOrderOsLi serverOrderOsLi4 = serverOrderOsLi3;

        System.assert(serverOrderOsLi1.equals(serverOrderOsLi2));
        System.assert(serverOrderOsLi2.equals(serverOrderOsLi1));
        System.assert(serverOrderOsLi1.equals(serverOrderOsLi1));
        System.assert(serverOrderOsLi3.equals(serverOrderOsLi4));
        System.assert(serverOrderOsLi4.equals(serverOrderOsLi3));
        System.assert(serverOrderOsLi3.equals(serverOrderOsLi3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderOsLi serverOrderOsLi1 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi2 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi3 = new OASServerOrderOsLi();
        OASServerOrderOsLi serverOrderOsLi4 = new OASServerOrderOsLi();

        System.assert(serverOrderOsLi1.equals(serverOrderOsLi2));
        System.assert(serverOrderOsLi2.equals(serverOrderOsLi1));
        System.assert(serverOrderOsLi3.equals(serverOrderOsLi4));
        System.assert(serverOrderOsLi4.equals(serverOrderOsLi3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderOsLi serverOrderOsLi1 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi2 = new OASServerOrderOsLi();

        System.assertEquals(false, serverOrderOsLi1.equals('foo'));
        System.assertEquals(false, serverOrderOsLi2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderOsLi serverOrderOsLi1 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi2 = new OASServerOrderOsLi();
        OASServerOrderOsLi serverOrderOsLi3;

        System.assertEquals(false, serverOrderOsLi1.equals(serverOrderOsLi3));
        System.assertEquals(false, serverOrderOsLi2.equals(serverOrderOsLi3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderOsLi serverOrderOsLi1 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi2 = new OASServerOrderOsLi();

        System.assertEquals(serverOrderOsLi1.hashCode(), serverOrderOsLi1.hashCode());
        System.assertEquals(serverOrderOsLi2.hashCode(), serverOrderOsLi2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderOsLi serverOrderOsLi1 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi2 = OASServerOrderOsLi.getExample();
        OASServerOrderOsLi serverOrderOsLi3 = new OASServerOrderOsLi();
        OASServerOrderOsLi serverOrderOsLi4 = new OASServerOrderOsLi();

        System.assert(serverOrderOsLi1.equals(serverOrderOsLi2));
        System.assert(serverOrderOsLi3.equals(serverOrderOsLi4));
        System.assertEquals(serverOrderOsLi1.hashCode(), serverOrderOsLi2.hashCode());
        System.assertEquals(serverOrderOsLi3.hashCode(), serverOrderOsLi4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderOsLi serverOrderOsLi = new OASServerOrderOsLi();
        Map<String, String> x-property-mappings = serverOrderOsLi.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('51'));
    }
}
