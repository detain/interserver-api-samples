@isTest
private class OASDnsUpdateRecordTest {
    @isTest
    private static void equalsSameInstance() {
        OASDnsUpdateRecord dnsUpdateRecord1 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord2 = dnsUpdateRecord1;
        OASDnsUpdateRecord dnsUpdateRecord3 = new OASDnsUpdateRecord();
        OASDnsUpdateRecord dnsUpdateRecord4 = dnsUpdateRecord3;

        System.assert(dnsUpdateRecord1.equals(dnsUpdateRecord2));
        System.assert(dnsUpdateRecord2.equals(dnsUpdateRecord1));
        System.assert(dnsUpdateRecord1.equals(dnsUpdateRecord1));
        System.assert(dnsUpdateRecord3.equals(dnsUpdateRecord4));
        System.assert(dnsUpdateRecord4.equals(dnsUpdateRecord3));
        System.assert(dnsUpdateRecord3.equals(dnsUpdateRecord3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDnsUpdateRecord dnsUpdateRecord1 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord2 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord3 = new OASDnsUpdateRecord();
        OASDnsUpdateRecord dnsUpdateRecord4 = new OASDnsUpdateRecord();

        System.assert(dnsUpdateRecord1.equals(dnsUpdateRecord2));
        System.assert(dnsUpdateRecord2.equals(dnsUpdateRecord1));
        System.assert(dnsUpdateRecord3.equals(dnsUpdateRecord4));
        System.assert(dnsUpdateRecord4.equals(dnsUpdateRecord3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDnsUpdateRecord dnsUpdateRecord1 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord2 = new OASDnsUpdateRecord();

        System.assertEquals(false, dnsUpdateRecord1.equals('foo'));
        System.assertEquals(false, dnsUpdateRecord2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDnsUpdateRecord dnsUpdateRecord1 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord2 = new OASDnsUpdateRecord();
        OASDnsUpdateRecord dnsUpdateRecord3;

        System.assertEquals(false, dnsUpdateRecord1.equals(dnsUpdateRecord3));
        System.assertEquals(false, dnsUpdateRecord2.equals(dnsUpdateRecord3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDnsUpdateRecord dnsUpdateRecord1 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord2 = new OASDnsUpdateRecord();

        System.assertEquals(dnsUpdateRecord1.hashCode(), dnsUpdateRecord1.hashCode());
        System.assertEquals(dnsUpdateRecord2.hashCode(), dnsUpdateRecord2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDnsUpdateRecord dnsUpdateRecord1 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord2 = OASDnsUpdateRecord.getExample();
        OASDnsUpdateRecord dnsUpdateRecord3 = new OASDnsUpdateRecord();
        OASDnsUpdateRecord dnsUpdateRecord4 = new OASDnsUpdateRecord();

        System.assert(dnsUpdateRecord1.equals(dnsUpdateRecord2));
        System.assert(dnsUpdateRecord3.equals(dnsUpdateRecord4));
        System.assertEquals(dnsUpdateRecord1.hashCode(), dnsUpdateRecord2.hashCode());
        System.assertEquals(dnsUpdateRecord3.hashCode(), dnsUpdateRecord4.hashCode());
    }
}
