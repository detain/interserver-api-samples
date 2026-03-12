@isTest
private class OASServerAssetsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerAssets serverAssets1 = OASServerAssets.getExample();
        OASServerAssets serverAssets2 = serverAssets1;
        OASServerAssets serverAssets3 = new OASServerAssets();
        OASServerAssets serverAssets4 = serverAssets3;

        System.assert(serverAssets1.equals(serverAssets2));
        System.assert(serverAssets2.equals(serverAssets1));
        System.assert(serverAssets1.equals(serverAssets1));
        System.assert(serverAssets3.equals(serverAssets4));
        System.assert(serverAssets4.equals(serverAssets3));
        System.assert(serverAssets3.equals(serverAssets3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerAssets serverAssets1 = OASServerAssets.getExample();
        OASServerAssets serverAssets2 = OASServerAssets.getExample();
        OASServerAssets serverAssets3 = new OASServerAssets();
        OASServerAssets serverAssets4 = new OASServerAssets();

        System.assert(serverAssets1.equals(serverAssets2));
        System.assert(serverAssets2.equals(serverAssets1));
        System.assert(serverAssets3.equals(serverAssets4));
        System.assert(serverAssets4.equals(serverAssets3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerAssets serverAssets1 = OASServerAssets.getExample();
        OASServerAssets serverAssets2 = new OASServerAssets();

        System.assertEquals(false, serverAssets1.equals('foo'));
        System.assertEquals(false, serverAssets2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerAssets serverAssets1 = OASServerAssets.getExample();
        OASServerAssets serverAssets2 = new OASServerAssets();
        OASServerAssets serverAssets3;

        System.assertEquals(false, serverAssets1.equals(serverAssets3));
        System.assertEquals(false, serverAssets2.equals(serverAssets3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerAssets serverAssets1 = OASServerAssets.getExample();
        OASServerAssets serverAssets2 = new OASServerAssets();

        System.assertEquals(serverAssets1.hashCode(), serverAssets1.hashCode());
        System.assertEquals(serverAssets2.hashCode(), serverAssets2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerAssets serverAssets1 = OASServerAssets.getExample();
        OASServerAssets serverAssets2 = OASServerAssets.getExample();
        OASServerAssets serverAssets3 = new OASServerAssets();
        OASServerAssets serverAssets4 = new OASServerAssets();

        System.assert(serverAssets1.equals(serverAssets2));
        System.assert(serverAssets3.equals(serverAssets4));
        System.assertEquals(serverAssets1.hashCode(), serverAssets2.hashCode());
        System.assertEquals(serverAssets3.hashCode(), serverAssets4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServerAssets serverAssets = new OASServerAssets();
        System.assertEquals(new List<String>(), serverAssets.header);
        System.assertEquals(new List<List<String>>(), serverAssets.rows);
        System.assertEquals(null, serverAssets.title);
        System.assertEquals(null, serverAssets.size);
        System.assertEquals(null, serverAssets.type);
    }
}
