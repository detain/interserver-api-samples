@isTest
private class OASAssetServerTest {
    @isTest
    private static void equalsSameInstance() {
        OASAssetServer assetServer1 = OASAssetServer.getExample();
        OASAssetServer assetServer2 = assetServer1;
        OASAssetServer assetServer3 = new OASAssetServer();
        OASAssetServer assetServer4 = assetServer3;

        System.assert(assetServer1.equals(assetServer2));
        System.assert(assetServer2.equals(assetServer1));
        System.assert(assetServer1.equals(assetServer1));
        System.assert(assetServer3.equals(assetServer4));
        System.assert(assetServer4.equals(assetServer3));
        System.assert(assetServer3.equals(assetServer3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAssetServer assetServer1 = OASAssetServer.getExample();
        OASAssetServer assetServer2 = OASAssetServer.getExample();
        OASAssetServer assetServer3 = new OASAssetServer();
        OASAssetServer assetServer4 = new OASAssetServer();

        System.assert(assetServer1.equals(assetServer2));
        System.assert(assetServer2.equals(assetServer1));
        System.assert(assetServer3.equals(assetServer4));
        System.assert(assetServer4.equals(assetServer3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAssetServer assetServer1 = OASAssetServer.getExample();
        OASAssetServer assetServer2 = new OASAssetServer();

        System.assertEquals(false, assetServer1.equals('foo'));
        System.assertEquals(false, assetServer2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAssetServer assetServer1 = OASAssetServer.getExample();
        OASAssetServer assetServer2 = new OASAssetServer();
        OASAssetServer assetServer3;

        System.assertEquals(false, assetServer1.equals(assetServer3));
        System.assertEquals(false, assetServer2.equals(assetServer3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAssetServer assetServer1 = OASAssetServer.getExample();
        OASAssetServer assetServer2 = new OASAssetServer();

        System.assertEquals(assetServer1.hashCode(), assetServer1.hashCode());
        System.assertEquals(assetServer2.hashCode(), assetServer2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAssetServer assetServer1 = OASAssetServer.getExample();
        OASAssetServer assetServer2 = OASAssetServer.getExample();
        OASAssetServer assetServer3 = new OASAssetServer();
        OASAssetServer assetServer4 = new OASAssetServer();

        System.assert(assetServer1.equals(assetServer2));
        System.assert(assetServer3.equals(assetServer4));
        System.assertEquals(assetServer1.hashCode(), assetServer2.hashCode());
        System.assertEquals(assetServer3.hashCode(), assetServer4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAssetServer assetServer = new OASAssetServer();
        Map<String, String> x-property-mappings = assetServer.getx-property-mappings();
        System.assertEquals('region', x-property-mappings.get('Region'));
        System.assertEquals('memory', x-property-mappings.get('Memory'));
        System.assertEquals('bandwidth', x-property-mappings.get('Bandwidth'));
        System.assertEquals('ips', x-property-mappings.get('IPs'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASAssetServer assetServer = new OASAssetServer();
        System.assertEquals(new List<OASAssetServerCPUInner>(), assetServer.CPU);
        System.assertEquals(new List<OASAssetServerCPUInner>(), assetServer.memory);
        System.assertEquals(new List<OASAssetServerCPUInner>(), assetServer.bandwidth);
        System.assertEquals(new List<OASAssetServerCPUInner>(), assetServer.ips);
        System.assertEquals(new Map<String, String>(), assetServer.HD);
        System.assertEquals(null, assetServer.id);
        System.assertEquals(null, assetServer.region);
        System.assertEquals(null, assetServer.price);
    }
}
