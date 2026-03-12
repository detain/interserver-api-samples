@isTest
private class OASReverseDnsEntriesTest {
    @isTest
    private static void equalsSameInstance() {
        OASReverseDnsEntries reverseDnsEntries1 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries2 = reverseDnsEntries1;
        OASReverseDnsEntries reverseDnsEntries3 = new OASReverseDnsEntries();
        OASReverseDnsEntries reverseDnsEntries4 = reverseDnsEntries3;

        System.assert(reverseDnsEntries1.equals(reverseDnsEntries2));
        System.assert(reverseDnsEntries2.equals(reverseDnsEntries1));
        System.assert(reverseDnsEntries1.equals(reverseDnsEntries1));
        System.assert(reverseDnsEntries3.equals(reverseDnsEntries4));
        System.assert(reverseDnsEntries4.equals(reverseDnsEntries3));
        System.assert(reverseDnsEntries3.equals(reverseDnsEntries3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASReverseDnsEntries reverseDnsEntries1 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries2 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries3 = new OASReverseDnsEntries();
        OASReverseDnsEntries reverseDnsEntries4 = new OASReverseDnsEntries();

        System.assert(reverseDnsEntries1.equals(reverseDnsEntries2));
        System.assert(reverseDnsEntries2.equals(reverseDnsEntries1));
        System.assert(reverseDnsEntries3.equals(reverseDnsEntries4));
        System.assert(reverseDnsEntries4.equals(reverseDnsEntries3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASReverseDnsEntries reverseDnsEntries1 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries2 = new OASReverseDnsEntries();

        System.assertEquals(false, reverseDnsEntries1.equals('foo'));
        System.assertEquals(false, reverseDnsEntries2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASReverseDnsEntries reverseDnsEntries1 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries2 = new OASReverseDnsEntries();
        OASReverseDnsEntries reverseDnsEntries3;

        System.assertEquals(false, reverseDnsEntries1.equals(reverseDnsEntries3));
        System.assertEquals(false, reverseDnsEntries2.equals(reverseDnsEntries3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASReverseDnsEntries reverseDnsEntries1 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries2 = new OASReverseDnsEntries();

        System.assertEquals(reverseDnsEntries1.hashCode(), reverseDnsEntries1.hashCode());
        System.assertEquals(reverseDnsEntries2.hashCode(), reverseDnsEntries2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASReverseDnsEntries reverseDnsEntries1 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries2 = OASReverseDnsEntries.getExample();
        OASReverseDnsEntries reverseDnsEntries3 = new OASReverseDnsEntries();
        OASReverseDnsEntries reverseDnsEntries4 = new OASReverseDnsEntries();

        System.assert(reverseDnsEntries1.equals(reverseDnsEntries2));
        System.assert(reverseDnsEntries3.equals(reverseDnsEntries4));
        System.assertEquals(reverseDnsEntries1.hashCode(), reverseDnsEntries2.hashCode());
        System.assertEquals(reverseDnsEntries3.hashCode(), reverseDnsEntries4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASReverseDnsEntries reverseDnsEntries = new OASReverseDnsEntries();
        System.assertEquals(new Map<String, oas_any_type_not_mapped>(), reverseDnsEntries.ips);
    }
}
