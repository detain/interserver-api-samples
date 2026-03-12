@isTest
private class OASVpsTrafficDataSectionResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse1 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse2 = vpsTrafficDataSectionResponse1;
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse3 = new OASVpsTrafficDataSectionResponse();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse4 = vpsTrafficDataSectionResponse3;

        System.assert(vpsTrafficDataSectionResponse1.equals(vpsTrafficDataSectionResponse2));
        System.assert(vpsTrafficDataSectionResponse2.equals(vpsTrafficDataSectionResponse1));
        System.assert(vpsTrafficDataSectionResponse1.equals(vpsTrafficDataSectionResponse1));
        System.assert(vpsTrafficDataSectionResponse3.equals(vpsTrafficDataSectionResponse4));
        System.assert(vpsTrafficDataSectionResponse4.equals(vpsTrafficDataSectionResponse3));
        System.assert(vpsTrafficDataSectionResponse3.equals(vpsTrafficDataSectionResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse1 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse2 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse3 = new OASVpsTrafficDataSectionResponse();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse4 = new OASVpsTrafficDataSectionResponse();

        System.assert(vpsTrafficDataSectionResponse1.equals(vpsTrafficDataSectionResponse2));
        System.assert(vpsTrafficDataSectionResponse2.equals(vpsTrafficDataSectionResponse1));
        System.assert(vpsTrafficDataSectionResponse3.equals(vpsTrafficDataSectionResponse4));
        System.assert(vpsTrafficDataSectionResponse4.equals(vpsTrafficDataSectionResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse1 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse2 = new OASVpsTrafficDataSectionResponse();

        System.assertEquals(false, vpsTrafficDataSectionResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficDataSectionResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse1 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse2 = new OASVpsTrafficDataSectionResponse();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse3;

        System.assertEquals(false, vpsTrafficDataSectionResponse1.equals(vpsTrafficDataSectionResponse3));
        System.assertEquals(false, vpsTrafficDataSectionResponse2.equals(vpsTrafficDataSectionResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse1 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse2 = new OASVpsTrafficDataSectionResponse();

        System.assertEquals(vpsTrafficDataSectionResponse1.hashCode(), vpsTrafficDataSectionResponse1.hashCode());
        System.assertEquals(vpsTrafficDataSectionResponse2.hashCode(), vpsTrafficDataSectionResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse1 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse2 = OASVpsTrafficDataSectionResponse.getExample();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse3 = new OASVpsTrafficDataSectionResponse();
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse4 = new OASVpsTrafficDataSectionResponse();

        System.assert(vpsTrafficDataSectionResponse1.equals(vpsTrafficDataSectionResponse2));
        System.assert(vpsTrafficDataSectionResponse3.equals(vpsTrafficDataSectionResponse4));
        System.assertEquals(vpsTrafficDataSectionResponse1.hashCode(), vpsTrafficDataSectionResponse2.hashCode());
        System.assertEquals(vpsTrafficDataSectionResponse3.hashCode(), vpsTrafficDataSectionResponse4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsTrafficDataSectionResponse vpsTrafficDataSectionResponse = new OASVpsTrafficDataSectionResponse();
        System.assertEquals(new List<OASVPSTrafficDataDataSectionResponse>(), vpsTrafficDataSectionResponse.data);
        System.assertEquals(null, vpsTrafficDataSectionResponse.name);
    }
}
