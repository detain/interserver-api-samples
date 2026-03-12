@isTest
private class OASDisableScrub200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASDisableScrub200Response disableScrub200Response1 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response2 = disableScrub200Response1;
        OASDisableScrub200Response disableScrub200Response3 = new OASDisableScrub200Response();
        OASDisableScrub200Response disableScrub200Response4 = disableScrub200Response3;

        System.assert(disableScrub200Response1.equals(disableScrub200Response2));
        System.assert(disableScrub200Response2.equals(disableScrub200Response1));
        System.assert(disableScrub200Response1.equals(disableScrub200Response1));
        System.assert(disableScrub200Response3.equals(disableScrub200Response4));
        System.assert(disableScrub200Response4.equals(disableScrub200Response3));
        System.assert(disableScrub200Response3.equals(disableScrub200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDisableScrub200Response disableScrub200Response1 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response2 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response3 = new OASDisableScrub200Response();
        OASDisableScrub200Response disableScrub200Response4 = new OASDisableScrub200Response();

        System.assert(disableScrub200Response1.equals(disableScrub200Response2));
        System.assert(disableScrub200Response2.equals(disableScrub200Response1));
        System.assert(disableScrub200Response3.equals(disableScrub200Response4));
        System.assert(disableScrub200Response4.equals(disableScrub200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDisableScrub200Response disableScrub200Response1 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response2 = new OASDisableScrub200Response();

        System.assertEquals(false, disableScrub200Response1.equals('foo'));
        System.assertEquals(false, disableScrub200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDisableScrub200Response disableScrub200Response1 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response2 = new OASDisableScrub200Response();
        OASDisableScrub200Response disableScrub200Response3;

        System.assertEquals(false, disableScrub200Response1.equals(disableScrub200Response3));
        System.assertEquals(false, disableScrub200Response2.equals(disableScrub200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDisableScrub200Response disableScrub200Response1 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response2 = new OASDisableScrub200Response();

        System.assertEquals(disableScrub200Response1.hashCode(), disableScrub200Response1.hashCode());
        System.assertEquals(disableScrub200Response2.hashCode(), disableScrub200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDisableScrub200Response disableScrub200Response1 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response2 = OASDisableScrub200Response.getExample();
        OASDisableScrub200Response disableScrub200Response3 = new OASDisableScrub200Response();
        OASDisableScrub200Response disableScrub200Response4 = new OASDisableScrub200Response();

        System.assert(disableScrub200Response1.equals(disableScrub200Response2));
        System.assert(disableScrub200Response3.equals(disableScrub200Response4));
        System.assertEquals(disableScrub200Response1.hashCode(), disableScrub200Response2.hashCode());
        System.assertEquals(disableScrub200Response3.hashCode(), disableScrub200Response4.hashCode());
    }
}
