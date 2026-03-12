@isTest
private class OASVpsDADataTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsDAData vpsDAData1 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData2 = vpsDAData1;
        OASVpsDAData vpsDAData3 = new OASVpsDAData();
        OASVpsDAData vpsDAData4 = vpsDAData3;

        System.assert(vpsDAData1.equals(vpsDAData2));
        System.assert(vpsDAData2.equals(vpsDAData1));
        System.assert(vpsDAData1.equals(vpsDAData1));
        System.assert(vpsDAData3.equals(vpsDAData4));
        System.assert(vpsDAData4.equals(vpsDAData3));
        System.assert(vpsDAData3.equals(vpsDAData3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsDAData vpsDAData1 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData2 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData3 = new OASVpsDAData();
        OASVpsDAData vpsDAData4 = new OASVpsDAData();

        System.assert(vpsDAData1.equals(vpsDAData2));
        System.assert(vpsDAData2.equals(vpsDAData1));
        System.assert(vpsDAData3.equals(vpsDAData4));
        System.assert(vpsDAData4.equals(vpsDAData3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsDAData vpsDAData1 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData2 = new OASVpsDAData();

        System.assertEquals(false, vpsDAData1.equals('foo'));
        System.assertEquals(false, vpsDAData2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsDAData vpsDAData1 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData2 = new OASVpsDAData();
        OASVpsDAData vpsDAData3;

        System.assertEquals(false, vpsDAData1.equals(vpsDAData3));
        System.assertEquals(false, vpsDAData2.equals(vpsDAData3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsDAData vpsDAData1 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData2 = new OASVpsDAData();

        System.assertEquals(vpsDAData1.hashCode(), vpsDAData1.hashCode());
        System.assertEquals(vpsDAData2.hashCode(), vpsDAData2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsDAData vpsDAData1 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData2 = OASVpsDAData.getExample();
        OASVpsDAData vpsDAData3 = new OASVpsDAData();
        OASVpsDAData vpsDAData4 = new OASVpsDAData();

        System.assert(vpsDAData1.equals(vpsDAData2));
        System.assert(vpsDAData3.equals(vpsDAData4));
        System.assertEquals(vpsDAData1.hashCode(), vpsDAData2.hashCode());
        System.assertEquals(vpsDAData3.hashCode(), vpsDAData4.hashCode());
    }
}
