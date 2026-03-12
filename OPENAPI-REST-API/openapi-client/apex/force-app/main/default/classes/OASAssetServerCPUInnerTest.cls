@isTest
private class OASAssetServerCPUInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASAssetServerCPUInner assetServerCPUInner1 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner2 = assetServerCPUInner1;
        OASAssetServerCPUInner assetServerCPUInner3 = new OASAssetServerCPUInner();
        OASAssetServerCPUInner assetServerCPUInner4 = assetServerCPUInner3;

        System.assert(assetServerCPUInner1.equals(assetServerCPUInner2));
        System.assert(assetServerCPUInner2.equals(assetServerCPUInner1));
        System.assert(assetServerCPUInner1.equals(assetServerCPUInner1));
        System.assert(assetServerCPUInner3.equals(assetServerCPUInner4));
        System.assert(assetServerCPUInner4.equals(assetServerCPUInner3));
        System.assert(assetServerCPUInner3.equals(assetServerCPUInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAssetServerCPUInner assetServerCPUInner1 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner2 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner3 = new OASAssetServerCPUInner();
        OASAssetServerCPUInner assetServerCPUInner4 = new OASAssetServerCPUInner();

        System.assert(assetServerCPUInner1.equals(assetServerCPUInner2));
        System.assert(assetServerCPUInner2.equals(assetServerCPUInner1));
        System.assert(assetServerCPUInner3.equals(assetServerCPUInner4));
        System.assert(assetServerCPUInner4.equals(assetServerCPUInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAssetServerCPUInner assetServerCPUInner1 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner2 = new OASAssetServerCPUInner();

        System.assertEquals(false, assetServerCPUInner1.equals('foo'));
        System.assertEquals(false, assetServerCPUInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAssetServerCPUInner assetServerCPUInner1 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner2 = new OASAssetServerCPUInner();
        OASAssetServerCPUInner assetServerCPUInner3;

        System.assertEquals(false, assetServerCPUInner1.equals(assetServerCPUInner3));
        System.assertEquals(false, assetServerCPUInner2.equals(assetServerCPUInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAssetServerCPUInner assetServerCPUInner1 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner2 = new OASAssetServerCPUInner();

        System.assertEquals(assetServerCPUInner1.hashCode(), assetServerCPUInner1.hashCode());
        System.assertEquals(assetServerCPUInner2.hashCode(), assetServerCPUInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAssetServerCPUInner assetServerCPUInner1 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner2 = OASAssetServerCPUInner.getExample();
        OASAssetServerCPUInner assetServerCPUInner3 = new OASAssetServerCPUInner();
        OASAssetServerCPUInner assetServerCPUInner4 = new OASAssetServerCPUInner();

        System.assert(assetServerCPUInner1.equals(assetServerCPUInner2));
        System.assert(assetServerCPUInner3.equals(assetServerCPUInner4));
        System.assertEquals(assetServerCPUInner1.hashCode(), assetServerCPUInner2.hashCode());
        System.assertEquals(assetServerCPUInner3.hashCode(), assetServerCPUInner4.hashCode());
    }
}
