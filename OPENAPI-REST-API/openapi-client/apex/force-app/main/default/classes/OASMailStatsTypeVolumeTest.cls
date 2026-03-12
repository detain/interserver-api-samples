@isTest
private class OASMailStatsTypeVolumeTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailStatsTypeVolume mailStatsTypeVolume1 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume2 = mailStatsTypeVolume1;
        OASMailStatsTypeVolume mailStatsTypeVolume3 = new OASMailStatsTypeVolume();
        OASMailStatsTypeVolume mailStatsTypeVolume4 = mailStatsTypeVolume3;

        System.assert(mailStatsTypeVolume1.equals(mailStatsTypeVolume2));
        System.assert(mailStatsTypeVolume2.equals(mailStatsTypeVolume1));
        System.assert(mailStatsTypeVolume1.equals(mailStatsTypeVolume1));
        System.assert(mailStatsTypeVolume3.equals(mailStatsTypeVolume4));
        System.assert(mailStatsTypeVolume4.equals(mailStatsTypeVolume3));
        System.assert(mailStatsTypeVolume3.equals(mailStatsTypeVolume3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailStatsTypeVolume mailStatsTypeVolume1 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume2 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume3 = new OASMailStatsTypeVolume();
        OASMailStatsTypeVolume mailStatsTypeVolume4 = new OASMailStatsTypeVolume();

        System.assert(mailStatsTypeVolume1.equals(mailStatsTypeVolume2));
        System.assert(mailStatsTypeVolume2.equals(mailStatsTypeVolume1));
        System.assert(mailStatsTypeVolume3.equals(mailStatsTypeVolume4));
        System.assert(mailStatsTypeVolume4.equals(mailStatsTypeVolume3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailStatsTypeVolume mailStatsTypeVolume1 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume2 = new OASMailStatsTypeVolume();

        System.assertEquals(false, mailStatsTypeVolume1.equals('foo'));
        System.assertEquals(false, mailStatsTypeVolume2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailStatsTypeVolume mailStatsTypeVolume1 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume2 = new OASMailStatsTypeVolume();
        OASMailStatsTypeVolume mailStatsTypeVolume3;

        System.assertEquals(false, mailStatsTypeVolume1.equals(mailStatsTypeVolume3));
        System.assertEquals(false, mailStatsTypeVolume2.equals(mailStatsTypeVolume3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailStatsTypeVolume mailStatsTypeVolume1 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume2 = new OASMailStatsTypeVolume();

        System.assertEquals(mailStatsTypeVolume1.hashCode(), mailStatsTypeVolume1.hashCode());
        System.assertEquals(mailStatsTypeVolume2.hashCode(), mailStatsTypeVolume2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailStatsTypeVolume mailStatsTypeVolume1 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume2 = OASMailStatsTypeVolume.getExample();
        OASMailStatsTypeVolume mailStatsTypeVolume3 = new OASMailStatsTypeVolume();
        OASMailStatsTypeVolume mailStatsTypeVolume4 = new OASMailStatsTypeVolume();

        System.assert(mailStatsTypeVolume1.equals(mailStatsTypeVolume2));
        System.assert(mailStatsTypeVolume3.equals(mailStatsTypeVolume4));
        System.assertEquals(mailStatsTypeVolume1.hashCode(), mailStatsTypeVolume2.hashCode());
        System.assertEquals(mailStatsTypeVolume3.hashCode(), mailStatsTypeVolume4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailStatsTypeVolume mailStatsTypeVolume = new OASMailStatsTypeVolume();
        Map<String, String> x-property-mappings = mailStatsTypeVolume.getx-property-mappings();
        System.assertEquals('r_from', x-property-mappings.get('from'));
    }
}
