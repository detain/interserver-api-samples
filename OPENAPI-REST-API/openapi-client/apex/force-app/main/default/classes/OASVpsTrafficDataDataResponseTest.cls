@isTest
private class OASVpsTrafficDataDataResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse1 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse2 = vpsTrafficDataDataResponse1;
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse3 = new OASVpsTrafficDataDataResponse();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse4 = vpsTrafficDataDataResponse3;

        System.assert(vpsTrafficDataDataResponse1.equals(vpsTrafficDataDataResponse2));
        System.assert(vpsTrafficDataDataResponse2.equals(vpsTrafficDataDataResponse1));
        System.assert(vpsTrafficDataDataResponse1.equals(vpsTrafficDataDataResponse1));
        System.assert(vpsTrafficDataDataResponse3.equals(vpsTrafficDataDataResponse4));
        System.assert(vpsTrafficDataDataResponse4.equals(vpsTrafficDataDataResponse3));
        System.assert(vpsTrafficDataDataResponse3.equals(vpsTrafficDataDataResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse1 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse2 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse3 = new OASVpsTrafficDataDataResponse();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse4 = new OASVpsTrafficDataDataResponse();

        System.assert(vpsTrafficDataDataResponse1.equals(vpsTrafficDataDataResponse2));
        System.assert(vpsTrafficDataDataResponse2.equals(vpsTrafficDataDataResponse1));
        System.assert(vpsTrafficDataDataResponse3.equals(vpsTrafficDataDataResponse4));
        System.assert(vpsTrafficDataDataResponse4.equals(vpsTrafficDataDataResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse1 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse2 = new OASVpsTrafficDataDataResponse();

        System.assertEquals(false, vpsTrafficDataDataResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficDataDataResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse1 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse2 = new OASVpsTrafficDataDataResponse();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse3;

        System.assertEquals(false, vpsTrafficDataDataResponse1.equals(vpsTrafficDataDataResponse3));
        System.assertEquals(false, vpsTrafficDataDataResponse2.equals(vpsTrafficDataDataResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse1 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse2 = new OASVpsTrafficDataDataResponse();

        System.assertEquals(vpsTrafficDataDataResponse1.hashCode(), vpsTrafficDataDataResponse1.hashCode());
        System.assertEquals(vpsTrafficDataDataResponse2.hashCode(), vpsTrafficDataDataResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse1 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse2 = OASVpsTrafficDataDataResponse.getExample();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse3 = new OASVpsTrafficDataDataResponse();
        OASVpsTrafficDataDataResponse vpsTrafficDataDataResponse4 = new OASVpsTrafficDataDataResponse();

        System.assert(vpsTrafficDataDataResponse1.equals(vpsTrafficDataDataResponse2));
        System.assert(vpsTrafficDataDataResponse3.equals(vpsTrafficDataDataResponse4));
        System.assertEquals(vpsTrafficDataDataResponse1.hashCode(), vpsTrafficDataDataResponse2.hashCode());
        System.assertEquals(vpsTrafficDataDataResponse3.hashCode(), vpsTrafficDataDataResponse4.hashCode());
    }
}
