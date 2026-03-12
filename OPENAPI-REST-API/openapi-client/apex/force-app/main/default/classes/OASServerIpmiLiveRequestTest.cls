@isTest
private class OASServerIpmiLiveRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerIpmiLiveRequest serverIpmiLiveRequest1 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest2 = serverIpmiLiveRequest1;
        OASServerIpmiLiveRequest serverIpmiLiveRequest3 = new OASServerIpmiLiveRequest();
        OASServerIpmiLiveRequest serverIpmiLiveRequest4 = serverIpmiLiveRequest3;

        System.assert(serverIpmiLiveRequest1.equals(serverIpmiLiveRequest2));
        System.assert(serverIpmiLiveRequest2.equals(serverIpmiLiveRequest1));
        System.assert(serverIpmiLiveRequest1.equals(serverIpmiLiveRequest1));
        System.assert(serverIpmiLiveRequest3.equals(serverIpmiLiveRequest4));
        System.assert(serverIpmiLiveRequest4.equals(serverIpmiLiveRequest3));
        System.assert(serverIpmiLiveRequest3.equals(serverIpmiLiveRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerIpmiLiveRequest serverIpmiLiveRequest1 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest2 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest3 = new OASServerIpmiLiveRequest();
        OASServerIpmiLiveRequest serverIpmiLiveRequest4 = new OASServerIpmiLiveRequest();

        System.assert(serverIpmiLiveRequest1.equals(serverIpmiLiveRequest2));
        System.assert(serverIpmiLiveRequest2.equals(serverIpmiLiveRequest1));
        System.assert(serverIpmiLiveRequest3.equals(serverIpmiLiveRequest4));
        System.assert(serverIpmiLiveRequest4.equals(serverIpmiLiveRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerIpmiLiveRequest serverIpmiLiveRequest1 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest2 = new OASServerIpmiLiveRequest();

        System.assertEquals(false, serverIpmiLiveRequest1.equals('foo'));
        System.assertEquals(false, serverIpmiLiveRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerIpmiLiveRequest serverIpmiLiveRequest1 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest2 = new OASServerIpmiLiveRequest();
        OASServerIpmiLiveRequest serverIpmiLiveRequest3;

        System.assertEquals(false, serverIpmiLiveRequest1.equals(serverIpmiLiveRequest3));
        System.assertEquals(false, serverIpmiLiveRequest2.equals(serverIpmiLiveRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerIpmiLiveRequest serverIpmiLiveRequest1 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest2 = new OASServerIpmiLiveRequest();

        System.assertEquals(serverIpmiLiveRequest1.hashCode(), serverIpmiLiveRequest1.hashCode());
        System.assertEquals(serverIpmiLiveRequest2.hashCode(), serverIpmiLiveRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerIpmiLiveRequest serverIpmiLiveRequest1 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest2 = OASServerIpmiLiveRequest.getExample();
        OASServerIpmiLiveRequest serverIpmiLiveRequest3 = new OASServerIpmiLiveRequest();
        OASServerIpmiLiveRequest serverIpmiLiveRequest4 = new OASServerIpmiLiveRequest();

        System.assert(serverIpmiLiveRequest1.equals(serverIpmiLiveRequest2));
        System.assert(serverIpmiLiveRequest3.equals(serverIpmiLiveRequest4));
        System.assertEquals(serverIpmiLiveRequest1.hashCode(), serverIpmiLiveRequest2.hashCode());
        System.assertEquals(serverIpmiLiveRequest3.hashCode(), serverIpmiLiveRequest4.hashCode());
    }
}
