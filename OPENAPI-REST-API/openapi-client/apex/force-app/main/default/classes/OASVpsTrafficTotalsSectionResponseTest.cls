@isTest
private class OASVpsTrafficTotalsSectionResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse1 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse2 = vpsTrafficTotalsSectionResponse1;
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse3 = new OASVpsTrafficTotalsSectionResponse();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse4 = vpsTrafficTotalsSectionResponse3;

        System.assert(vpsTrafficTotalsSectionResponse1.equals(vpsTrafficTotalsSectionResponse2));
        System.assert(vpsTrafficTotalsSectionResponse2.equals(vpsTrafficTotalsSectionResponse1));
        System.assert(vpsTrafficTotalsSectionResponse1.equals(vpsTrafficTotalsSectionResponse1));
        System.assert(vpsTrafficTotalsSectionResponse3.equals(vpsTrafficTotalsSectionResponse4));
        System.assert(vpsTrafficTotalsSectionResponse4.equals(vpsTrafficTotalsSectionResponse3));
        System.assert(vpsTrafficTotalsSectionResponse3.equals(vpsTrafficTotalsSectionResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse1 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse2 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse3 = new OASVpsTrafficTotalsSectionResponse();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse4 = new OASVpsTrafficTotalsSectionResponse();

        System.assert(vpsTrafficTotalsSectionResponse1.equals(vpsTrafficTotalsSectionResponse2));
        System.assert(vpsTrafficTotalsSectionResponse2.equals(vpsTrafficTotalsSectionResponse1));
        System.assert(vpsTrafficTotalsSectionResponse3.equals(vpsTrafficTotalsSectionResponse4));
        System.assert(vpsTrafficTotalsSectionResponse4.equals(vpsTrafficTotalsSectionResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse1 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse2 = new OASVpsTrafficTotalsSectionResponse();

        System.assertEquals(false, vpsTrafficTotalsSectionResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficTotalsSectionResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse1 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse2 = new OASVpsTrafficTotalsSectionResponse();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse3;

        System.assertEquals(false, vpsTrafficTotalsSectionResponse1.equals(vpsTrafficTotalsSectionResponse3));
        System.assertEquals(false, vpsTrafficTotalsSectionResponse2.equals(vpsTrafficTotalsSectionResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse1 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse2 = new OASVpsTrafficTotalsSectionResponse();

        System.assertEquals(vpsTrafficTotalsSectionResponse1.hashCode(), vpsTrafficTotalsSectionResponse1.hashCode());
        System.assertEquals(vpsTrafficTotalsSectionResponse2.hashCode(), vpsTrafficTotalsSectionResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse1 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse2 = OASVpsTrafficTotalsSectionResponse.getExample();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse3 = new OASVpsTrafficTotalsSectionResponse();
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse4 = new OASVpsTrafficTotalsSectionResponse();

        System.assert(vpsTrafficTotalsSectionResponse1.equals(vpsTrafficTotalsSectionResponse2));
        System.assert(vpsTrafficTotalsSectionResponse3.equals(vpsTrafficTotalsSectionResponse4));
        System.assertEquals(vpsTrafficTotalsSectionResponse1.hashCode(), vpsTrafficTotalsSectionResponse2.hashCode());
        System.assertEquals(vpsTrafficTotalsSectionResponse3.hashCode(), vpsTrafficTotalsSectionResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsTrafficTotalsSectionResponse vpsTrafficTotalsSectionResponse = new OASVpsTrafficTotalsSectionResponse();
        Map<String, String> x-property-mappings = vpsTrafficTotalsSectionResponse.getx-property-mappings();
        System.assertEquals('r_in', x-property-mappings.get('in'));
    }
}
