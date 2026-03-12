@isTest
private class OASVpsOrderPlatformPackagesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages1 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages2 = vpsOrderPlatformPackages1;
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages3 = new OASVpsOrderPlatformPackages();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages4 = vpsOrderPlatformPackages3;

        System.assert(vpsOrderPlatformPackages1.equals(vpsOrderPlatformPackages2));
        System.assert(vpsOrderPlatformPackages2.equals(vpsOrderPlatformPackages1));
        System.assert(vpsOrderPlatformPackages1.equals(vpsOrderPlatformPackages1));
        System.assert(vpsOrderPlatformPackages3.equals(vpsOrderPlatformPackages4));
        System.assert(vpsOrderPlatformPackages4.equals(vpsOrderPlatformPackages3));
        System.assert(vpsOrderPlatformPackages3.equals(vpsOrderPlatformPackages3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages1 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages2 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages3 = new OASVpsOrderPlatformPackages();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages4 = new OASVpsOrderPlatformPackages();

        System.assert(vpsOrderPlatformPackages1.equals(vpsOrderPlatformPackages2));
        System.assert(vpsOrderPlatformPackages2.equals(vpsOrderPlatformPackages1));
        System.assert(vpsOrderPlatformPackages3.equals(vpsOrderPlatformPackages4));
        System.assert(vpsOrderPlatformPackages4.equals(vpsOrderPlatformPackages3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages1 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages2 = new OASVpsOrderPlatformPackages();

        System.assertEquals(false, vpsOrderPlatformPackages1.equals('foo'));
        System.assertEquals(false, vpsOrderPlatformPackages2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages1 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages2 = new OASVpsOrderPlatformPackages();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages3;

        System.assertEquals(false, vpsOrderPlatformPackages1.equals(vpsOrderPlatformPackages3));
        System.assertEquals(false, vpsOrderPlatformPackages2.equals(vpsOrderPlatformPackages3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages1 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages2 = new OASVpsOrderPlatformPackages();

        System.assertEquals(vpsOrderPlatformPackages1.hashCode(), vpsOrderPlatformPackages1.hashCode());
        System.assertEquals(vpsOrderPlatformPackages2.hashCode(), vpsOrderPlatformPackages2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages1 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages2 = OASVpsOrderPlatformPackages.getExample();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages3 = new OASVpsOrderPlatformPackages();
        OASVpsOrderPlatformPackages vpsOrderPlatformPackages4 = new OASVpsOrderPlatformPackages();

        System.assert(vpsOrderPlatformPackages1.equals(vpsOrderPlatformPackages2));
        System.assert(vpsOrderPlatformPackages3.equals(vpsOrderPlatformPackages4));
        System.assertEquals(vpsOrderPlatformPackages1.hashCode(), vpsOrderPlatformPackages2.hashCode());
        System.assertEquals(vpsOrderPlatformPackages3.hashCode(), vpsOrderPlatformPackages4.hashCode());
    }
}
