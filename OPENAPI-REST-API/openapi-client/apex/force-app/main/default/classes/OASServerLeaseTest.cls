@isTest
private class OASServerLeaseTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerLease serverLease1 = OASServerLease.getExample();
        OASServerLease serverLease2 = serverLease1;
        OASServerLease serverLease3 = new OASServerLease();
        OASServerLease serverLease4 = serverLease3;

        System.assert(serverLease1.equals(serverLease2));
        System.assert(serverLease2.equals(serverLease1));
        System.assert(serverLease1.equals(serverLease1));
        System.assert(serverLease3.equals(serverLease4));
        System.assert(serverLease4.equals(serverLease3));
        System.assert(serverLease3.equals(serverLease3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerLease serverLease1 = OASServerLease.getExample();
        OASServerLease serverLease2 = OASServerLease.getExample();
        OASServerLease serverLease3 = new OASServerLease();
        OASServerLease serverLease4 = new OASServerLease();

        System.assert(serverLease1.equals(serverLease2));
        System.assert(serverLease2.equals(serverLease1));
        System.assert(serverLease3.equals(serverLease4));
        System.assert(serverLease4.equals(serverLease3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerLease serverLease1 = OASServerLease.getExample();
        OASServerLease serverLease2 = new OASServerLease();

        System.assertEquals(false, serverLease1.equals('foo'));
        System.assertEquals(false, serverLease2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerLease serverLease1 = OASServerLease.getExample();
        OASServerLease serverLease2 = new OASServerLease();
        OASServerLease serverLease3;

        System.assertEquals(false, serverLease1.equals(serverLease3));
        System.assertEquals(false, serverLease2.equals(serverLease3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerLease serverLease1 = OASServerLease.getExample();
        OASServerLease serverLease2 = new OASServerLease();

        System.assertEquals(serverLease1.hashCode(), serverLease1.hashCode());
        System.assertEquals(serverLease2.hashCode(), serverLease2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerLease serverLease1 = OASServerLease.getExample();
        OASServerLease serverLease2 = OASServerLease.getExample();
        OASServerLease serverLease3 = new OASServerLease();
        OASServerLease serverLease4 = new OASServerLease();

        System.assert(serverLease1.equals(serverLease2));
        System.assert(serverLease3.equals(serverLease4));
        System.assertEquals(serverLease1.hashCode(), serverLease2.hashCode());
        System.assertEquals(serverLease3.hashCode(), serverLease4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerLease serverLease = new OASServerLease();
        Map<String, String> x-property-mappings = serverLease.getx-property-mappings();
        System.assertEquals('r_group', x-property-mappings.get('group'));
    }
}
