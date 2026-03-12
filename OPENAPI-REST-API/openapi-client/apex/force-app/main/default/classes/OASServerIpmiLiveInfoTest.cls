@isTest
private class OASServerIpmiLiveInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo1 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo2 = serverIpmiLiveInfo1;
        OASServerIpmiLiveInfo serverIpmiLiveInfo3 = new OASServerIpmiLiveInfo();
        OASServerIpmiLiveInfo serverIpmiLiveInfo4 = serverIpmiLiveInfo3;

        System.assert(serverIpmiLiveInfo1.equals(serverIpmiLiveInfo2));
        System.assert(serverIpmiLiveInfo2.equals(serverIpmiLiveInfo1));
        System.assert(serverIpmiLiveInfo1.equals(serverIpmiLiveInfo1));
        System.assert(serverIpmiLiveInfo3.equals(serverIpmiLiveInfo4));
        System.assert(serverIpmiLiveInfo4.equals(serverIpmiLiveInfo3));
        System.assert(serverIpmiLiveInfo3.equals(serverIpmiLiveInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo1 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo2 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo3 = new OASServerIpmiLiveInfo();
        OASServerIpmiLiveInfo serverIpmiLiveInfo4 = new OASServerIpmiLiveInfo();

        System.assert(serverIpmiLiveInfo1.equals(serverIpmiLiveInfo2));
        System.assert(serverIpmiLiveInfo2.equals(serverIpmiLiveInfo1));
        System.assert(serverIpmiLiveInfo3.equals(serverIpmiLiveInfo4));
        System.assert(serverIpmiLiveInfo4.equals(serverIpmiLiveInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo1 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo2 = new OASServerIpmiLiveInfo();

        System.assertEquals(false, serverIpmiLiveInfo1.equals('foo'));
        System.assertEquals(false, serverIpmiLiveInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo1 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo2 = new OASServerIpmiLiveInfo();
        OASServerIpmiLiveInfo serverIpmiLiveInfo3;

        System.assertEquals(false, serverIpmiLiveInfo1.equals(serverIpmiLiveInfo3));
        System.assertEquals(false, serverIpmiLiveInfo2.equals(serverIpmiLiveInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo1 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo2 = new OASServerIpmiLiveInfo();

        System.assertEquals(serverIpmiLiveInfo1.hashCode(), serverIpmiLiveInfo1.hashCode());
        System.assertEquals(serverIpmiLiveInfo2.hashCode(), serverIpmiLiveInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo1 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo2 = OASServerIpmiLiveInfo.getExample();
        OASServerIpmiLiveInfo serverIpmiLiveInfo3 = new OASServerIpmiLiveInfo();
        OASServerIpmiLiveInfo serverIpmiLiveInfo4 = new OASServerIpmiLiveInfo();

        System.assert(serverIpmiLiveInfo1.equals(serverIpmiLiveInfo2));
        System.assert(serverIpmiLiveInfo3.equals(serverIpmiLiveInfo4));
        System.assertEquals(serverIpmiLiveInfo1.hashCode(), serverIpmiLiveInfo2.hashCode());
        System.assertEquals(serverIpmiLiveInfo3.hashCode(), serverIpmiLiveInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerIpmiLiveInfo serverIpmiLiveInfo = new OASServerIpmiLiveInfo();
        Map<String, String> x-property-mappings = serverIpmiLiveInfo.getx-property-mappings();
        System.assertEquals('publicIp', x-property-mappings.get('public_ip'));
        System.assertEquals('allowedIp', x-property-mappings.get('allowed_ip'));
        System.assertEquals('clientUsername', x-property-mappings.get('client_username'));
        System.assertEquals('clientPassword', x-property-mappings.get('client_password'));
    }
}
