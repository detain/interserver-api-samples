@isTest
private class OASHomeServicesWebhostingTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesWebhosting homeServicesWebhosting1 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting2 = homeServicesWebhosting1;
        OASHomeServicesWebhosting homeServicesWebhosting3 = new OASHomeServicesWebhosting();
        OASHomeServicesWebhosting homeServicesWebhosting4 = homeServicesWebhosting3;

        System.assert(homeServicesWebhosting1.equals(homeServicesWebhosting2));
        System.assert(homeServicesWebhosting2.equals(homeServicesWebhosting1));
        System.assert(homeServicesWebhosting1.equals(homeServicesWebhosting1));
        System.assert(homeServicesWebhosting3.equals(homeServicesWebhosting4));
        System.assert(homeServicesWebhosting4.equals(homeServicesWebhosting3));
        System.assert(homeServicesWebhosting3.equals(homeServicesWebhosting3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesWebhosting homeServicesWebhosting1 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting2 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting3 = new OASHomeServicesWebhosting();
        OASHomeServicesWebhosting homeServicesWebhosting4 = new OASHomeServicesWebhosting();

        System.assert(homeServicesWebhosting1.equals(homeServicesWebhosting2));
        System.assert(homeServicesWebhosting2.equals(homeServicesWebhosting1));
        System.assert(homeServicesWebhosting3.equals(homeServicesWebhosting4));
        System.assert(homeServicesWebhosting4.equals(homeServicesWebhosting3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesWebhosting homeServicesWebhosting1 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting2 = new OASHomeServicesWebhosting();

        System.assertEquals(false, homeServicesWebhosting1.equals('foo'));
        System.assertEquals(false, homeServicesWebhosting2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesWebhosting homeServicesWebhosting1 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting2 = new OASHomeServicesWebhosting();
        OASHomeServicesWebhosting homeServicesWebhosting3;

        System.assertEquals(false, homeServicesWebhosting1.equals(homeServicesWebhosting3));
        System.assertEquals(false, homeServicesWebhosting2.equals(homeServicesWebhosting3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesWebhosting homeServicesWebhosting1 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting2 = new OASHomeServicesWebhosting();

        System.assertEquals(homeServicesWebhosting1.hashCode(), homeServicesWebhosting1.hashCode());
        System.assertEquals(homeServicesWebhosting2.hashCode(), homeServicesWebhosting2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesWebhosting homeServicesWebhosting1 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting2 = OASHomeServicesWebhosting.getExample();
        OASHomeServicesWebhosting homeServicesWebhosting3 = new OASHomeServicesWebhosting();
        OASHomeServicesWebhosting homeServicesWebhosting4 = new OASHomeServicesWebhosting();

        System.assert(homeServicesWebhosting1.equals(homeServicesWebhosting2));
        System.assert(homeServicesWebhosting3.equals(homeServicesWebhosting4));
        System.assertEquals(homeServicesWebhosting1.hashCode(), homeServicesWebhosting2.hashCode());
        System.assertEquals(homeServicesWebhosting3.hashCode(), homeServicesWebhosting4.hashCode());
    }
}
