@isTest
private class OASMailLogEntryTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailLogEntry mailLogEntry1 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry2 = mailLogEntry1;
        OASMailLogEntry mailLogEntry3 = new OASMailLogEntry();
        OASMailLogEntry mailLogEntry4 = mailLogEntry3;

        System.assert(mailLogEntry1.equals(mailLogEntry2));
        System.assert(mailLogEntry2.equals(mailLogEntry1));
        System.assert(mailLogEntry1.equals(mailLogEntry1));
        System.assert(mailLogEntry3.equals(mailLogEntry4));
        System.assert(mailLogEntry4.equals(mailLogEntry3));
        System.assert(mailLogEntry3.equals(mailLogEntry3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailLogEntry mailLogEntry1 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry2 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry3 = new OASMailLogEntry();
        OASMailLogEntry mailLogEntry4 = new OASMailLogEntry();

        System.assert(mailLogEntry1.equals(mailLogEntry2));
        System.assert(mailLogEntry2.equals(mailLogEntry1));
        System.assert(mailLogEntry3.equals(mailLogEntry4));
        System.assert(mailLogEntry4.equals(mailLogEntry3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailLogEntry mailLogEntry1 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry2 = new OASMailLogEntry();

        System.assertEquals(false, mailLogEntry1.equals('foo'));
        System.assertEquals(false, mailLogEntry2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailLogEntry mailLogEntry1 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry2 = new OASMailLogEntry();
        OASMailLogEntry mailLogEntry3;

        System.assertEquals(false, mailLogEntry1.equals(mailLogEntry3));
        System.assertEquals(false, mailLogEntry2.equals(mailLogEntry3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailLogEntry mailLogEntry1 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry2 = new OASMailLogEntry();

        System.assertEquals(mailLogEntry1.hashCode(), mailLogEntry1.hashCode());
        System.assertEquals(mailLogEntry2.hashCode(), mailLogEntry2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailLogEntry mailLogEntry1 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry2 = OASMailLogEntry.getExample();
        OASMailLogEntry mailLogEntry3 = new OASMailLogEntry();
        OASMailLogEntry mailLogEntry4 = new OASMailLogEntry();

        System.assert(mailLogEntry1.equals(mailLogEntry2));
        System.assert(mailLogEntry3.equals(mailLogEntry4));
        System.assertEquals(mailLogEntry1.hashCode(), mailLogEntry2.hashCode());
        System.assertEquals(mailLogEntry3.hashCode(), mailLogEntry4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailLogEntry mailLogEntry = new OASMailLogEntry();
        Map<String, String> x-property-mappings = mailLogEntry.getx-property-mappings();
        System.assertEquals('id', x-property-mappings.get('_id'));
        System.assertEquals('r_from', x-property-mappings.get('from'));
        System.assertEquals('r_time', x-property-mappings.get('time'));
        System.assertEquals('r_interface', x-property-mappings.get('interface'));
    }
}
