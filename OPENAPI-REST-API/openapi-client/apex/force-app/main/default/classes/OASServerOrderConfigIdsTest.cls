@isTest
private class OASServerOrderConfigIdsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderConfigIds serverOrderConfigIds1 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds2 = serverOrderConfigIds1;
        OASServerOrderConfigIds serverOrderConfigIds3 = new OASServerOrderConfigIds();
        OASServerOrderConfigIds serverOrderConfigIds4 = serverOrderConfigIds3;

        System.assert(serverOrderConfigIds1.equals(serverOrderConfigIds2));
        System.assert(serverOrderConfigIds2.equals(serverOrderConfigIds1));
        System.assert(serverOrderConfigIds1.equals(serverOrderConfigIds1));
        System.assert(serverOrderConfigIds3.equals(serverOrderConfigIds4));
        System.assert(serverOrderConfigIds4.equals(serverOrderConfigIds3));
        System.assert(serverOrderConfigIds3.equals(serverOrderConfigIds3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderConfigIds serverOrderConfigIds1 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds2 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds3 = new OASServerOrderConfigIds();
        OASServerOrderConfigIds serverOrderConfigIds4 = new OASServerOrderConfigIds();

        System.assert(serverOrderConfigIds1.equals(serverOrderConfigIds2));
        System.assert(serverOrderConfigIds2.equals(serverOrderConfigIds1));
        System.assert(serverOrderConfigIds3.equals(serverOrderConfigIds4));
        System.assert(serverOrderConfigIds4.equals(serverOrderConfigIds3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderConfigIds serverOrderConfigIds1 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds2 = new OASServerOrderConfigIds();

        System.assertEquals(false, serverOrderConfigIds1.equals('foo'));
        System.assertEquals(false, serverOrderConfigIds2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderConfigIds serverOrderConfigIds1 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds2 = new OASServerOrderConfigIds();
        OASServerOrderConfigIds serverOrderConfigIds3;

        System.assertEquals(false, serverOrderConfigIds1.equals(serverOrderConfigIds3));
        System.assertEquals(false, serverOrderConfigIds2.equals(serverOrderConfigIds3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderConfigIds serverOrderConfigIds1 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds2 = new OASServerOrderConfigIds();

        System.assertEquals(serverOrderConfigIds1.hashCode(), serverOrderConfigIds1.hashCode());
        System.assertEquals(serverOrderConfigIds2.hashCode(), serverOrderConfigIds2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderConfigIds serverOrderConfigIds1 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds2 = OASServerOrderConfigIds.getExample();
        OASServerOrderConfigIds serverOrderConfigIds3 = new OASServerOrderConfigIds();
        OASServerOrderConfigIds serverOrderConfigIds4 = new OASServerOrderConfigIds();

        System.assert(serverOrderConfigIds1.equals(serverOrderConfigIds2));
        System.assert(serverOrderConfigIds3.equals(serverOrderConfigIds4));
        System.assertEquals(serverOrderConfigIds1.hashCode(), serverOrderConfigIds2.hashCode());
        System.assertEquals(serverOrderConfigIds3.hashCode(), serverOrderConfigIds4.hashCode());
    }
}
