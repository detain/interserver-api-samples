@isTest
private class OASDenyRuleRecordTest {
    @isTest
    private static void equalsSameInstance() {
        OASDenyRuleRecord denyRuleRecord1 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord2 = denyRuleRecord1;
        OASDenyRuleRecord denyRuleRecord3 = new OASDenyRuleRecord();
        OASDenyRuleRecord denyRuleRecord4 = denyRuleRecord3;

        System.assert(denyRuleRecord1.equals(denyRuleRecord2));
        System.assert(denyRuleRecord2.equals(denyRuleRecord1));
        System.assert(denyRuleRecord1.equals(denyRuleRecord1));
        System.assert(denyRuleRecord3.equals(denyRuleRecord4));
        System.assert(denyRuleRecord4.equals(denyRuleRecord3));
        System.assert(denyRuleRecord3.equals(denyRuleRecord3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDenyRuleRecord denyRuleRecord1 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord2 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord3 = new OASDenyRuleRecord();
        OASDenyRuleRecord denyRuleRecord4 = new OASDenyRuleRecord();

        System.assert(denyRuleRecord1.equals(denyRuleRecord2));
        System.assert(denyRuleRecord2.equals(denyRuleRecord1));
        System.assert(denyRuleRecord3.equals(denyRuleRecord4));
        System.assert(denyRuleRecord4.equals(denyRuleRecord3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDenyRuleRecord denyRuleRecord1 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord2 = new OASDenyRuleRecord();

        System.assertEquals(false, denyRuleRecord1.equals('foo'));
        System.assertEquals(false, denyRuleRecord2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDenyRuleRecord denyRuleRecord1 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord2 = new OASDenyRuleRecord();
        OASDenyRuleRecord denyRuleRecord3;

        System.assertEquals(false, denyRuleRecord1.equals(denyRuleRecord3));
        System.assertEquals(false, denyRuleRecord2.equals(denyRuleRecord3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDenyRuleRecord denyRuleRecord1 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord2 = new OASDenyRuleRecord();

        System.assertEquals(denyRuleRecord1.hashCode(), denyRuleRecord1.hashCode());
        System.assertEquals(denyRuleRecord2.hashCode(), denyRuleRecord2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDenyRuleRecord denyRuleRecord1 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord2 = OASDenyRuleRecord.getExample();
        OASDenyRuleRecord denyRuleRecord3 = new OASDenyRuleRecord();
        OASDenyRuleRecord denyRuleRecord4 = new OASDenyRuleRecord();

        System.assert(denyRuleRecord1.equals(denyRuleRecord2));
        System.assert(denyRuleRecord3.equals(denyRuleRecord4));
        System.assertEquals(denyRuleRecord1.hashCode(), denyRuleRecord2.hashCode());
        System.assertEquals(denyRuleRecord3.hashCode(), denyRuleRecord4.hashCode());
    }
}
