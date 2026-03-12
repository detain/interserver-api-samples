@isTest
private class OASMailStatsTypeVolumeIpTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp1 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp2 = mailStatsTypeVolumeIp1;
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp3 = new OASMailStatsTypeVolumeIp();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp4 = mailStatsTypeVolumeIp3;

        System.assert(mailStatsTypeVolumeIp1.equals(mailStatsTypeVolumeIp2));
        System.assert(mailStatsTypeVolumeIp2.equals(mailStatsTypeVolumeIp1));
        System.assert(mailStatsTypeVolumeIp1.equals(mailStatsTypeVolumeIp1));
        System.assert(mailStatsTypeVolumeIp3.equals(mailStatsTypeVolumeIp4));
        System.assert(mailStatsTypeVolumeIp4.equals(mailStatsTypeVolumeIp3));
        System.assert(mailStatsTypeVolumeIp3.equals(mailStatsTypeVolumeIp3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp1 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp2 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp3 = new OASMailStatsTypeVolumeIp();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp4 = new OASMailStatsTypeVolumeIp();

        System.assert(mailStatsTypeVolumeIp1.equals(mailStatsTypeVolumeIp2));
        System.assert(mailStatsTypeVolumeIp2.equals(mailStatsTypeVolumeIp1));
        System.assert(mailStatsTypeVolumeIp3.equals(mailStatsTypeVolumeIp4));
        System.assert(mailStatsTypeVolumeIp4.equals(mailStatsTypeVolumeIp3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp1 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp2 = new OASMailStatsTypeVolumeIp();

        System.assertEquals(false, mailStatsTypeVolumeIp1.equals('foo'));
        System.assertEquals(false, mailStatsTypeVolumeIp2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp1 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp2 = new OASMailStatsTypeVolumeIp();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp3;

        System.assertEquals(false, mailStatsTypeVolumeIp1.equals(mailStatsTypeVolumeIp3));
        System.assertEquals(false, mailStatsTypeVolumeIp2.equals(mailStatsTypeVolumeIp3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp1 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp2 = new OASMailStatsTypeVolumeIp();

        System.assertEquals(mailStatsTypeVolumeIp1.hashCode(), mailStatsTypeVolumeIp1.hashCode());
        System.assertEquals(mailStatsTypeVolumeIp2.hashCode(), mailStatsTypeVolumeIp2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp1 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp2 = OASMailStatsTypeVolumeIp.getExample();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp3 = new OASMailStatsTypeVolumeIp();
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp4 = new OASMailStatsTypeVolumeIp();

        System.assert(mailStatsTypeVolumeIp1.equals(mailStatsTypeVolumeIp2));
        System.assert(mailStatsTypeVolumeIp3.equals(mailStatsTypeVolumeIp4));
        System.assertEquals(mailStatsTypeVolumeIp1.hashCode(), mailStatsTypeVolumeIp2.hashCode());
        System.assertEquals(mailStatsTypeVolumeIp3.hashCode(), mailStatsTypeVolumeIp4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailStatsTypeVolumeIp mailStatsTypeVolumeIp = new OASMailStatsTypeVolumeIp();
        Map<String, String> x-property-mappings = mailStatsTypeVolumeIp.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('1.1.1.1'));
        System.assertEquals('', x-property-mappings.get('2.2.2.2'));
        System.assertEquals('', x-property-mappings.get('3.3.3.3'));
        System.assertEquals('', x-property-mappings.get('4.4.4.4'));
    }
}
