@isTest
private class OASEnableScrub500ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASEnableScrub500Response enableScrub500Response1 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response2 = enableScrub500Response1;
        OASEnableScrub500Response enableScrub500Response3 = new OASEnableScrub500Response();
        OASEnableScrub500Response enableScrub500Response4 = enableScrub500Response3;

        System.assert(enableScrub500Response1.equals(enableScrub500Response2));
        System.assert(enableScrub500Response2.equals(enableScrub500Response1));
        System.assert(enableScrub500Response1.equals(enableScrub500Response1));
        System.assert(enableScrub500Response3.equals(enableScrub500Response4));
        System.assert(enableScrub500Response4.equals(enableScrub500Response3));
        System.assert(enableScrub500Response3.equals(enableScrub500Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASEnableScrub500Response enableScrub500Response1 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response2 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response3 = new OASEnableScrub500Response();
        OASEnableScrub500Response enableScrub500Response4 = new OASEnableScrub500Response();

        System.assert(enableScrub500Response1.equals(enableScrub500Response2));
        System.assert(enableScrub500Response2.equals(enableScrub500Response1));
        System.assert(enableScrub500Response3.equals(enableScrub500Response4));
        System.assert(enableScrub500Response4.equals(enableScrub500Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASEnableScrub500Response enableScrub500Response1 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response2 = new OASEnableScrub500Response();

        System.assertEquals(false, enableScrub500Response1.equals('foo'));
        System.assertEquals(false, enableScrub500Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASEnableScrub500Response enableScrub500Response1 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response2 = new OASEnableScrub500Response();
        OASEnableScrub500Response enableScrub500Response3;

        System.assertEquals(false, enableScrub500Response1.equals(enableScrub500Response3));
        System.assertEquals(false, enableScrub500Response2.equals(enableScrub500Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASEnableScrub500Response enableScrub500Response1 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response2 = new OASEnableScrub500Response();

        System.assertEquals(enableScrub500Response1.hashCode(), enableScrub500Response1.hashCode());
        System.assertEquals(enableScrub500Response2.hashCode(), enableScrub500Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASEnableScrub500Response enableScrub500Response1 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response2 = OASEnableScrub500Response.getExample();
        OASEnableScrub500Response enableScrub500Response3 = new OASEnableScrub500Response();
        OASEnableScrub500Response enableScrub500Response4 = new OASEnableScrub500Response();

        System.assert(enableScrub500Response1.equals(enableScrub500Response2));
        System.assert(enableScrub500Response3.equals(enableScrub500Response4));
        System.assertEquals(enableScrub500Response1.hashCode(), enableScrub500Response2.hashCode());
        System.assertEquals(enableScrub500Response3.hashCode(), enableScrub500Response4.hashCode());
    }
}
