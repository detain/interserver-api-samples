@isTest
private class OASQueueResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASQueueResponse queueResponse1 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse2 = queueResponse1;
        OASQueueResponse queueResponse3 = new OASQueueResponse();
        OASQueueResponse queueResponse4 = queueResponse3;

        System.assert(queueResponse1.equals(queueResponse2));
        System.assert(queueResponse2.equals(queueResponse1));
        System.assert(queueResponse1.equals(queueResponse1));
        System.assert(queueResponse3.equals(queueResponse4));
        System.assert(queueResponse4.equals(queueResponse3));
        System.assert(queueResponse3.equals(queueResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQueueResponse queueResponse1 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse2 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse3 = new OASQueueResponse();
        OASQueueResponse queueResponse4 = new OASQueueResponse();

        System.assert(queueResponse1.equals(queueResponse2));
        System.assert(queueResponse2.equals(queueResponse1));
        System.assert(queueResponse3.equals(queueResponse4));
        System.assert(queueResponse4.equals(queueResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQueueResponse queueResponse1 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse2 = new OASQueueResponse();

        System.assertEquals(false, queueResponse1.equals('foo'));
        System.assertEquals(false, queueResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQueueResponse queueResponse1 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse2 = new OASQueueResponse();
        OASQueueResponse queueResponse3;

        System.assertEquals(false, queueResponse1.equals(queueResponse3));
        System.assertEquals(false, queueResponse2.equals(queueResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQueueResponse queueResponse1 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse2 = new OASQueueResponse();

        System.assertEquals(queueResponse1.hashCode(), queueResponse1.hashCode());
        System.assertEquals(queueResponse2.hashCode(), queueResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQueueResponse queueResponse1 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse2 = OASQueueResponse.getExample();
        OASQueueResponse queueResponse3 = new OASQueueResponse();
        OASQueueResponse queueResponse4 = new OASQueueResponse();

        System.assert(queueResponse1.equals(queueResponse2));
        System.assert(queueResponse3.equals(queueResponse4));
        System.assertEquals(queueResponse1.hashCode(), queueResponse2.hashCode());
        System.assertEquals(queueResponse3.hashCode(), queueResponse4.hashCode());
    }
}
