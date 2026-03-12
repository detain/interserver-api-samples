@isTest
private class OASVpsTrafficResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficResponse vpsTrafficResponse1 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse2 = vpsTrafficResponse1;
        OASVpsTrafficResponse vpsTrafficResponse3 = new OASVpsTrafficResponse();
        OASVpsTrafficResponse vpsTrafficResponse4 = vpsTrafficResponse3;

        System.assert(vpsTrafficResponse1.equals(vpsTrafficResponse2));
        System.assert(vpsTrafficResponse2.equals(vpsTrafficResponse1));
        System.assert(vpsTrafficResponse1.equals(vpsTrafficResponse1));
        System.assert(vpsTrafficResponse3.equals(vpsTrafficResponse4));
        System.assert(vpsTrafficResponse4.equals(vpsTrafficResponse3));
        System.assert(vpsTrafficResponse3.equals(vpsTrafficResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficResponse vpsTrafficResponse1 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse2 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse3 = new OASVpsTrafficResponse();
        OASVpsTrafficResponse vpsTrafficResponse4 = new OASVpsTrafficResponse();

        System.assert(vpsTrafficResponse1.equals(vpsTrafficResponse2));
        System.assert(vpsTrafficResponse2.equals(vpsTrafficResponse1));
        System.assert(vpsTrafficResponse3.equals(vpsTrafficResponse4));
        System.assert(vpsTrafficResponse4.equals(vpsTrafficResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficResponse vpsTrafficResponse1 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse2 = new OASVpsTrafficResponse();

        System.assertEquals(false, vpsTrafficResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficResponse vpsTrafficResponse1 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse2 = new OASVpsTrafficResponse();
        OASVpsTrafficResponse vpsTrafficResponse3;

        System.assertEquals(false, vpsTrafficResponse1.equals(vpsTrafficResponse3));
        System.assertEquals(false, vpsTrafficResponse2.equals(vpsTrafficResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficResponse vpsTrafficResponse1 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse2 = new OASVpsTrafficResponse();

        System.assertEquals(vpsTrafficResponse1.hashCode(), vpsTrafficResponse1.hashCode());
        System.assertEquals(vpsTrafficResponse2.hashCode(), vpsTrafficResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficResponse vpsTrafficResponse1 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse2 = OASVpsTrafficResponse.getExample();
        OASVpsTrafficResponse vpsTrafficResponse3 = new OASVpsTrafficResponse();
        OASVpsTrafficResponse vpsTrafficResponse4 = new OASVpsTrafficResponse();

        System.assert(vpsTrafficResponse1.equals(vpsTrafficResponse2));
        System.assert(vpsTrafficResponse3.equals(vpsTrafficResponse4));
        System.assertEquals(vpsTrafficResponse1.hashCode(), vpsTrafficResponse2.hashCode());
        System.assertEquals(vpsTrafficResponse3.hashCode(), vpsTrafficResponse4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsTrafficResponse vpsTrafficResponse = new OASVpsTrafficResponse();
        System.assertEquals(new List<Datetime>(), vpsTrafficResponse.times);
        System.assertEquals(new List<OASVpsTrafficDataSectionResponse>(), vpsTrafficResponse.data);
        System.assertEquals(null, vpsTrafficResponse.name);
        System.assertEquals(null, vpsTrafficResponse.target);
        System.assertEquals(null, vpsTrafficResponse.interval);
        System.assertEquals(null, vpsTrafficResponse.history);
        System.assertEquals(null, vpsTrafficResponse.last);
        System.assertEquals(null, vpsTrafficResponse.totals);
        System.assertEquals(null, vpsTrafficResponse.usage);
    }
}
