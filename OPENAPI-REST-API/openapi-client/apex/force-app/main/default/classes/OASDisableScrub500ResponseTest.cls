@isTest
private class OASDisableScrub500ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDisableScrub500Response disableScrub500Response1 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response2 = disableScrub500Response1;
        OASDisableScrub500Response disableScrub500Response3 = new OASDisableScrub500Response();
        OASDisableScrub500Response disableScrub500Response4 = disableScrub500Response3;

        System.assert(disableScrub500Response1.equals(disableScrub500Response2));
        System.assert(disableScrub500Response2.equals(disableScrub500Response1));
        System.assert(disableScrub500Response1.equals(disableScrub500Response1));
        System.assert(disableScrub500Response3.equals(disableScrub500Response4));
        System.assert(disableScrub500Response4.equals(disableScrub500Response3));
        System.assert(disableScrub500Response3.equals(disableScrub500Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDisableScrub500Response disableScrub500Response1 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response2 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response3 = new OASDisableScrub500Response();
        OASDisableScrub500Response disableScrub500Response4 = new OASDisableScrub500Response();

        System.assert(disableScrub500Response1.equals(disableScrub500Response2));
        System.assert(disableScrub500Response2.equals(disableScrub500Response1));
        System.assert(disableScrub500Response3.equals(disableScrub500Response4));
        System.assert(disableScrub500Response4.equals(disableScrub500Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDisableScrub500Response disableScrub500Response1 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response2 = new OASDisableScrub500Response();

        System.assertEquals(false, disableScrub500Response1.equals('foo'));
        System.assertEquals(false, disableScrub500Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDisableScrub500Response disableScrub500Response1 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response2 = new OASDisableScrub500Response();
        OASDisableScrub500Response disableScrub500Response3;

        System.assertEquals(false, disableScrub500Response1.equals(disableScrub500Response3));
        System.assertEquals(false, disableScrub500Response2.equals(disableScrub500Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDisableScrub500Response disableScrub500Response1 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response2 = new OASDisableScrub500Response();

        System.assertEquals(disableScrub500Response1.hashCode(), disableScrub500Response1.hashCode());
        System.assertEquals(disableScrub500Response2.hashCode(), disableScrub500Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDisableScrub500Response disableScrub500Response1 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response2 = OASDisableScrub500Response.getExample();
        OASDisableScrub500Response disableScrub500Response3 = new OASDisableScrub500Response();
        OASDisableScrub500Response disableScrub500Response4 = new OASDisableScrub500Response();

        System.assert(disableScrub500Response1.equals(disableScrub500Response2));
        System.assert(disableScrub500Response3.equals(disableScrub500Response4));
        System.assertEquals(disableScrub500Response1.hashCode(), disableScrub500Response2.hashCode());
        System.assertEquals(disableScrub500Response3.hashCode(), disableScrub500Response4.hashCode());
    }
}
