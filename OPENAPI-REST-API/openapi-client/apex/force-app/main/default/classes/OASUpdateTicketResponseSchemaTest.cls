@isTest
private class OASUpdateTicketResponseSchemaTest {
    @isTest
    private static void equalsSameInstance() {
        OASUpdateTicketResponseSchema updateTicketResponseSchema1 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema2 = updateTicketResponseSchema1;
        OASUpdateTicketResponseSchema updateTicketResponseSchema3 = new OASUpdateTicketResponseSchema();
        OASUpdateTicketResponseSchema updateTicketResponseSchema4 = updateTicketResponseSchema3;

        System.assert(updateTicketResponseSchema1.equals(updateTicketResponseSchema2));
        System.assert(updateTicketResponseSchema2.equals(updateTicketResponseSchema1));
        System.assert(updateTicketResponseSchema1.equals(updateTicketResponseSchema1));
        System.assert(updateTicketResponseSchema3.equals(updateTicketResponseSchema4));
        System.assert(updateTicketResponseSchema4.equals(updateTicketResponseSchema3));
        System.assert(updateTicketResponseSchema3.equals(updateTicketResponseSchema3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASUpdateTicketResponseSchema updateTicketResponseSchema1 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema2 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema3 = new OASUpdateTicketResponseSchema();
        OASUpdateTicketResponseSchema updateTicketResponseSchema4 = new OASUpdateTicketResponseSchema();

        System.assert(updateTicketResponseSchema1.equals(updateTicketResponseSchema2));
        System.assert(updateTicketResponseSchema2.equals(updateTicketResponseSchema1));
        System.assert(updateTicketResponseSchema3.equals(updateTicketResponseSchema4));
        System.assert(updateTicketResponseSchema4.equals(updateTicketResponseSchema3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASUpdateTicketResponseSchema updateTicketResponseSchema1 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema2 = new OASUpdateTicketResponseSchema();

        System.assertEquals(false, updateTicketResponseSchema1.equals('foo'));
        System.assertEquals(false, updateTicketResponseSchema2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASUpdateTicketResponseSchema updateTicketResponseSchema1 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema2 = new OASUpdateTicketResponseSchema();
        OASUpdateTicketResponseSchema updateTicketResponseSchema3;

        System.assertEquals(false, updateTicketResponseSchema1.equals(updateTicketResponseSchema3));
        System.assertEquals(false, updateTicketResponseSchema2.equals(updateTicketResponseSchema3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASUpdateTicketResponseSchema updateTicketResponseSchema1 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema2 = new OASUpdateTicketResponseSchema();

        System.assertEquals(updateTicketResponseSchema1.hashCode(), updateTicketResponseSchema1.hashCode());
        System.assertEquals(updateTicketResponseSchema2.hashCode(), updateTicketResponseSchema2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASUpdateTicketResponseSchema updateTicketResponseSchema1 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema2 = OASUpdateTicketResponseSchema.getExample();
        OASUpdateTicketResponseSchema updateTicketResponseSchema3 = new OASUpdateTicketResponseSchema();
        OASUpdateTicketResponseSchema updateTicketResponseSchema4 = new OASUpdateTicketResponseSchema();

        System.assert(updateTicketResponseSchema1.equals(updateTicketResponseSchema2));
        System.assert(updateTicketResponseSchema3.equals(updateTicketResponseSchema4));
        System.assertEquals(updateTicketResponseSchema1.hashCode(), updateTicketResponseSchema2.hashCode());
        System.assertEquals(updateTicketResponseSchema3.hashCode(), updateTicketResponseSchema4.hashCode());
    }
}
