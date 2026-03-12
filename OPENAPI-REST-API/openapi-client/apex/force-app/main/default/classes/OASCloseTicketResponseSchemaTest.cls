@isTest
private class OASCloseTicketResponseSchemaTest {
    @isTest
    private static void equalsSameInstance() {
        OASCloseTicketResponseSchema closeTicketResponseSchema1 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema2 = closeTicketResponseSchema1;
        OASCloseTicketResponseSchema closeTicketResponseSchema3 = new OASCloseTicketResponseSchema();
        OASCloseTicketResponseSchema closeTicketResponseSchema4 = closeTicketResponseSchema3;

        System.assert(closeTicketResponseSchema1.equals(closeTicketResponseSchema2));
        System.assert(closeTicketResponseSchema2.equals(closeTicketResponseSchema1));
        System.assert(closeTicketResponseSchema1.equals(closeTicketResponseSchema1));
        System.assert(closeTicketResponseSchema3.equals(closeTicketResponseSchema4));
        System.assert(closeTicketResponseSchema4.equals(closeTicketResponseSchema3));
        System.assert(closeTicketResponseSchema3.equals(closeTicketResponseSchema3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASCloseTicketResponseSchema closeTicketResponseSchema1 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema2 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema3 = new OASCloseTicketResponseSchema();
        OASCloseTicketResponseSchema closeTicketResponseSchema4 = new OASCloseTicketResponseSchema();

        System.assert(closeTicketResponseSchema1.equals(closeTicketResponseSchema2));
        System.assert(closeTicketResponseSchema2.equals(closeTicketResponseSchema1));
        System.assert(closeTicketResponseSchema3.equals(closeTicketResponseSchema4));
        System.assert(closeTicketResponseSchema4.equals(closeTicketResponseSchema3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASCloseTicketResponseSchema closeTicketResponseSchema1 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema2 = new OASCloseTicketResponseSchema();

        System.assertEquals(false, closeTicketResponseSchema1.equals('foo'));
        System.assertEquals(false, closeTicketResponseSchema2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASCloseTicketResponseSchema closeTicketResponseSchema1 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema2 = new OASCloseTicketResponseSchema();
        OASCloseTicketResponseSchema closeTicketResponseSchema3;

        System.assertEquals(false, closeTicketResponseSchema1.equals(closeTicketResponseSchema3));
        System.assertEquals(false, closeTicketResponseSchema2.equals(closeTicketResponseSchema3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASCloseTicketResponseSchema closeTicketResponseSchema1 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema2 = new OASCloseTicketResponseSchema();

        System.assertEquals(closeTicketResponseSchema1.hashCode(), closeTicketResponseSchema1.hashCode());
        System.assertEquals(closeTicketResponseSchema2.hashCode(), closeTicketResponseSchema2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASCloseTicketResponseSchema closeTicketResponseSchema1 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema2 = OASCloseTicketResponseSchema.getExample();
        OASCloseTicketResponseSchema closeTicketResponseSchema3 = new OASCloseTicketResponseSchema();
        OASCloseTicketResponseSchema closeTicketResponseSchema4 = new OASCloseTicketResponseSchema();

        System.assert(closeTicketResponseSchema1.equals(closeTicketResponseSchema2));
        System.assert(closeTicketResponseSchema3.equals(closeTicketResponseSchema4));
        System.assertEquals(closeTicketResponseSchema1.hashCode(), closeTicketResponseSchema2.hashCode());
        System.assertEquals(closeTicketResponseSchema3.hashCode(), closeTicketResponseSchema4.hashCode());
    }
}
