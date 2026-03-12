@isTest
private class OASTicketsTest {
    @isTest
    private static void equalsSameInstance() {
        OASTickets tickets1 = OASTickets.getExample();
        OASTickets tickets2 = tickets1;
        OASTickets tickets3 = new OASTickets();
        OASTickets tickets4 = tickets3;

        System.assert(tickets1.equals(tickets2));
        System.assert(tickets2.equals(tickets1));
        System.assert(tickets1.equals(tickets1));
        System.assert(tickets3.equals(tickets4));
        System.assert(tickets4.equals(tickets3));
        System.assert(tickets3.equals(tickets3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTickets tickets1 = OASTickets.getExample();
        OASTickets tickets2 = OASTickets.getExample();
        OASTickets tickets3 = new OASTickets();
        OASTickets tickets4 = new OASTickets();

        System.assert(tickets1.equals(tickets2));
        System.assert(tickets2.equals(tickets1));
        System.assert(tickets3.equals(tickets4));
        System.assert(tickets4.equals(tickets3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTickets tickets1 = OASTickets.getExample();
        OASTickets tickets2 = new OASTickets();

        System.assertEquals(false, tickets1.equals('foo'));
        System.assertEquals(false, tickets2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTickets tickets1 = OASTickets.getExample();
        OASTickets tickets2 = new OASTickets();
        OASTickets tickets3;

        System.assertEquals(false, tickets1.equals(tickets3));
        System.assertEquals(false, tickets2.equals(tickets3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTickets tickets1 = OASTickets.getExample();
        OASTickets tickets2 = new OASTickets();

        System.assertEquals(tickets1.hashCode(), tickets1.hashCode());
        System.assertEquals(tickets2.hashCode(), tickets2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTickets tickets1 = OASTickets.getExample();
        OASTickets tickets2 = OASTickets.getExample();
        OASTickets tickets3 = new OASTickets();
        OASTickets tickets4 = new OASTickets();

        System.assert(tickets1.equals(tickets2));
        System.assert(tickets3.equals(tickets4));
        System.assertEquals(tickets1.hashCode(), tickets2.hashCode());
        System.assertEquals(tickets3.hashCode(), tickets4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTickets tickets = new OASTickets();
        Map<String, String> x-property-mappings = tickets.getx-property-mappings();
        System.assertEquals('r_limit', x-property-mappings.get('limit'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASTickets tickets = new OASTickets();
        System.assertEquals(new List<OASTicketsRow>(), tickets.tickets);
        System.assertEquals(null, tickets.ima);
        System.assertEquals(null, tickets.custid);
        System.assertEquals(null, tickets.view);
        System.assertEquals(null, tickets.currentPage);
        System.assertEquals(null, tickets.r_limit);
        System.assertEquals(null, tickets.sortcol);
        System.assertEquals(null, tickets.sortdir);
        System.assertEquals(null, tickets.rowsOffset);
        System.assertEquals(null, tickets.pages);
        System.assertEquals(null, tickets.rowsTotal);
        System.assertEquals(null, tickets.inboxCount);
        System.assertEquals(null, tickets.countArray);
        System.assertEquals(null, tickets.viewText);
    }
}
