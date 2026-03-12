@isTest
private class OASVpsOrderTemplatesHypervTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv1 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv2 = vpsOrderTemplatesHyperv1;
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv3 = new OASVpsOrderTemplatesHyperv();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv4 = vpsOrderTemplatesHyperv3;

        System.assert(vpsOrderTemplatesHyperv1.equals(vpsOrderTemplatesHyperv2));
        System.assert(vpsOrderTemplatesHyperv2.equals(vpsOrderTemplatesHyperv1));
        System.assert(vpsOrderTemplatesHyperv1.equals(vpsOrderTemplatesHyperv1));
        System.assert(vpsOrderTemplatesHyperv3.equals(vpsOrderTemplatesHyperv4));
        System.assert(vpsOrderTemplatesHyperv4.equals(vpsOrderTemplatesHyperv3));
        System.assert(vpsOrderTemplatesHyperv3.equals(vpsOrderTemplatesHyperv3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv1 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv2 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv3 = new OASVpsOrderTemplatesHyperv();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv4 = new OASVpsOrderTemplatesHyperv();

        System.assert(vpsOrderTemplatesHyperv1.equals(vpsOrderTemplatesHyperv2));
        System.assert(vpsOrderTemplatesHyperv2.equals(vpsOrderTemplatesHyperv1));
        System.assert(vpsOrderTemplatesHyperv3.equals(vpsOrderTemplatesHyperv4));
        System.assert(vpsOrderTemplatesHyperv4.equals(vpsOrderTemplatesHyperv3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv1 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv2 = new OASVpsOrderTemplatesHyperv();

        System.assertEquals(false, vpsOrderTemplatesHyperv1.equals('foo'));
        System.assertEquals(false, vpsOrderTemplatesHyperv2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv1 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv2 = new OASVpsOrderTemplatesHyperv();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv3;

        System.assertEquals(false, vpsOrderTemplatesHyperv1.equals(vpsOrderTemplatesHyperv3));
        System.assertEquals(false, vpsOrderTemplatesHyperv2.equals(vpsOrderTemplatesHyperv3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv1 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv2 = new OASVpsOrderTemplatesHyperv();

        System.assertEquals(vpsOrderTemplatesHyperv1.hashCode(), vpsOrderTemplatesHyperv1.hashCode());
        System.assertEquals(vpsOrderTemplatesHyperv2.hashCode(), vpsOrderTemplatesHyperv2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv1 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv2 = OASVpsOrderTemplatesHyperv.getExample();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv3 = new OASVpsOrderTemplatesHyperv();
        OASVpsOrderTemplatesHyperv vpsOrderTemplatesHyperv4 = new OASVpsOrderTemplatesHyperv();

        System.assert(vpsOrderTemplatesHyperv1.equals(vpsOrderTemplatesHyperv2));
        System.assert(vpsOrderTemplatesHyperv3.equals(vpsOrderTemplatesHyperv4));
        System.assertEquals(vpsOrderTemplatesHyperv1.hashCode(), vpsOrderTemplatesHyperv2.hashCode());
        System.assertEquals(vpsOrderTemplatesHyperv3.hashCode(), vpsOrderTemplatesHyperv4.hashCode());
    }
}
