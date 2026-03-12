@isTest
private class OASDnsRecordTest {
    @isTest
    private static void equalsSameInstance() {
        OASDnsRecord dnsRecord1 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord2 = dnsRecord1;
        OASDnsRecord dnsRecord3 = new OASDnsRecord();
        OASDnsRecord dnsRecord4 = dnsRecord3;

        System.assert(dnsRecord1.equals(dnsRecord2));
        System.assert(dnsRecord2.equals(dnsRecord1));
        System.assert(dnsRecord1.equals(dnsRecord1));
        System.assert(dnsRecord3.equals(dnsRecord4));
        System.assert(dnsRecord4.equals(dnsRecord3));
        System.assert(dnsRecord3.equals(dnsRecord3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDnsRecord dnsRecord1 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord2 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord3 = new OASDnsRecord();
        OASDnsRecord dnsRecord4 = new OASDnsRecord();

        System.assert(dnsRecord1.equals(dnsRecord2));
        System.assert(dnsRecord2.equals(dnsRecord1));
        System.assert(dnsRecord3.equals(dnsRecord4));
        System.assert(dnsRecord4.equals(dnsRecord3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDnsRecord dnsRecord1 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord2 = new OASDnsRecord();

        System.assertEquals(false, dnsRecord1.equals('foo'));
        System.assertEquals(false, dnsRecord2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDnsRecord dnsRecord1 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord2 = new OASDnsRecord();
        OASDnsRecord dnsRecord3;

        System.assertEquals(false, dnsRecord1.equals(dnsRecord3));
        System.assertEquals(false, dnsRecord2.equals(dnsRecord3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDnsRecord dnsRecord1 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord2 = new OASDnsRecord();

        System.assertEquals(dnsRecord1.hashCode(), dnsRecord1.hashCode());
        System.assertEquals(dnsRecord2.hashCode(), dnsRecord2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDnsRecord dnsRecord1 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord2 = OASDnsRecord.getExample();
        OASDnsRecord dnsRecord3 = new OASDnsRecord();
        OASDnsRecord dnsRecord4 = new OASDnsRecord();

        System.assert(dnsRecord1.equals(dnsRecord2));
        System.assert(dnsRecord3.equals(dnsRecord4));
        System.assertEquals(dnsRecord1.hashCode(), dnsRecord2.hashCode());
        System.assertEquals(dnsRecord3.hashCode(), dnsRecord4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDnsRecord dnsRecord = new OASDnsRecord();
        Map<String, String> x-property-mappings = dnsRecord.getx-property-mappings();
        System.assertEquals('domainId', x-property-mappings.get('domain_id'));
    }
}
