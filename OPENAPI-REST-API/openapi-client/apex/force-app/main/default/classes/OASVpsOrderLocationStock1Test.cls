@isTest
private class OASVpsOrderLocationStock1Test {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderLocationStock1 vpsOrderLocationStock11 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock12 = vpsOrderLocationStock11;
        OASVpsOrderLocationStock1 vpsOrderLocationStock13 = new OASVpsOrderLocationStock1();
        OASVpsOrderLocationStock1 vpsOrderLocationStock14 = vpsOrderLocationStock13;

        System.assert(vpsOrderLocationStock11.equals(vpsOrderLocationStock12));
        System.assert(vpsOrderLocationStock12.equals(vpsOrderLocationStock11));
        System.assert(vpsOrderLocationStock11.equals(vpsOrderLocationStock11));
        System.assert(vpsOrderLocationStock13.equals(vpsOrderLocationStock14));
        System.assert(vpsOrderLocationStock14.equals(vpsOrderLocationStock13));
        System.assert(vpsOrderLocationStock13.equals(vpsOrderLocationStock13));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderLocationStock1 vpsOrderLocationStock11 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock12 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock13 = new OASVpsOrderLocationStock1();
        OASVpsOrderLocationStock1 vpsOrderLocationStock14 = new OASVpsOrderLocationStock1();

        System.assert(vpsOrderLocationStock11.equals(vpsOrderLocationStock12));
        System.assert(vpsOrderLocationStock12.equals(vpsOrderLocationStock11));
        System.assert(vpsOrderLocationStock13.equals(vpsOrderLocationStock14));
        System.assert(vpsOrderLocationStock14.equals(vpsOrderLocationStock13));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderLocationStock1 vpsOrderLocationStock11 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock12 = new OASVpsOrderLocationStock1();

        System.assertEquals(false, vpsOrderLocationStock11.equals('foo'));
        System.assertEquals(false, vpsOrderLocationStock12.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderLocationStock1 vpsOrderLocationStock11 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock12 = new OASVpsOrderLocationStock1();
        OASVpsOrderLocationStock1 vpsOrderLocationStock13;

        System.assertEquals(false, vpsOrderLocationStock11.equals(vpsOrderLocationStock13));
        System.assertEquals(false, vpsOrderLocationStock12.equals(vpsOrderLocationStock13));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderLocationStock1 vpsOrderLocationStock11 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock12 = new OASVpsOrderLocationStock1();

        System.assertEquals(vpsOrderLocationStock11.hashCode(), vpsOrderLocationStock11.hashCode());
        System.assertEquals(vpsOrderLocationStock12.hashCode(), vpsOrderLocationStock12.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderLocationStock1 vpsOrderLocationStock11 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock12 = OASVpsOrderLocationStock1.getExample();
        OASVpsOrderLocationStock1 vpsOrderLocationStock13 = new OASVpsOrderLocationStock1();
        OASVpsOrderLocationStock1 vpsOrderLocationStock14 = new OASVpsOrderLocationStock1();

        System.assert(vpsOrderLocationStock11.equals(vpsOrderLocationStock12));
        System.assert(vpsOrderLocationStock13.equals(vpsOrderLocationStock14));
        System.assertEquals(vpsOrderLocationStock11.hashCode(), vpsOrderLocationStock12.hashCode());
        System.assertEquals(vpsOrderLocationStock13.hashCode(), vpsOrderLocationStock14.hashCode());
    }
}
