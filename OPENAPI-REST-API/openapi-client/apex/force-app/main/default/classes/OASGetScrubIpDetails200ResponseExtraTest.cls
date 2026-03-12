@isTest
private class OASGetScrubIpDetails200ResponseExtraTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables1 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables2 = getScrubIpDetails200ResponseExtraInfoTables1;
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables3 = new OASGetScrubIpDetails200ResponseExtra();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables4 = getScrubIpDetails200ResponseExtraInfoTables3;

        System.assert(getScrubIpDetails200ResponseExtraInfoTables1.equals(getScrubIpDetails200ResponseExtraInfoTables2));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables2.equals(getScrubIpDetails200ResponseExtraInfoTables1));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables1.equals(getScrubIpDetails200ResponseExtraInfoTables1));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables3.equals(getScrubIpDetails200ResponseExtraInfoTables4));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables4.equals(getScrubIpDetails200ResponseExtraInfoTables3));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables3.equals(getScrubIpDetails200ResponseExtraInfoTables3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables1 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables2 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables3 = new OASGetScrubIpDetails200ResponseExtra();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables4 = new OASGetScrubIpDetails200ResponseExtra();

        System.assert(getScrubIpDetails200ResponseExtraInfoTables1.equals(getScrubIpDetails200ResponseExtraInfoTables2));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables2.equals(getScrubIpDetails200ResponseExtraInfoTables1));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables3.equals(getScrubIpDetails200ResponseExtraInfoTables4));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables4.equals(getScrubIpDetails200ResponseExtraInfoTables3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables1 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables2 = new OASGetScrubIpDetails200ResponseExtra();

        System.assertEquals(false, getScrubIpDetails200ResponseExtraInfoTables1.equals('foo'));
        System.assertEquals(false, getScrubIpDetails200ResponseExtraInfoTables2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables1 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables2 = new OASGetScrubIpDetails200ResponseExtra();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables3;

        System.assertEquals(false, getScrubIpDetails200ResponseExtraInfoTables1.equals(getScrubIpDetails200ResponseExtraInfoTables3));
        System.assertEquals(false, getScrubIpDetails200ResponseExtraInfoTables2.equals(getScrubIpDetails200ResponseExtraInfoTables3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables1 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables2 = new OASGetScrubIpDetails200ResponseExtra();

        System.assertEquals(getScrubIpDetails200ResponseExtraInfoTables1.hashCode(), getScrubIpDetails200ResponseExtraInfoTables1.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseExtraInfoTables2.hashCode(), getScrubIpDetails200ResponseExtraInfoTables2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables1 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables2 = OASGetScrubIpDetails200ResponseExtra.getExample();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables3 = new OASGetScrubIpDetails200ResponseExtra();
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables4 = new OASGetScrubIpDetails200ResponseExtra();

        System.assert(getScrubIpDetails200ResponseExtraInfoTables1.equals(getScrubIpDetails200ResponseExtraInfoTables2));
        System.assert(getScrubIpDetails200ResponseExtraInfoTables3.equals(getScrubIpDetails200ResponseExtraInfoTables4));
        System.assertEquals(getScrubIpDetails200ResponseExtraInfoTables1.hashCode(), getScrubIpDetails200ResponseExtraInfoTables2.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseExtraInfoTables3.hashCode(), getScrubIpDetails200ResponseExtraInfoTables4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetScrubIpDetails200ResponseExtra getScrubIpDetails200ResponseExtraInfoTables = new OASGetScrubIpDetails200ResponseExtra();
        Map<String, String> x-property-mappings = getScrubIpDetails200ResponseExtraInfoTables.getx-property-mappings();
        System.assertEquals('scrubIps', x-property-mappings.get('scrub_ips'));
    }
}
