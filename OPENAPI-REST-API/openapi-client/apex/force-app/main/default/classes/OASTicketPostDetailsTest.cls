@isTest
private class OASTicketPostDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketPostDetails ticketPostDetails1 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails2 = ticketPostDetails1;
        OASTicketPostDetails ticketPostDetails3 = new OASTicketPostDetails();
        OASTicketPostDetails ticketPostDetails4 = ticketPostDetails3;

        System.assert(ticketPostDetails1.equals(ticketPostDetails2));
        System.assert(ticketPostDetails2.equals(ticketPostDetails1));
        System.assert(ticketPostDetails1.equals(ticketPostDetails1));
        System.assert(ticketPostDetails3.equals(ticketPostDetails4));
        System.assert(ticketPostDetails4.equals(ticketPostDetails3));
        System.assert(ticketPostDetails3.equals(ticketPostDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketPostDetails ticketPostDetails1 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails2 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails3 = new OASTicketPostDetails();
        OASTicketPostDetails ticketPostDetails4 = new OASTicketPostDetails();

        System.assert(ticketPostDetails1.equals(ticketPostDetails2));
        System.assert(ticketPostDetails2.equals(ticketPostDetails1));
        System.assert(ticketPostDetails3.equals(ticketPostDetails4));
        System.assert(ticketPostDetails4.equals(ticketPostDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketPostDetails ticketPostDetails1 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails2 = new OASTicketPostDetails();

        System.assertEquals(false, ticketPostDetails1.equals('foo'));
        System.assertEquals(false, ticketPostDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketPostDetails ticketPostDetails1 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails2 = new OASTicketPostDetails();
        OASTicketPostDetails ticketPostDetails3;

        System.assertEquals(false, ticketPostDetails1.equals(ticketPostDetails3));
        System.assertEquals(false, ticketPostDetails2.equals(ticketPostDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketPostDetails ticketPostDetails1 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails2 = new OASTicketPostDetails();

        System.assertEquals(ticketPostDetails1.hashCode(), ticketPostDetails1.hashCode());
        System.assertEquals(ticketPostDetails2.hashCode(), ticketPostDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketPostDetails ticketPostDetails1 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails2 = OASTicketPostDetails.getExample();
        OASTicketPostDetails ticketPostDetails3 = new OASTicketPostDetails();
        OASTicketPostDetails ticketPostDetails4 = new OASTicketPostDetails();

        System.assert(ticketPostDetails1.equals(ticketPostDetails2));
        System.assert(ticketPostDetails3.equals(ticketPostDetails4));
        System.assertEquals(ticketPostDetails1.hashCode(), ticketPostDetails2.hashCode());
        System.assertEquals(ticketPostDetails3.hashCode(), ticketPostDetails4.hashCode());
    }
}
