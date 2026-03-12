@isTest
private class OASTicketNewTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketNew ticketNew1 = OASTicketNew.getExample();
        OASTicketNew ticketNew2 = ticketNew1;
        OASTicketNew ticketNew3 = new OASTicketNew();
        OASTicketNew ticketNew4 = ticketNew3;

        System.assert(ticketNew1.equals(ticketNew2));
        System.assert(ticketNew2.equals(ticketNew1));
        System.assert(ticketNew1.equals(ticketNew1));
        System.assert(ticketNew3.equals(ticketNew4));
        System.assert(ticketNew4.equals(ticketNew3));
        System.assert(ticketNew3.equals(ticketNew3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketNew ticketNew1 = OASTicketNew.getExample();
        OASTicketNew ticketNew2 = OASTicketNew.getExample();
        OASTicketNew ticketNew3 = new OASTicketNew();
        OASTicketNew ticketNew4 = new OASTicketNew();

        System.assert(ticketNew1.equals(ticketNew2));
        System.assert(ticketNew2.equals(ticketNew1));
        System.assert(ticketNew3.equals(ticketNew4));
        System.assert(ticketNew4.equals(ticketNew3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketNew ticketNew1 = OASTicketNew.getExample();
        OASTicketNew ticketNew2 = new OASTicketNew();

        System.assertEquals(false, ticketNew1.equals('foo'));
        System.assertEquals(false, ticketNew2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketNew ticketNew1 = OASTicketNew.getExample();
        OASTicketNew ticketNew2 = new OASTicketNew();
        OASTicketNew ticketNew3;

        System.assertEquals(false, ticketNew1.equals(ticketNew3));
        System.assertEquals(false, ticketNew2.equals(ticketNew3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketNew ticketNew1 = OASTicketNew.getExample();
        OASTicketNew ticketNew2 = new OASTicketNew();

        System.assertEquals(ticketNew1.hashCode(), ticketNew1.hashCode());
        System.assertEquals(ticketNew2.hashCode(), ticketNew2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketNew ticketNew1 = OASTicketNew.getExample();
        OASTicketNew ticketNew2 = OASTicketNew.getExample();
        OASTicketNew ticketNew3 = new OASTicketNew();
        OASTicketNew ticketNew4 = new OASTicketNew();

        System.assert(ticketNew1.equals(ticketNew2));
        System.assert(ticketNew3.equals(ticketNew4));
        System.assertEquals(ticketNew1.hashCode(), ticketNew2.hashCode());
        System.assertEquals(ticketNew3.hashCode(), ticketNew4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketNew ticketNew = new OASTicketNew();
        Map<String, String> x-property-mappings = ticketNew.getx-property-mappings();
        System.assertEquals('serviceId', x-property-mappings.get('service_id'));
        System.assertEquals('serviceModule', x-property-mappings.get('service_module'));
    }
}
