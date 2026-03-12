@isTest
private class OASServerNetworkInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerNetworkInfo serverNetworkInfo1 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo2 = serverNetworkInfo1;
        OASServerNetworkInfo serverNetworkInfo3 = new OASServerNetworkInfo();
        OASServerNetworkInfo serverNetworkInfo4 = serverNetworkInfo3;

        System.assert(serverNetworkInfo1.equals(serverNetworkInfo2));
        System.assert(serverNetworkInfo2.equals(serverNetworkInfo1));
        System.assert(serverNetworkInfo1.equals(serverNetworkInfo1));
        System.assert(serverNetworkInfo3.equals(serverNetworkInfo4));
        System.assert(serverNetworkInfo4.equals(serverNetworkInfo3));
        System.assert(serverNetworkInfo3.equals(serverNetworkInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerNetworkInfo serverNetworkInfo1 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo2 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo3 = new OASServerNetworkInfo();
        OASServerNetworkInfo serverNetworkInfo4 = new OASServerNetworkInfo();

        System.assert(serverNetworkInfo1.equals(serverNetworkInfo2));
        System.assert(serverNetworkInfo2.equals(serverNetworkInfo1));
        System.assert(serverNetworkInfo3.equals(serverNetworkInfo4));
        System.assert(serverNetworkInfo4.equals(serverNetworkInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerNetworkInfo serverNetworkInfo1 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo2 = new OASServerNetworkInfo();

        System.assertEquals(false, serverNetworkInfo1.equals('foo'));
        System.assertEquals(false, serverNetworkInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerNetworkInfo serverNetworkInfo1 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo2 = new OASServerNetworkInfo();
        OASServerNetworkInfo serverNetworkInfo3;

        System.assertEquals(false, serverNetworkInfo1.equals(serverNetworkInfo3));
        System.assertEquals(false, serverNetworkInfo2.equals(serverNetworkInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerNetworkInfo serverNetworkInfo1 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo2 = new OASServerNetworkInfo();

        System.assertEquals(serverNetworkInfo1.hashCode(), serverNetworkInfo1.hashCode());
        System.assertEquals(serverNetworkInfo2.hashCode(), serverNetworkInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerNetworkInfo serverNetworkInfo1 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo2 = OASServerNetworkInfo.getExample();
        OASServerNetworkInfo serverNetworkInfo3 = new OASServerNetworkInfo();
        OASServerNetworkInfo serverNetworkInfo4 = new OASServerNetworkInfo();

        System.assert(serverNetworkInfo1.equals(serverNetworkInfo2));
        System.assert(serverNetworkInfo3.equals(serverNetworkInfo4));
        System.assertEquals(serverNetworkInfo1.hashCode(), serverNetworkInfo2.hashCode());
        System.assertEquals(serverNetworkInfo3.hashCode(), serverNetworkInfo4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServerNetworkInfo serverNetworkInfo = new OASServerNetworkInfo();
        System.assertEquals(new List<String>(), serverNetworkInfo.vlans);
        System.assertEquals(new List<String>(), serverNetworkInfo.vlans6);
        System.assertEquals(null, serverNetworkInfo.assets);
        System.assertEquals(null, serverNetworkInfo.switchports);
    }
}
