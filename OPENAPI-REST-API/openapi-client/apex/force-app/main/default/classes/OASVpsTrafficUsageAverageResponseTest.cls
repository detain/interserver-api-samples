@isTest
private class OASVpsTrafficUsageAverageResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse1 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse2 = vpsTrafficUsageAverageResponse1;
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse3 = new OASVpsTrafficUsageAverageResponse();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse4 = vpsTrafficUsageAverageResponse3;

        System.assert(vpsTrafficUsageAverageResponse1.equals(vpsTrafficUsageAverageResponse2));
        System.assert(vpsTrafficUsageAverageResponse2.equals(vpsTrafficUsageAverageResponse1));
        System.assert(vpsTrafficUsageAverageResponse1.equals(vpsTrafficUsageAverageResponse1));
        System.assert(vpsTrafficUsageAverageResponse3.equals(vpsTrafficUsageAverageResponse4));
        System.assert(vpsTrafficUsageAverageResponse4.equals(vpsTrafficUsageAverageResponse3));
        System.assert(vpsTrafficUsageAverageResponse3.equals(vpsTrafficUsageAverageResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse1 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse2 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse3 = new OASVpsTrafficUsageAverageResponse();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse4 = new OASVpsTrafficUsageAverageResponse();

        System.assert(vpsTrafficUsageAverageResponse1.equals(vpsTrafficUsageAverageResponse2));
        System.assert(vpsTrafficUsageAverageResponse2.equals(vpsTrafficUsageAverageResponse1));
        System.assert(vpsTrafficUsageAverageResponse3.equals(vpsTrafficUsageAverageResponse4));
        System.assert(vpsTrafficUsageAverageResponse4.equals(vpsTrafficUsageAverageResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse1 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse2 = new OASVpsTrafficUsageAverageResponse();

        System.assertEquals(false, vpsTrafficUsageAverageResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficUsageAverageResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse1 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse2 = new OASVpsTrafficUsageAverageResponse();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse3;

        System.assertEquals(false, vpsTrafficUsageAverageResponse1.equals(vpsTrafficUsageAverageResponse3));
        System.assertEquals(false, vpsTrafficUsageAverageResponse2.equals(vpsTrafficUsageAverageResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse1 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse2 = new OASVpsTrafficUsageAverageResponse();

        System.assertEquals(vpsTrafficUsageAverageResponse1.hashCode(), vpsTrafficUsageAverageResponse1.hashCode());
        System.assertEquals(vpsTrafficUsageAverageResponse2.hashCode(), vpsTrafficUsageAverageResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse1 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse2 = OASVpsTrafficUsageAverageResponse.getExample();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse3 = new OASVpsTrafficUsageAverageResponse();
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse4 = new OASVpsTrafficUsageAverageResponse();

        System.assert(vpsTrafficUsageAverageResponse1.equals(vpsTrafficUsageAverageResponse2));
        System.assert(vpsTrafficUsageAverageResponse3.equals(vpsTrafficUsageAverageResponse4));
        System.assertEquals(vpsTrafficUsageAverageResponse1.hashCode(), vpsTrafficUsageAverageResponse2.hashCode());
        System.assertEquals(vpsTrafficUsageAverageResponse3.hashCode(), vpsTrafficUsageAverageResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsTrafficUsageAverageResponse vpsTrafficUsageAverageResponse = new OASVpsTrafficUsageAverageResponse();
        Map<String, String> x-property-mappings = vpsTrafficUsageAverageResponse.getx-property-mappings();
        System.assertEquals('r_in', x-property-mappings.get('in'));
    }
}
