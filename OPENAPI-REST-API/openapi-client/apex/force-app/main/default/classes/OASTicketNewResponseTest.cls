@isTest
private class OASTicketNewResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketNewResponse ticketNewResponse1 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse2 = ticketNewResponse1;
        OASTicketNewResponse ticketNewResponse3 = new OASTicketNewResponse();
        OASTicketNewResponse ticketNewResponse4 = ticketNewResponse3;

        System.assert(ticketNewResponse1.equals(ticketNewResponse2));
        System.assert(ticketNewResponse2.equals(ticketNewResponse1));
        System.assert(ticketNewResponse1.equals(ticketNewResponse1));
        System.assert(ticketNewResponse3.equals(ticketNewResponse4));
        System.assert(ticketNewResponse4.equals(ticketNewResponse3));
        System.assert(ticketNewResponse3.equals(ticketNewResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketNewResponse ticketNewResponse1 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse2 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse3 = new OASTicketNewResponse();
        OASTicketNewResponse ticketNewResponse4 = new OASTicketNewResponse();

        System.assert(ticketNewResponse1.equals(ticketNewResponse2));
        System.assert(ticketNewResponse2.equals(ticketNewResponse1));
        System.assert(ticketNewResponse3.equals(ticketNewResponse4));
        System.assert(ticketNewResponse4.equals(ticketNewResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketNewResponse ticketNewResponse1 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse2 = new OASTicketNewResponse();

        System.assertEquals(false, ticketNewResponse1.equals('foo'));
        System.assertEquals(false, ticketNewResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketNewResponse ticketNewResponse1 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse2 = new OASTicketNewResponse();
        OASTicketNewResponse ticketNewResponse3;

        System.assertEquals(false, ticketNewResponse1.equals(ticketNewResponse3));
        System.assertEquals(false, ticketNewResponse2.equals(ticketNewResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketNewResponse ticketNewResponse1 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse2 = new OASTicketNewResponse();

        System.assertEquals(ticketNewResponse1.hashCode(), ticketNewResponse1.hashCode());
        System.assertEquals(ticketNewResponse2.hashCode(), ticketNewResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketNewResponse ticketNewResponse1 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse2 = OASTicketNewResponse.getExample();
        OASTicketNewResponse ticketNewResponse3 = new OASTicketNewResponse();
        OASTicketNewResponse ticketNewResponse4 = new OASTicketNewResponse();

        System.assert(ticketNewResponse1.equals(ticketNewResponse2));
        System.assert(ticketNewResponse3.equals(ticketNewResponse4));
        System.assertEquals(ticketNewResponse1.hashCode(), ticketNewResponse2.hashCode());
        System.assertEquals(ticketNewResponse3.hashCode(), ticketNewResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketNewResponse ticketNewResponse = new OASTicketNewResponse();
        Map<String, String> x-property-mappings = ticketNewResponse.getx-property-mappings();
        System.assertEquals('ticketId', x-property-mappings.get('ticket_id'));
    }
}
