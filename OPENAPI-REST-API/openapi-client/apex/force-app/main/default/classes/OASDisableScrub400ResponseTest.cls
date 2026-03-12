@isTest
private class OASDisableScrub400ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDisableScrub400Response disableScrub400Response1 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response2 = disableScrub400Response1;
        OASDisableScrub400Response disableScrub400Response3 = new OASDisableScrub400Response();
        OASDisableScrub400Response disableScrub400Response4 = disableScrub400Response3;

        System.assert(disableScrub400Response1.equals(disableScrub400Response2));
        System.assert(disableScrub400Response2.equals(disableScrub400Response1));
        System.assert(disableScrub400Response1.equals(disableScrub400Response1));
        System.assert(disableScrub400Response3.equals(disableScrub400Response4));
        System.assert(disableScrub400Response4.equals(disableScrub400Response3));
        System.assert(disableScrub400Response3.equals(disableScrub400Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDisableScrub400Response disableScrub400Response1 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response2 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response3 = new OASDisableScrub400Response();
        OASDisableScrub400Response disableScrub400Response4 = new OASDisableScrub400Response();

        System.assert(disableScrub400Response1.equals(disableScrub400Response2));
        System.assert(disableScrub400Response2.equals(disableScrub400Response1));
        System.assert(disableScrub400Response3.equals(disableScrub400Response4));
        System.assert(disableScrub400Response4.equals(disableScrub400Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDisableScrub400Response disableScrub400Response1 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response2 = new OASDisableScrub400Response();

        System.assertEquals(false, disableScrub400Response1.equals('foo'));
        System.assertEquals(false, disableScrub400Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDisableScrub400Response disableScrub400Response1 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response2 = new OASDisableScrub400Response();
        OASDisableScrub400Response disableScrub400Response3;

        System.assertEquals(false, disableScrub400Response1.equals(disableScrub400Response3));
        System.assertEquals(false, disableScrub400Response2.equals(disableScrub400Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDisableScrub400Response disableScrub400Response1 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response2 = new OASDisableScrub400Response();

        System.assertEquals(disableScrub400Response1.hashCode(), disableScrub400Response1.hashCode());
        System.assertEquals(disableScrub400Response2.hashCode(), disableScrub400Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDisableScrub400Response disableScrub400Response1 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response2 = OASDisableScrub400Response.getExample();
        OASDisableScrub400Response disableScrub400Response3 = new OASDisableScrub400Response();
        OASDisableScrub400Response disableScrub400Response4 = new OASDisableScrub400Response();

        System.assert(disableScrub400Response1.equals(disableScrub400Response2));
        System.assert(disableScrub400Response3.equals(disableScrub400Response4));
        System.assertEquals(disableScrub400Response1.hashCode(), disableScrub400Response2.hashCode());
        System.assertEquals(disableScrub400Response3.hashCode(), disableScrub400Response4.hashCode());
    }
}
