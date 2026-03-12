@isTest
private class OASVpsTrafficHistoryResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse1 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse2 = vpsTrafficHistoryResponse1;
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse3 = new OASVpsTrafficHistoryResponse();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse4 = vpsTrafficHistoryResponse3;

        System.assert(vpsTrafficHistoryResponse1.equals(vpsTrafficHistoryResponse2));
        System.assert(vpsTrafficHistoryResponse2.equals(vpsTrafficHistoryResponse1));
        System.assert(vpsTrafficHistoryResponse1.equals(vpsTrafficHistoryResponse1));
        System.assert(vpsTrafficHistoryResponse3.equals(vpsTrafficHistoryResponse4));
        System.assert(vpsTrafficHistoryResponse4.equals(vpsTrafficHistoryResponse3));
        System.assert(vpsTrafficHistoryResponse3.equals(vpsTrafficHistoryResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse1 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse2 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse3 = new OASVpsTrafficHistoryResponse();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse4 = new OASVpsTrafficHistoryResponse();

        System.assert(vpsTrafficHistoryResponse1.equals(vpsTrafficHistoryResponse2));
        System.assert(vpsTrafficHistoryResponse2.equals(vpsTrafficHistoryResponse1));
        System.assert(vpsTrafficHistoryResponse3.equals(vpsTrafficHistoryResponse4));
        System.assert(vpsTrafficHistoryResponse4.equals(vpsTrafficHistoryResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse1 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse2 = new OASVpsTrafficHistoryResponse();

        System.assertEquals(false, vpsTrafficHistoryResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficHistoryResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse1 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse2 = new OASVpsTrafficHistoryResponse();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse3;

        System.assertEquals(false, vpsTrafficHistoryResponse1.equals(vpsTrafficHistoryResponse3));
        System.assertEquals(false, vpsTrafficHistoryResponse2.equals(vpsTrafficHistoryResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse1 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse2 = new OASVpsTrafficHistoryResponse();

        System.assertEquals(vpsTrafficHistoryResponse1.hashCode(), vpsTrafficHistoryResponse1.hashCode());
        System.assertEquals(vpsTrafficHistoryResponse2.hashCode(), vpsTrafficHistoryResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse1 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse2 = OASVpsTrafficHistoryResponse.getExample();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse3 = new OASVpsTrafficHistoryResponse();
        OASVpsTrafficHistoryResponse vpsTrafficHistoryResponse4 = new OASVpsTrafficHistoryResponse();

        System.assert(vpsTrafficHistoryResponse1.equals(vpsTrafficHistoryResponse2));
        System.assert(vpsTrafficHistoryResponse3.equals(vpsTrafficHistoryResponse4));
        System.assertEquals(vpsTrafficHistoryResponse1.hashCode(), vpsTrafficHistoryResponse2.hashCode());
        System.assertEquals(vpsTrafficHistoryResponse3.hashCode(), vpsTrafficHistoryResponse4.hashCode());
    }
}
