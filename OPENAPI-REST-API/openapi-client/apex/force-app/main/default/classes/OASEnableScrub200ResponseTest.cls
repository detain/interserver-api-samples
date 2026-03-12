@isTest
private class OASEnableScrub200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASEnableScrub200Response enableScrub200Response1 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response2 = enableScrub200Response1;
        OASEnableScrub200Response enableScrub200Response3 = new OASEnableScrub200Response();
        OASEnableScrub200Response enableScrub200Response4 = enableScrub200Response3;

        System.assert(enableScrub200Response1.equals(enableScrub200Response2));
        System.assert(enableScrub200Response2.equals(enableScrub200Response1));
        System.assert(enableScrub200Response1.equals(enableScrub200Response1));
        System.assert(enableScrub200Response3.equals(enableScrub200Response4));
        System.assert(enableScrub200Response4.equals(enableScrub200Response3));
        System.assert(enableScrub200Response3.equals(enableScrub200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASEnableScrub200Response enableScrub200Response1 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response2 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response3 = new OASEnableScrub200Response();
        OASEnableScrub200Response enableScrub200Response4 = new OASEnableScrub200Response();

        System.assert(enableScrub200Response1.equals(enableScrub200Response2));
        System.assert(enableScrub200Response2.equals(enableScrub200Response1));
        System.assert(enableScrub200Response3.equals(enableScrub200Response4));
        System.assert(enableScrub200Response4.equals(enableScrub200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASEnableScrub200Response enableScrub200Response1 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response2 = new OASEnableScrub200Response();

        System.assertEquals(false, enableScrub200Response1.equals('foo'));
        System.assertEquals(false, enableScrub200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASEnableScrub200Response enableScrub200Response1 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response2 = new OASEnableScrub200Response();
        OASEnableScrub200Response enableScrub200Response3;

        System.assertEquals(false, enableScrub200Response1.equals(enableScrub200Response3));
        System.assertEquals(false, enableScrub200Response2.equals(enableScrub200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASEnableScrub200Response enableScrub200Response1 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response2 = new OASEnableScrub200Response();

        System.assertEquals(enableScrub200Response1.hashCode(), enableScrub200Response1.hashCode());
        System.assertEquals(enableScrub200Response2.hashCode(), enableScrub200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASEnableScrub200Response enableScrub200Response1 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response2 = OASEnableScrub200Response.getExample();
        OASEnableScrub200Response enableScrub200Response3 = new OASEnableScrub200Response();
        OASEnableScrub200Response enableScrub200Response4 = new OASEnableScrub200Response();

        System.assert(enableScrub200Response1.equals(enableScrub200Response2));
        System.assert(enableScrub200Response3.equals(enableScrub200Response4));
        System.assertEquals(enableScrub200Response1.hashCode(), enableScrub200Response2.hashCode());
        System.assertEquals(enableScrub200Response3.hashCode(), enableScrub200Response4.hashCode());
    }
}
