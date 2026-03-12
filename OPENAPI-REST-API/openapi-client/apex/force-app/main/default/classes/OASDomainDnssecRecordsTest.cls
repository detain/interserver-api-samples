@isTest
private class OASDomainDnssecRecordsTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainDnssecRecords domainDnssecRecords1 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords2 = domainDnssecRecords1;
        OASDomainDnssecRecords domainDnssecRecords3 = new OASDomainDnssecRecords();
        OASDomainDnssecRecords domainDnssecRecords4 = domainDnssecRecords3;

        System.assert(domainDnssecRecords1.equals(domainDnssecRecords2));
        System.assert(domainDnssecRecords2.equals(domainDnssecRecords1));
        System.assert(domainDnssecRecords1.equals(domainDnssecRecords1));
        System.assert(domainDnssecRecords3.equals(domainDnssecRecords4));
        System.assert(domainDnssecRecords4.equals(domainDnssecRecords3));
        System.assert(domainDnssecRecords3.equals(domainDnssecRecords3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainDnssecRecords domainDnssecRecords1 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords2 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords3 = new OASDomainDnssecRecords();
        OASDomainDnssecRecords domainDnssecRecords4 = new OASDomainDnssecRecords();

        System.assert(domainDnssecRecords1.equals(domainDnssecRecords2));
        System.assert(domainDnssecRecords2.equals(domainDnssecRecords1));
        System.assert(domainDnssecRecords3.equals(domainDnssecRecords4));
        System.assert(domainDnssecRecords4.equals(domainDnssecRecords3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainDnssecRecords domainDnssecRecords1 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords2 = new OASDomainDnssecRecords();

        System.assertEquals(false, domainDnssecRecords1.equals('foo'));
        System.assertEquals(false, domainDnssecRecords2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainDnssecRecords domainDnssecRecords1 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords2 = new OASDomainDnssecRecords();
        OASDomainDnssecRecords domainDnssecRecords3;

        System.assertEquals(false, domainDnssecRecords1.equals(domainDnssecRecords3));
        System.assertEquals(false, domainDnssecRecords2.equals(domainDnssecRecords3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainDnssecRecords domainDnssecRecords1 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords2 = new OASDomainDnssecRecords();

        System.assertEquals(domainDnssecRecords1.hashCode(), domainDnssecRecords1.hashCode());
        System.assertEquals(domainDnssecRecords2.hashCode(), domainDnssecRecords2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainDnssecRecords domainDnssecRecords1 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords2 = OASDomainDnssecRecords.getExample();
        OASDomainDnssecRecords domainDnssecRecords3 = new OASDomainDnssecRecords();
        OASDomainDnssecRecords domainDnssecRecords4 = new OASDomainDnssecRecords();

        System.assert(domainDnssecRecords1.equals(domainDnssecRecords2));
        System.assert(domainDnssecRecords3.equals(domainDnssecRecords4));
        System.assertEquals(domainDnssecRecords1.hashCode(), domainDnssecRecords2.hashCode());
        System.assertEquals(domainDnssecRecords3.hashCode(), domainDnssecRecords4.hashCode());
    }
}
