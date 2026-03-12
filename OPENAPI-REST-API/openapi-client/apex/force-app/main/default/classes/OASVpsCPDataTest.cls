@isTest
private class OASVpsCPDataTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsCPData vpsCPData1 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData2 = vpsCPData1;
        OASVpsCPData vpsCPData3 = new OASVpsCPData();
        OASVpsCPData vpsCPData4 = vpsCPData3;

        System.assert(vpsCPData1.equals(vpsCPData2));
        System.assert(vpsCPData2.equals(vpsCPData1));
        System.assert(vpsCPData1.equals(vpsCPData1));
        System.assert(vpsCPData3.equals(vpsCPData4));
        System.assert(vpsCPData4.equals(vpsCPData3));
        System.assert(vpsCPData3.equals(vpsCPData3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsCPData vpsCPData1 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData2 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData3 = new OASVpsCPData();
        OASVpsCPData vpsCPData4 = new OASVpsCPData();

        System.assert(vpsCPData1.equals(vpsCPData2));
        System.assert(vpsCPData2.equals(vpsCPData1));
        System.assert(vpsCPData3.equals(vpsCPData4));
        System.assert(vpsCPData4.equals(vpsCPData3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsCPData vpsCPData1 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData2 = new OASVpsCPData();

        System.assertEquals(false, vpsCPData1.equals('foo'));
        System.assertEquals(false, vpsCPData2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsCPData vpsCPData1 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData2 = new OASVpsCPData();
        OASVpsCPData vpsCPData3;

        System.assertEquals(false, vpsCPData1.equals(vpsCPData3));
        System.assertEquals(false, vpsCPData2.equals(vpsCPData3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsCPData vpsCPData1 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData2 = new OASVpsCPData();

        System.assertEquals(vpsCPData1.hashCode(), vpsCPData1.hashCode());
        System.assertEquals(vpsCPData2.hashCode(), vpsCPData2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsCPData vpsCPData1 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData2 = OASVpsCPData.getExample();
        OASVpsCPData vpsCPData3 = new OASVpsCPData();
        OASVpsCPData vpsCPData4 = new OASVpsCPData();

        System.assert(vpsCPData1.equals(vpsCPData2));
        System.assert(vpsCPData3.equals(vpsCPData4));
        System.assertEquals(vpsCPData1.hashCode(), vpsCPData2.hashCode());
        System.assertEquals(vpsCPData3.hashCode(), vpsCPData4.hashCode());
    }
}
