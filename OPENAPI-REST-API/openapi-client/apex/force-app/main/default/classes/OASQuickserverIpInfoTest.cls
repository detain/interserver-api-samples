@isTest
private class OASQuickserverIpInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverIpInfo quickserverIpInfo1 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo2 = quickserverIpInfo1;
        OASQuickserverIpInfo quickserverIpInfo3 = new OASQuickserverIpInfo();
        OASQuickserverIpInfo quickserverIpInfo4 = quickserverIpInfo3;

        System.assert(quickserverIpInfo1.equals(quickserverIpInfo2));
        System.assert(quickserverIpInfo2.equals(quickserverIpInfo1));
        System.assert(quickserverIpInfo1.equals(quickserverIpInfo1));
        System.assert(quickserverIpInfo3.equals(quickserverIpInfo4));
        System.assert(quickserverIpInfo4.equals(quickserverIpInfo3));
        System.assert(quickserverIpInfo3.equals(quickserverIpInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverIpInfo quickserverIpInfo1 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo2 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo3 = new OASQuickserverIpInfo();
        OASQuickserverIpInfo quickserverIpInfo4 = new OASQuickserverIpInfo();

        System.assert(quickserverIpInfo1.equals(quickserverIpInfo2));
        System.assert(quickserverIpInfo2.equals(quickserverIpInfo1));
        System.assert(quickserverIpInfo3.equals(quickserverIpInfo4));
        System.assert(quickserverIpInfo4.equals(quickserverIpInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverIpInfo quickserverIpInfo1 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo2 = new OASQuickserverIpInfo();

        System.assertEquals(false, quickserverIpInfo1.equals('foo'));
        System.assertEquals(false, quickserverIpInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverIpInfo quickserverIpInfo1 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo2 = new OASQuickserverIpInfo();
        OASQuickserverIpInfo quickserverIpInfo3;

        System.assertEquals(false, quickserverIpInfo1.equals(quickserverIpInfo3));
        System.assertEquals(false, quickserverIpInfo2.equals(quickserverIpInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverIpInfo quickserverIpInfo1 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo2 = new OASQuickserverIpInfo();

        System.assertEquals(quickserverIpInfo1.hashCode(), quickserverIpInfo1.hashCode());
        System.assertEquals(quickserverIpInfo2.hashCode(), quickserverIpInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverIpInfo quickserverIpInfo1 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo2 = OASQuickserverIpInfo.getExample();
        OASQuickserverIpInfo quickserverIpInfo3 = new OASQuickserverIpInfo();
        OASQuickserverIpInfo quickserverIpInfo4 = new OASQuickserverIpInfo();

        System.assert(quickserverIpInfo1.equals(quickserverIpInfo2));
        System.assert(quickserverIpInfo3.equals(quickserverIpInfo4));
        System.assertEquals(quickserverIpInfo1.hashCode(), quickserverIpInfo2.hashCode());
        System.assertEquals(quickserverIpInfo3.hashCode(), quickserverIpInfo4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASQuickserverIpInfo quickserverIpInfo = new OASQuickserverIpInfo();
        System.assertEquals(new List<OASQuickserverIpTableRow>(), quickserverIpInfo.rows);
        System.assertEquals(null, quickserverIpInfo.title);
    }
}
