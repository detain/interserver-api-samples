@isTest
private class OASMailStatsTypeVolumeFromTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom1 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom2 = mailStatsTypeVolumeFrom1;
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom3 = new OASMailStatsTypeVolumeFrom();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom4 = mailStatsTypeVolumeFrom3;

        System.assert(mailStatsTypeVolumeFrom1.equals(mailStatsTypeVolumeFrom2));
        System.assert(mailStatsTypeVolumeFrom2.equals(mailStatsTypeVolumeFrom1));
        System.assert(mailStatsTypeVolumeFrom1.equals(mailStatsTypeVolumeFrom1));
        System.assert(mailStatsTypeVolumeFrom3.equals(mailStatsTypeVolumeFrom4));
        System.assert(mailStatsTypeVolumeFrom4.equals(mailStatsTypeVolumeFrom3));
        System.assert(mailStatsTypeVolumeFrom3.equals(mailStatsTypeVolumeFrom3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom1 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom2 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom3 = new OASMailStatsTypeVolumeFrom();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom4 = new OASMailStatsTypeVolumeFrom();

        System.assert(mailStatsTypeVolumeFrom1.equals(mailStatsTypeVolumeFrom2));
        System.assert(mailStatsTypeVolumeFrom2.equals(mailStatsTypeVolumeFrom1));
        System.assert(mailStatsTypeVolumeFrom3.equals(mailStatsTypeVolumeFrom4));
        System.assert(mailStatsTypeVolumeFrom4.equals(mailStatsTypeVolumeFrom3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom1 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom2 = new OASMailStatsTypeVolumeFrom();

        System.assertEquals(false, mailStatsTypeVolumeFrom1.equals('foo'));
        System.assertEquals(false, mailStatsTypeVolumeFrom2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom1 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom2 = new OASMailStatsTypeVolumeFrom();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom3;

        System.assertEquals(false, mailStatsTypeVolumeFrom1.equals(mailStatsTypeVolumeFrom3));
        System.assertEquals(false, mailStatsTypeVolumeFrom2.equals(mailStatsTypeVolumeFrom3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom1 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom2 = new OASMailStatsTypeVolumeFrom();

        System.assertEquals(mailStatsTypeVolumeFrom1.hashCode(), mailStatsTypeVolumeFrom1.hashCode());
        System.assertEquals(mailStatsTypeVolumeFrom2.hashCode(), mailStatsTypeVolumeFrom2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom1 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom2 = OASMailStatsTypeVolumeFrom.getExample();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom3 = new OASMailStatsTypeVolumeFrom();
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom4 = new OASMailStatsTypeVolumeFrom();

        System.assert(mailStatsTypeVolumeFrom1.equals(mailStatsTypeVolumeFrom2));
        System.assert(mailStatsTypeVolumeFrom3.equals(mailStatsTypeVolumeFrom4));
        System.assertEquals(mailStatsTypeVolumeFrom1.hashCode(), mailStatsTypeVolumeFrom2.hashCode());
        System.assertEquals(mailStatsTypeVolumeFrom3.hashCode(), mailStatsTypeVolumeFrom4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailStatsTypeVolumeFrom mailStatsTypeVolumeFrom = new OASMailStatsTypeVolumeFrom();
        Map<String, String> x-property-mappings = mailStatsTypeVolumeFrom.getx-property-mappings();
        System.assertEquals('billingsomedomainCom', x-property-mappings.get('billing@somedomain.com'));
        System.assertEquals('salessomedomainCom', x-property-mappings.get('sales@somedomain.com'));
    }
}
