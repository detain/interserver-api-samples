@isTest
private class OASVpsTrafficHistorySectionResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse1 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse2 = vpsTrafficHistorySectionResponse1;
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse3 = new OASVpsTrafficHistorySectionResponse();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse4 = vpsTrafficHistorySectionResponse3;

        System.assert(vpsTrafficHistorySectionResponse1.equals(vpsTrafficHistorySectionResponse2));
        System.assert(vpsTrafficHistorySectionResponse2.equals(vpsTrafficHistorySectionResponse1));
        System.assert(vpsTrafficHistorySectionResponse1.equals(vpsTrafficHistorySectionResponse1));
        System.assert(vpsTrafficHistorySectionResponse3.equals(vpsTrafficHistorySectionResponse4));
        System.assert(vpsTrafficHistorySectionResponse4.equals(vpsTrafficHistorySectionResponse3));
        System.assert(vpsTrafficHistorySectionResponse3.equals(vpsTrafficHistorySectionResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse1 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse2 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse3 = new OASVpsTrafficHistorySectionResponse();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse4 = new OASVpsTrafficHistorySectionResponse();

        System.assert(vpsTrafficHistorySectionResponse1.equals(vpsTrafficHistorySectionResponse2));
        System.assert(vpsTrafficHistorySectionResponse2.equals(vpsTrafficHistorySectionResponse1));
        System.assert(vpsTrafficHistorySectionResponse3.equals(vpsTrafficHistorySectionResponse4));
        System.assert(vpsTrafficHistorySectionResponse4.equals(vpsTrafficHistorySectionResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse1 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse2 = new OASVpsTrafficHistorySectionResponse();

        System.assertEquals(false, vpsTrafficHistorySectionResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficHistorySectionResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse1 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse2 = new OASVpsTrafficHistorySectionResponse();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse3;

        System.assertEquals(false, vpsTrafficHistorySectionResponse1.equals(vpsTrafficHistorySectionResponse3));
        System.assertEquals(false, vpsTrafficHistorySectionResponse2.equals(vpsTrafficHistorySectionResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse1 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse2 = new OASVpsTrafficHistorySectionResponse();

        System.assertEquals(vpsTrafficHistorySectionResponse1.hashCode(), vpsTrafficHistorySectionResponse1.hashCode());
        System.assertEquals(vpsTrafficHistorySectionResponse2.hashCode(), vpsTrafficHistorySectionResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse1 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse2 = OASVpsTrafficHistorySectionResponse.getExample();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse3 = new OASVpsTrafficHistorySectionResponse();
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse4 = new OASVpsTrafficHistorySectionResponse();

        System.assert(vpsTrafficHistorySectionResponse1.equals(vpsTrafficHistorySectionResponse2));
        System.assert(vpsTrafficHistorySectionResponse3.equals(vpsTrafficHistorySectionResponse4));
        System.assertEquals(vpsTrafficHistorySectionResponse1.hashCode(), vpsTrafficHistorySectionResponse2.hashCode());
        System.assertEquals(vpsTrafficHistorySectionResponse3.hashCode(), vpsTrafficHistorySectionResponse4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsTrafficHistorySectionResponse vpsTrafficHistorySectionResponse = new OASVpsTrafficHistorySectionResponse();
        System.assertEquals(new List<OASVpsTrafficHistorySectionDataRespo>(), vpsTrafficHistorySectionResponse.data);
        System.assertEquals(new List<Datetime>(), vpsTrafficHistorySectionResponse.times);
    }
}
