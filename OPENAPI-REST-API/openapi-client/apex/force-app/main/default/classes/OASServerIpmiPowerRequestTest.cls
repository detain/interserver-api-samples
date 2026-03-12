@isTest
private class OASServerIpmiPowerRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerIpmiPowerRequest serverIpmiPowerRequest1 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest2 = serverIpmiPowerRequest1;
        OASServerIpmiPowerRequest serverIpmiPowerRequest3 = new OASServerIpmiPowerRequest();
        OASServerIpmiPowerRequest serverIpmiPowerRequest4 = serverIpmiPowerRequest3;

        System.assert(serverIpmiPowerRequest1.equals(serverIpmiPowerRequest2));
        System.assert(serverIpmiPowerRequest2.equals(serverIpmiPowerRequest1));
        System.assert(serverIpmiPowerRequest1.equals(serverIpmiPowerRequest1));
        System.assert(serverIpmiPowerRequest3.equals(serverIpmiPowerRequest4));
        System.assert(serverIpmiPowerRequest4.equals(serverIpmiPowerRequest3));
        System.assert(serverIpmiPowerRequest3.equals(serverIpmiPowerRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerIpmiPowerRequest serverIpmiPowerRequest1 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest2 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest3 = new OASServerIpmiPowerRequest();
        OASServerIpmiPowerRequest serverIpmiPowerRequest4 = new OASServerIpmiPowerRequest();

        System.assert(serverIpmiPowerRequest1.equals(serverIpmiPowerRequest2));
        System.assert(serverIpmiPowerRequest2.equals(serverIpmiPowerRequest1));
        System.assert(serverIpmiPowerRequest3.equals(serverIpmiPowerRequest4));
        System.assert(serverIpmiPowerRequest4.equals(serverIpmiPowerRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerIpmiPowerRequest serverIpmiPowerRequest1 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest2 = new OASServerIpmiPowerRequest();

        System.assertEquals(false, serverIpmiPowerRequest1.equals('foo'));
        System.assertEquals(false, serverIpmiPowerRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerIpmiPowerRequest serverIpmiPowerRequest1 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest2 = new OASServerIpmiPowerRequest();
        OASServerIpmiPowerRequest serverIpmiPowerRequest3;

        System.assertEquals(false, serverIpmiPowerRequest1.equals(serverIpmiPowerRequest3));
        System.assertEquals(false, serverIpmiPowerRequest2.equals(serverIpmiPowerRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerIpmiPowerRequest serverIpmiPowerRequest1 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest2 = new OASServerIpmiPowerRequest();

        System.assertEquals(serverIpmiPowerRequest1.hashCode(), serverIpmiPowerRequest1.hashCode());
        System.assertEquals(serverIpmiPowerRequest2.hashCode(), serverIpmiPowerRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerIpmiPowerRequest serverIpmiPowerRequest1 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest2 = OASServerIpmiPowerRequest.getExample();
        OASServerIpmiPowerRequest serverIpmiPowerRequest3 = new OASServerIpmiPowerRequest();
        OASServerIpmiPowerRequest serverIpmiPowerRequest4 = new OASServerIpmiPowerRequest();

        System.assert(serverIpmiPowerRequest1.equals(serverIpmiPowerRequest2));
        System.assert(serverIpmiPowerRequest3.equals(serverIpmiPowerRequest4));
        System.assertEquals(serverIpmiPowerRequest1.hashCode(), serverIpmiPowerRequest2.hashCode());
        System.assertEquals(serverIpmiPowerRequest3.hashCode(), serverIpmiPowerRequest4.hashCode());
    }
}
