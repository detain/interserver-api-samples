@isTest
private class OASServerNetworkInfoAssetsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets1 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets2 = serverNetworkInfoAssets1;
        OASServerNetworkInfoAssets serverNetworkInfoAssets3 = new OASServerNetworkInfoAssets();
        OASServerNetworkInfoAssets serverNetworkInfoAssets4 = serverNetworkInfoAssets3;

        System.assert(serverNetworkInfoAssets1.equals(serverNetworkInfoAssets2));
        System.assert(serverNetworkInfoAssets2.equals(serverNetworkInfoAssets1));
        System.assert(serverNetworkInfoAssets1.equals(serverNetworkInfoAssets1));
        System.assert(serverNetworkInfoAssets3.equals(serverNetworkInfoAssets4));
        System.assert(serverNetworkInfoAssets4.equals(serverNetworkInfoAssets3));
        System.assert(serverNetworkInfoAssets3.equals(serverNetworkInfoAssets3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets1 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets2 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets3 = new OASServerNetworkInfoAssets();
        OASServerNetworkInfoAssets serverNetworkInfoAssets4 = new OASServerNetworkInfoAssets();

        System.assert(serverNetworkInfoAssets1.equals(serverNetworkInfoAssets2));
        System.assert(serverNetworkInfoAssets2.equals(serverNetworkInfoAssets1));
        System.assert(serverNetworkInfoAssets3.equals(serverNetworkInfoAssets4));
        System.assert(serverNetworkInfoAssets4.equals(serverNetworkInfoAssets3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets1 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets2 = new OASServerNetworkInfoAssets();

        System.assertEquals(false, serverNetworkInfoAssets1.equals('foo'));
        System.assertEquals(false, serverNetworkInfoAssets2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets1 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets2 = new OASServerNetworkInfoAssets();
        OASServerNetworkInfoAssets serverNetworkInfoAssets3;

        System.assertEquals(false, serverNetworkInfoAssets1.equals(serverNetworkInfoAssets3));
        System.assertEquals(false, serverNetworkInfoAssets2.equals(serverNetworkInfoAssets3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets1 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets2 = new OASServerNetworkInfoAssets();

        System.assertEquals(serverNetworkInfoAssets1.hashCode(), serverNetworkInfoAssets1.hashCode());
        System.assertEquals(serverNetworkInfoAssets2.hashCode(), serverNetworkInfoAssets2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets1 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets2 = OASServerNetworkInfoAssets.getExample();
        OASServerNetworkInfoAssets serverNetworkInfoAssets3 = new OASServerNetworkInfoAssets();
        OASServerNetworkInfoAssets serverNetworkInfoAssets4 = new OASServerNetworkInfoAssets();

        System.assert(serverNetworkInfoAssets1.equals(serverNetworkInfoAssets2));
        System.assert(serverNetworkInfoAssets3.equals(serverNetworkInfoAssets4));
        System.assertEquals(serverNetworkInfoAssets1.hashCode(), serverNetworkInfoAssets2.hashCode());
        System.assertEquals(serverNetworkInfoAssets3.hashCode(), serverNetworkInfoAssets4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerNetworkInfoAssets serverNetworkInfoAssets = new OASServerNetworkInfoAssets();
        Map<String, String> x-property-mappings = serverNetworkInfoAssets.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('3497'));
    }
}
