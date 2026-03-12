@isTest
private class OASVpsTrafficUsageResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse1 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse2 = vpsTrafficUsageResponse1;
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse3 = new OASVpsTrafficUsageResponse();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse4 = vpsTrafficUsageResponse3;

        System.assert(vpsTrafficUsageResponse1.equals(vpsTrafficUsageResponse2));
        System.assert(vpsTrafficUsageResponse2.equals(vpsTrafficUsageResponse1));
        System.assert(vpsTrafficUsageResponse1.equals(vpsTrafficUsageResponse1));
        System.assert(vpsTrafficUsageResponse3.equals(vpsTrafficUsageResponse4));
        System.assert(vpsTrafficUsageResponse4.equals(vpsTrafficUsageResponse3));
        System.assert(vpsTrafficUsageResponse3.equals(vpsTrafficUsageResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse1 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse2 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse3 = new OASVpsTrafficUsageResponse();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse4 = new OASVpsTrafficUsageResponse();

        System.assert(vpsTrafficUsageResponse1.equals(vpsTrafficUsageResponse2));
        System.assert(vpsTrafficUsageResponse2.equals(vpsTrafficUsageResponse1));
        System.assert(vpsTrafficUsageResponse3.equals(vpsTrafficUsageResponse4));
        System.assert(vpsTrafficUsageResponse4.equals(vpsTrafficUsageResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse1 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse2 = new OASVpsTrafficUsageResponse();

        System.assertEquals(false, vpsTrafficUsageResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficUsageResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse1 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse2 = new OASVpsTrafficUsageResponse();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse3;

        System.assertEquals(false, vpsTrafficUsageResponse1.equals(vpsTrafficUsageResponse3));
        System.assertEquals(false, vpsTrafficUsageResponse2.equals(vpsTrafficUsageResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse1 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse2 = new OASVpsTrafficUsageResponse();

        System.assertEquals(vpsTrafficUsageResponse1.hashCode(), vpsTrafficUsageResponse1.hashCode());
        System.assertEquals(vpsTrafficUsageResponse2.hashCode(), vpsTrafficUsageResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse1 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse2 = OASVpsTrafficUsageResponse.getExample();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse3 = new OASVpsTrafficUsageResponse();
        OASVpsTrafficUsageResponse vpsTrafficUsageResponse4 = new OASVpsTrafficUsageResponse();

        System.assert(vpsTrafficUsageResponse1.equals(vpsTrafficUsageResponse2));
        System.assert(vpsTrafficUsageResponse3.equals(vpsTrafficUsageResponse4));
        System.assertEquals(vpsTrafficUsageResponse1.hashCode(), vpsTrafficUsageResponse2.hashCode());
        System.assertEquals(vpsTrafficUsageResponse3.hashCode(), vpsTrafficUsageResponse4.hashCode());
    }
}
