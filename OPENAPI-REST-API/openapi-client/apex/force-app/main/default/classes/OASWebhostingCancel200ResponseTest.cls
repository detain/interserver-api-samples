@isTest
private class OASWebhostingCancel200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebhostingCancel200Response webhostingCancel200Response1 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response2 = webhostingCancel200Response1;
        OASWebhostingCancel200Response webhostingCancel200Response3 = new OASWebhostingCancel200Response();
        OASWebhostingCancel200Response webhostingCancel200Response4 = webhostingCancel200Response3;

        System.assert(webhostingCancel200Response1.equals(webhostingCancel200Response2));
        System.assert(webhostingCancel200Response2.equals(webhostingCancel200Response1));
        System.assert(webhostingCancel200Response1.equals(webhostingCancel200Response1));
        System.assert(webhostingCancel200Response3.equals(webhostingCancel200Response4));
        System.assert(webhostingCancel200Response4.equals(webhostingCancel200Response3));
        System.assert(webhostingCancel200Response3.equals(webhostingCancel200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebhostingCancel200Response webhostingCancel200Response1 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response2 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response3 = new OASWebhostingCancel200Response();
        OASWebhostingCancel200Response webhostingCancel200Response4 = new OASWebhostingCancel200Response();

        System.assert(webhostingCancel200Response1.equals(webhostingCancel200Response2));
        System.assert(webhostingCancel200Response2.equals(webhostingCancel200Response1));
        System.assert(webhostingCancel200Response3.equals(webhostingCancel200Response4));
        System.assert(webhostingCancel200Response4.equals(webhostingCancel200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebhostingCancel200Response webhostingCancel200Response1 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response2 = new OASWebhostingCancel200Response();

        System.assertEquals(false, webhostingCancel200Response1.equals('foo'));
        System.assertEquals(false, webhostingCancel200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebhostingCancel200Response webhostingCancel200Response1 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response2 = new OASWebhostingCancel200Response();
        OASWebhostingCancel200Response webhostingCancel200Response3;

        System.assertEquals(false, webhostingCancel200Response1.equals(webhostingCancel200Response3));
        System.assertEquals(false, webhostingCancel200Response2.equals(webhostingCancel200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebhostingCancel200Response webhostingCancel200Response1 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response2 = new OASWebhostingCancel200Response();

        System.assertEquals(webhostingCancel200Response1.hashCode(), webhostingCancel200Response1.hashCode());
        System.assertEquals(webhostingCancel200Response2.hashCode(), webhostingCancel200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebhostingCancel200Response webhostingCancel200Response1 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response2 = OASWebhostingCancel200Response.getExample();
        OASWebhostingCancel200Response webhostingCancel200Response3 = new OASWebhostingCancel200Response();
        OASWebhostingCancel200Response webhostingCancel200Response4 = new OASWebhostingCancel200Response();

        System.assert(webhostingCancel200Response1.equals(webhostingCancel200Response2));
        System.assert(webhostingCancel200Response3.equals(webhostingCancel200Response4));
        System.assertEquals(webhostingCancel200Response1.hashCode(), webhostingCancel200Response2.hashCode());
        System.assertEquals(webhostingCancel200Response3.hashCode(), webhostingCancel200Response4.hashCode());
    }
}
