@isTest
private class OASTicketsRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketsRow ticketsRow1 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow2 = ticketsRow1;
        OASTicketsRow ticketsRow3 = new OASTicketsRow();
        OASTicketsRow ticketsRow4 = ticketsRow3;

        System.assert(ticketsRow1.equals(ticketsRow2));
        System.assert(ticketsRow2.equals(ticketsRow1));
        System.assert(ticketsRow1.equals(ticketsRow1));
        System.assert(ticketsRow3.equals(ticketsRow4));
        System.assert(ticketsRow4.equals(ticketsRow3));
        System.assert(ticketsRow3.equals(ticketsRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketsRow ticketsRow1 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow2 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow3 = new OASTicketsRow();
        OASTicketsRow ticketsRow4 = new OASTicketsRow();

        System.assert(ticketsRow1.equals(ticketsRow2));
        System.assert(ticketsRow2.equals(ticketsRow1));
        System.assert(ticketsRow3.equals(ticketsRow4));
        System.assert(ticketsRow4.equals(ticketsRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketsRow ticketsRow1 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow2 = new OASTicketsRow();

        System.assertEquals(false, ticketsRow1.equals('foo'));
        System.assertEquals(false, ticketsRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketsRow ticketsRow1 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow2 = new OASTicketsRow();
        OASTicketsRow ticketsRow3;

        System.assertEquals(false, ticketsRow1.equals(ticketsRow3));
        System.assertEquals(false, ticketsRow2.equals(ticketsRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketsRow ticketsRow1 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow2 = new OASTicketsRow();

        System.assertEquals(ticketsRow1.hashCode(), ticketsRow1.hashCode());
        System.assertEquals(ticketsRow2.hashCode(), ticketsRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketsRow ticketsRow1 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow2 = OASTicketsRow.getExample();
        OASTicketsRow ticketsRow3 = new OASTicketsRow();
        OASTicketsRow ticketsRow4 = new OASTicketsRow();

        System.assert(ticketsRow1.equals(ticketsRow2));
        System.assert(ticketsRow3.equals(ticketsRow4));
        System.assertEquals(ticketsRow1.hashCode(), ticketsRow2.hashCode());
        System.assertEquals(ticketsRow3.hashCode(), ticketsRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketsRow ticketsRow = new OASTicketsRow();
        Map<String, String> x-property-mappings = ticketsRow.getx-property-mappings();
        System.assertEquals('totalReplies', x-property-mappings.get('total_replies'));
        System.assertEquals('canClose', x-property-mappings.get('can_close'));
        System.assertEquals('statusText', x-property-mappings.get('status_text'));
    }
}
