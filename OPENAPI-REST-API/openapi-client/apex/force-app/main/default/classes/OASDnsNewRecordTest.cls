@isTest
private class OASDnsNewRecordTest {
    @isTest
    private static void equalsSameInstance() {
        OASDnsNewRecord dnsNewRecord1 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord2 = dnsNewRecord1;
        OASDnsNewRecord dnsNewRecord3 = new OASDnsNewRecord();
        OASDnsNewRecord dnsNewRecord4 = dnsNewRecord3;

        System.assert(dnsNewRecord1.equals(dnsNewRecord2));
        System.assert(dnsNewRecord2.equals(dnsNewRecord1));
        System.assert(dnsNewRecord1.equals(dnsNewRecord1));
        System.assert(dnsNewRecord3.equals(dnsNewRecord4));
        System.assert(dnsNewRecord4.equals(dnsNewRecord3));
        System.assert(dnsNewRecord3.equals(dnsNewRecord3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDnsNewRecord dnsNewRecord1 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord2 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord3 = new OASDnsNewRecord();
        OASDnsNewRecord dnsNewRecord4 = new OASDnsNewRecord();

        System.assert(dnsNewRecord1.equals(dnsNewRecord2));
        System.assert(dnsNewRecord2.equals(dnsNewRecord1));
        System.assert(dnsNewRecord3.equals(dnsNewRecord4));
        System.assert(dnsNewRecord4.equals(dnsNewRecord3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDnsNewRecord dnsNewRecord1 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord2 = new OASDnsNewRecord();

        System.assertEquals(false, dnsNewRecord1.equals('foo'));
        System.assertEquals(false, dnsNewRecord2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDnsNewRecord dnsNewRecord1 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord2 = new OASDnsNewRecord();
        OASDnsNewRecord dnsNewRecord3;

        System.assertEquals(false, dnsNewRecord1.equals(dnsNewRecord3));
        System.assertEquals(false, dnsNewRecord2.equals(dnsNewRecord3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDnsNewRecord dnsNewRecord1 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord2 = new OASDnsNewRecord();

        System.assertEquals(dnsNewRecord1.hashCode(), dnsNewRecord1.hashCode());
        System.assertEquals(dnsNewRecord2.hashCode(), dnsNewRecord2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDnsNewRecord dnsNewRecord1 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord2 = OASDnsNewRecord.getExample();
        OASDnsNewRecord dnsNewRecord3 = new OASDnsNewRecord();
        OASDnsNewRecord dnsNewRecord4 = new OASDnsNewRecord();

        System.assert(dnsNewRecord1.equals(dnsNewRecord2));
        System.assert(dnsNewRecord3.equals(dnsNewRecord4));
        System.assertEquals(dnsNewRecord1.hashCode(), dnsNewRecord2.hashCode());
        System.assertEquals(dnsNewRecord3.hashCode(), dnsNewRecord4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASDnsNewRecord dnsNewRecord = new OASDnsNewRecord();
        System.assertEquals(86400, dnsNewRecord.ttl);
        System.assertEquals(0, dnsNewRecord.prio);
        System.assertEquals(null, dnsNewRecord.name);
        System.assertEquals(null, dnsNewRecord.type);
        System.assertEquals(null, dnsNewRecord.content);
    }
}
