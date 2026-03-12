@isTest
private class OASVpsTrafficUsageAverageSectionRespTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse1 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse2 = vpsTrafficUsageAverageSectionResponse1;
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse3 = new OASVpsTrafficUsageAverageSectionResp();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse4 = vpsTrafficUsageAverageSectionResponse3;

        System.assert(vpsTrafficUsageAverageSectionResponse1.equals(vpsTrafficUsageAverageSectionResponse2));
        System.assert(vpsTrafficUsageAverageSectionResponse2.equals(vpsTrafficUsageAverageSectionResponse1));
        System.assert(vpsTrafficUsageAverageSectionResponse1.equals(vpsTrafficUsageAverageSectionResponse1));
        System.assert(vpsTrafficUsageAverageSectionResponse3.equals(vpsTrafficUsageAverageSectionResponse4));
        System.assert(vpsTrafficUsageAverageSectionResponse4.equals(vpsTrafficUsageAverageSectionResponse3));
        System.assert(vpsTrafficUsageAverageSectionResponse3.equals(vpsTrafficUsageAverageSectionResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse1 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse2 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse3 = new OASVpsTrafficUsageAverageSectionResp();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse4 = new OASVpsTrafficUsageAverageSectionResp();

        System.assert(vpsTrafficUsageAverageSectionResponse1.equals(vpsTrafficUsageAverageSectionResponse2));
        System.assert(vpsTrafficUsageAverageSectionResponse2.equals(vpsTrafficUsageAverageSectionResponse1));
        System.assert(vpsTrafficUsageAverageSectionResponse3.equals(vpsTrafficUsageAverageSectionResponse4));
        System.assert(vpsTrafficUsageAverageSectionResponse4.equals(vpsTrafficUsageAverageSectionResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse1 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse2 = new OASVpsTrafficUsageAverageSectionResp();

        System.assertEquals(false, vpsTrafficUsageAverageSectionResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficUsageAverageSectionResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse1 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse2 = new OASVpsTrafficUsageAverageSectionResp();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse3;

        System.assertEquals(false, vpsTrafficUsageAverageSectionResponse1.equals(vpsTrafficUsageAverageSectionResponse3));
        System.assertEquals(false, vpsTrafficUsageAverageSectionResponse2.equals(vpsTrafficUsageAverageSectionResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse1 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse2 = new OASVpsTrafficUsageAverageSectionResp();

        System.assertEquals(vpsTrafficUsageAverageSectionResponse1.hashCode(), vpsTrafficUsageAverageSectionResponse1.hashCode());
        System.assertEquals(vpsTrafficUsageAverageSectionResponse2.hashCode(), vpsTrafficUsageAverageSectionResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse1 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse2 = OASVpsTrafficUsageAverageSectionResp.getExample();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse3 = new OASVpsTrafficUsageAverageSectionResp();
        OASVpsTrafficUsageAverageSectionResp vpsTrafficUsageAverageSectionResponse4 = new OASVpsTrafficUsageAverageSectionResp();

        System.assert(vpsTrafficUsageAverageSectionResponse1.equals(vpsTrafficUsageAverageSectionResponse2));
        System.assert(vpsTrafficUsageAverageSectionResponse3.equals(vpsTrafficUsageAverageSectionResponse4));
        System.assertEquals(vpsTrafficUsageAverageSectionResponse1.hashCode(), vpsTrafficUsageAverageSectionResponse2.hashCode());
        System.assertEquals(vpsTrafficUsageAverageSectionResponse3.hashCode(), vpsTrafficUsageAverageSectionResponse4.hashCode());
    }
}
