@isTest
private class OASServerOrderCpLiTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderCpLi serverOrderCpLi1 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi2 = serverOrderCpLi1;
        OASServerOrderCpLi serverOrderCpLi3 = new OASServerOrderCpLi();
        OASServerOrderCpLi serverOrderCpLi4 = serverOrderCpLi3;

        System.assert(serverOrderCpLi1.equals(serverOrderCpLi2));
        System.assert(serverOrderCpLi2.equals(serverOrderCpLi1));
        System.assert(serverOrderCpLi1.equals(serverOrderCpLi1));
        System.assert(serverOrderCpLi3.equals(serverOrderCpLi4));
        System.assert(serverOrderCpLi4.equals(serverOrderCpLi3));
        System.assert(serverOrderCpLi3.equals(serverOrderCpLi3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderCpLi serverOrderCpLi1 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi2 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi3 = new OASServerOrderCpLi();
        OASServerOrderCpLi serverOrderCpLi4 = new OASServerOrderCpLi();

        System.assert(serverOrderCpLi1.equals(serverOrderCpLi2));
        System.assert(serverOrderCpLi2.equals(serverOrderCpLi1));
        System.assert(serverOrderCpLi3.equals(serverOrderCpLi4));
        System.assert(serverOrderCpLi4.equals(serverOrderCpLi3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderCpLi serverOrderCpLi1 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi2 = new OASServerOrderCpLi();

        System.assertEquals(false, serverOrderCpLi1.equals('foo'));
        System.assertEquals(false, serverOrderCpLi2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderCpLi serverOrderCpLi1 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi2 = new OASServerOrderCpLi();
        OASServerOrderCpLi serverOrderCpLi3;

        System.assertEquals(false, serverOrderCpLi1.equals(serverOrderCpLi3));
        System.assertEquals(false, serverOrderCpLi2.equals(serverOrderCpLi3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderCpLi serverOrderCpLi1 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi2 = new OASServerOrderCpLi();

        System.assertEquals(serverOrderCpLi1.hashCode(), serverOrderCpLi1.hashCode());
        System.assertEquals(serverOrderCpLi2.hashCode(), serverOrderCpLi2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderCpLi serverOrderCpLi1 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi2 = OASServerOrderCpLi.getExample();
        OASServerOrderCpLi serverOrderCpLi3 = new OASServerOrderCpLi();
        OASServerOrderCpLi serverOrderCpLi4 = new OASServerOrderCpLi();

        System.assert(serverOrderCpLi1.equals(serverOrderCpLi2));
        System.assert(serverOrderCpLi3.equals(serverOrderCpLi4));
        System.assertEquals(serverOrderCpLi1.hashCode(), serverOrderCpLi2.hashCode());
        System.assertEquals(serverOrderCpLi3.hashCode(), serverOrderCpLi4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderCpLi serverOrderCpLi = new OASServerOrderCpLi();
        Map<String, String> x-property-mappings = serverOrderCpLi.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('9'));
    }
}
