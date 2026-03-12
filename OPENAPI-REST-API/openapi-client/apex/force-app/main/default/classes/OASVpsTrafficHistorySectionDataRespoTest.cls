@isTest
private class OASVpsTrafficHistorySectionDataRespoTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse1 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse2 = vpsTrafficHistorySectionDataResponse1;
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse3 = new OASVpsTrafficHistorySectionDataRespo();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse4 = vpsTrafficHistorySectionDataResponse3;

        System.assert(vpsTrafficHistorySectionDataResponse1.equals(vpsTrafficHistorySectionDataResponse2));
        System.assert(vpsTrafficHistorySectionDataResponse2.equals(vpsTrafficHistorySectionDataResponse1));
        System.assert(vpsTrafficHistorySectionDataResponse1.equals(vpsTrafficHistorySectionDataResponse1));
        System.assert(vpsTrafficHistorySectionDataResponse3.equals(vpsTrafficHistorySectionDataResponse4));
        System.assert(vpsTrafficHistorySectionDataResponse4.equals(vpsTrafficHistorySectionDataResponse3));
        System.assert(vpsTrafficHistorySectionDataResponse3.equals(vpsTrafficHistorySectionDataResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse1 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse2 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse3 = new OASVpsTrafficHistorySectionDataRespo();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse4 = new OASVpsTrafficHistorySectionDataRespo();

        System.assert(vpsTrafficHistorySectionDataResponse1.equals(vpsTrafficHistorySectionDataResponse2));
        System.assert(vpsTrafficHistorySectionDataResponse2.equals(vpsTrafficHistorySectionDataResponse1));
        System.assert(vpsTrafficHistorySectionDataResponse3.equals(vpsTrafficHistorySectionDataResponse4));
        System.assert(vpsTrafficHistorySectionDataResponse4.equals(vpsTrafficHistorySectionDataResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse1 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse2 = new OASVpsTrafficHistorySectionDataRespo();

        System.assertEquals(false, vpsTrafficHistorySectionDataResponse1.equals('foo'));
        System.assertEquals(false, vpsTrafficHistorySectionDataResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse1 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse2 = new OASVpsTrafficHistorySectionDataRespo();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse3;

        System.assertEquals(false, vpsTrafficHistorySectionDataResponse1.equals(vpsTrafficHistorySectionDataResponse3));
        System.assertEquals(false, vpsTrafficHistorySectionDataResponse2.equals(vpsTrafficHistorySectionDataResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse1 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse2 = new OASVpsTrafficHistorySectionDataRespo();

        System.assertEquals(vpsTrafficHistorySectionDataResponse1.hashCode(), vpsTrafficHistorySectionDataResponse1.hashCode());
        System.assertEquals(vpsTrafficHistorySectionDataResponse2.hashCode(), vpsTrafficHistorySectionDataResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse1 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse2 = OASVpsTrafficHistorySectionDataRespo.getExample();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse3 = new OASVpsTrafficHistorySectionDataRespo();
        OASVpsTrafficHistorySectionDataRespo vpsTrafficHistorySectionDataResponse4 = new OASVpsTrafficHistorySectionDataRespo();

        System.assert(vpsTrafficHistorySectionDataResponse1.equals(vpsTrafficHistorySectionDataResponse2));
        System.assert(vpsTrafficHistorySectionDataResponse3.equals(vpsTrafficHistorySectionDataResponse4));
        System.assertEquals(vpsTrafficHistorySectionDataResponse1.hashCode(), vpsTrafficHistorySectionDataResponse2.hashCode());
        System.assertEquals(vpsTrafficHistorySectionDataResponse3.hashCode(), vpsTrafficHistorySectionDataResponse4.hashCode());
    }
}
