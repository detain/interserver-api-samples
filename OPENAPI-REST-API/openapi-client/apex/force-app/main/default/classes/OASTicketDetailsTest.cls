@isTest
private class OASTicketDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketDetails ticketDetails1 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails2 = ticketDetails1;
        OASTicketDetails ticketDetails3 = new OASTicketDetails();
        OASTicketDetails ticketDetails4 = ticketDetails3;

        System.assert(ticketDetails1.equals(ticketDetails2));
        System.assert(ticketDetails2.equals(ticketDetails1));
        System.assert(ticketDetails1.equals(ticketDetails1));
        System.assert(ticketDetails3.equals(ticketDetails4));
        System.assert(ticketDetails4.equals(ticketDetails3));
        System.assert(ticketDetails3.equals(ticketDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketDetails ticketDetails1 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails2 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails3 = new OASTicketDetails();
        OASTicketDetails ticketDetails4 = new OASTicketDetails();

        System.assert(ticketDetails1.equals(ticketDetails2));
        System.assert(ticketDetails2.equals(ticketDetails1));
        System.assert(ticketDetails3.equals(ticketDetails4));
        System.assert(ticketDetails4.equals(ticketDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketDetails ticketDetails1 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails2 = new OASTicketDetails();

        System.assertEquals(false, ticketDetails1.equals('foo'));
        System.assertEquals(false, ticketDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketDetails ticketDetails1 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails2 = new OASTicketDetails();
        OASTicketDetails ticketDetails3;

        System.assertEquals(false, ticketDetails1.equals(ticketDetails3));
        System.assertEquals(false, ticketDetails2.equals(ticketDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketDetails ticketDetails1 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails2 = new OASTicketDetails();

        System.assertEquals(ticketDetails1.hashCode(), ticketDetails1.hashCode());
        System.assertEquals(ticketDetails2.hashCode(), ticketDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketDetails ticketDetails1 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails2 = OASTicketDetails.getExample();
        OASTicketDetails ticketDetails3 = new OASTicketDetails();
        OASTicketDetails ticketDetails4 = new OASTicketDetails();

        System.assert(ticketDetails1.equals(ticketDetails2));
        System.assert(ticketDetails3.equals(ticketDetails4));
        System.assertEquals(ticketDetails1.hashCode(), ticketDetails2.hashCode());
        System.assertEquals(ticketDetails3.hashCode(), ticketDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketDetails ticketDetails = new OASTicketDetails();
        Map<String, String> x-property-mappings = ticketDetails.getx-property-mappings();
        System.assertEquals('createdOn', x-property-mappings.get('created_on'));
        System.assertEquals('updatedOn', x-property-mappings.get('updated_on'));
    }
}
