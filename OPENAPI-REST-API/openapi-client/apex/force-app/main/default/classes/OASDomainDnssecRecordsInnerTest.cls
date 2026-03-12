@isTest
private class OASDomainDnssecRecordsInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner1 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner2 = domainDnssecRecordsInner1;
        OASDomainDnssecRecordsInner domainDnssecRecordsInner3 = new OASDomainDnssecRecordsInner();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner4 = domainDnssecRecordsInner3;

        System.assert(domainDnssecRecordsInner1.equals(domainDnssecRecordsInner2));
        System.assert(domainDnssecRecordsInner2.equals(domainDnssecRecordsInner1));
        System.assert(domainDnssecRecordsInner1.equals(domainDnssecRecordsInner1));
        System.assert(domainDnssecRecordsInner3.equals(domainDnssecRecordsInner4));
        System.assert(domainDnssecRecordsInner4.equals(domainDnssecRecordsInner3));
        System.assert(domainDnssecRecordsInner3.equals(domainDnssecRecordsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner1 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner2 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner3 = new OASDomainDnssecRecordsInner();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner4 = new OASDomainDnssecRecordsInner();

        System.assert(domainDnssecRecordsInner1.equals(domainDnssecRecordsInner2));
        System.assert(domainDnssecRecordsInner2.equals(domainDnssecRecordsInner1));
        System.assert(domainDnssecRecordsInner3.equals(domainDnssecRecordsInner4));
        System.assert(domainDnssecRecordsInner4.equals(domainDnssecRecordsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner1 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner2 = new OASDomainDnssecRecordsInner();

        System.assertEquals(false, domainDnssecRecordsInner1.equals('foo'));
        System.assertEquals(false, domainDnssecRecordsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner1 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner2 = new OASDomainDnssecRecordsInner();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner3;

        System.assertEquals(false, domainDnssecRecordsInner1.equals(domainDnssecRecordsInner3));
        System.assertEquals(false, domainDnssecRecordsInner2.equals(domainDnssecRecordsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner1 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner2 = new OASDomainDnssecRecordsInner();

        System.assertEquals(domainDnssecRecordsInner1.hashCode(), domainDnssecRecordsInner1.hashCode());
        System.assertEquals(domainDnssecRecordsInner2.hashCode(), domainDnssecRecordsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner1 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner2 = OASDomainDnssecRecordsInner.getExample();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner3 = new OASDomainDnssecRecordsInner();
        OASDomainDnssecRecordsInner domainDnssecRecordsInner4 = new OASDomainDnssecRecordsInner();

        System.assert(domainDnssecRecordsInner1.equals(domainDnssecRecordsInner2));
        System.assert(domainDnssecRecordsInner3.equals(domainDnssecRecordsInner4));
        System.assertEquals(domainDnssecRecordsInner1.hashCode(), domainDnssecRecordsInner2.hashCode());
        System.assertEquals(domainDnssecRecordsInner3.hashCode(), domainDnssecRecordsInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainDnssecRecordsInner domainDnssecRecordsInner = new OASDomainDnssecRecordsInner();
        Map<String, String> x-property-mappings = domainDnssecRecordsInner.getx-property-mappings();
        System.assertEquals('digestType', x-property-mappings.get('digest_type'));
        System.assertEquals('keyTag', x-property-mappings.get('key_tag'));
    }
}
