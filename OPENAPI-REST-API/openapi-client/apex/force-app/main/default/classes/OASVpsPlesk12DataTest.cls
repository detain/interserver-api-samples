@isTest
private class OASVpsPlesk12DataTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsPlesk12Data vpsPlesk12Data1 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data2 = vpsPlesk12Data1;
        OASVpsPlesk12Data vpsPlesk12Data3 = new OASVpsPlesk12Data();
        OASVpsPlesk12Data vpsPlesk12Data4 = vpsPlesk12Data3;

        System.assert(vpsPlesk12Data1.equals(vpsPlesk12Data2));
        System.assert(vpsPlesk12Data2.equals(vpsPlesk12Data1));
        System.assert(vpsPlesk12Data1.equals(vpsPlesk12Data1));
        System.assert(vpsPlesk12Data3.equals(vpsPlesk12Data4));
        System.assert(vpsPlesk12Data4.equals(vpsPlesk12Data3));
        System.assert(vpsPlesk12Data3.equals(vpsPlesk12Data3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsPlesk12Data vpsPlesk12Data1 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data2 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data3 = new OASVpsPlesk12Data();
        OASVpsPlesk12Data vpsPlesk12Data4 = new OASVpsPlesk12Data();

        System.assert(vpsPlesk12Data1.equals(vpsPlesk12Data2));
        System.assert(vpsPlesk12Data2.equals(vpsPlesk12Data1));
        System.assert(vpsPlesk12Data3.equals(vpsPlesk12Data4));
        System.assert(vpsPlesk12Data4.equals(vpsPlesk12Data3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsPlesk12Data vpsPlesk12Data1 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data2 = new OASVpsPlesk12Data();

        System.assertEquals(false, vpsPlesk12Data1.equals('foo'));
        System.assertEquals(false, vpsPlesk12Data2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsPlesk12Data vpsPlesk12Data1 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data2 = new OASVpsPlesk12Data();
        OASVpsPlesk12Data vpsPlesk12Data3;

        System.assertEquals(false, vpsPlesk12Data1.equals(vpsPlesk12Data3));
        System.assertEquals(false, vpsPlesk12Data2.equals(vpsPlesk12Data3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsPlesk12Data vpsPlesk12Data1 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data2 = new OASVpsPlesk12Data();

        System.assertEquals(vpsPlesk12Data1.hashCode(), vpsPlesk12Data1.hashCode());
        System.assertEquals(vpsPlesk12Data2.hashCode(), vpsPlesk12Data2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsPlesk12Data vpsPlesk12Data1 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data2 = OASVpsPlesk12Data.getExample();
        OASVpsPlesk12Data vpsPlesk12Data3 = new OASVpsPlesk12Data();
        OASVpsPlesk12Data vpsPlesk12Data4 = new OASVpsPlesk12Data();

        System.assert(vpsPlesk12Data1.equals(vpsPlesk12Data2));
        System.assert(vpsPlesk12Data3.equals(vpsPlesk12Data4));
        System.assertEquals(vpsPlesk12Data1.hashCode(), vpsPlesk12Data2.hashCode());
        System.assertEquals(vpsPlesk12Data3.hashCode(), vpsPlesk12Data4.hashCode());
    }
}
