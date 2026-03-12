@isTest
private class OASVpsIPInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsIPInfo vpsIPInfo1 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo2 = vpsIPInfo1;
        OASVpsIPInfo vpsIPInfo3 = new OASVpsIPInfo();
        OASVpsIPInfo vpsIPInfo4 = vpsIPInfo3;

        System.assert(vpsIPInfo1.equals(vpsIPInfo2));
        System.assert(vpsIPInfo2.equals(vpsIPInfo1));
        System.assert(vpsIPInfo1.equals(vpsIPInfo1));
        System.assert(vpsIPInfo3.equals(vpsIPInfo4));
        System.assert(vpsIPInfo4.equals(vpsIPInfo3));
        System.assert(vpsIPInfo3.equals(vpsIPInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsIPInfo vpsIPInfo1 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo2 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo3 = new OASVpsIPInfo();
        OASVpsIPInfo vpsIPInfo4 = new OASVpsIPInfo();

        System.assert(vpsIPInfo1.equals(vpsIPInfo2));
        System.assert(vpsIPInfo2.equals(vpsIPInfo1));
        System.assert(vpsIPInfo3.equals(vpsIPInfo4));
        System.assert(vpsIPInfo4.equals(vpsIPInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsIPInfo vpsIPInfo1 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo2 = new OASVpsIPInfo();

        System.assertEquals(false, vpsIPInfo1.equals('foo'));
        System.assertEquals(false, vpsIPInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsIPInfo vpsIPInfo1 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo2 = new OASVpsIPInfo();
        OASVpsIPInfo vpsIPInfo3;

        System.assertEquals(false, vpsIPInfo1.equals(vpsIPInfo3));
        System.assertEquals(false, vpsIPInfo2.equals(vpsIPInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsIPInfo vpsIPInfo1 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo2 = new OASVpsIPInfo();

        System.assertEquals(vpsIPInfo1.hashCode(), vpsIPInfo1.hashCode());
        System.assertEquals(vpsIPInfo2.hashCode(), vpsIPInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsIPInfo vpsIPInfo1 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo2 = OASVpsIPInfo.getExample();
        OASVpsIPInfo vpsIPInfo3 = new OASVpsIPInfo();
        OASVpsIPInfo vpsIPInfo4 = new OASVpsIPInfo();

        System.assert(vpsIPInfo1.equals(vpsIPInfo2));
        System.assert(vpsIPInfo3.equals(vpsIPInfo4));
        System.assertEquals(vpsIPInfo1.hashCode(), vpsIPInfo2.hashCode());
        System.assertEquals(vpsIPInfo3.hashCode(), vpsIPInfo4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsIPInfo vpsIPInfo = new OASVpsIPInfo();
        System.assertEquals(new List<OASVpsIPInfoRow>(), vpsIPInfo.rows);
        System.assertEquals(null, vpsIPInfo.title);
    }
}
