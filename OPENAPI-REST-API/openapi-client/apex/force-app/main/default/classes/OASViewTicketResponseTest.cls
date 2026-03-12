@isTest
private class OASViewTicketResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASViewTicketResponse viewTicketResponse1 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse2 = viewTicketResponse1;
        OASViewTicketResponse viewTicketResponse3 = new OASViewTicketResponse();
        OASViewTicketResponse viewTicketResponse4 = viewTicketResponse3;

        System.assert(viewTicketResponse1.equals(viewTicketResponse2));
        System.assert(viewTicketResponse2.equals(viewTicketResponse1));
        System.assert(viewTicketResponse1.equals(viewTicketResponse1));
        System.assert(viewTicketResponse3.equals(viewTicketResponse4));
        System.assert(viewTicketResponse4.equals(viewTicketResponse3));
        System.assert(viewTicketResponse3.equals(viewTicketResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASViewTicketResponse viewTicketResponse1 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse2 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse3 = new OASViewTicketResponse();
        OASViewTicketResponse viewTicketResponse4 = new OASViewTicketResponse();

        System.assert(viewTicketResponse1.equals(viewTicketResponse2));
        System.assert(viewTicketResponse2.equals(viewTicketResponse1));
        System.assert(viewTicketResponse3.equals(viewTicketResponse4));
        System.assert(viewTicketResponse4.equals(viewTicketResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASViewTicketResponse viewTicketResponse1 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse2 = new OASViewTicketResponse();

        System.assertEquals(false, viewTicketResponse1.equals('foo'));
        System.assertEquals(false, viewTicketResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASViewTicketResponse viewTicketResponse1 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse2 = new OASViewTicketResponse();
        OASViewTicketResponse viewTicketResponse3;

        System.assertEquals(false, viewTicketResponse1.equals(viewTicketResponse3));
        System.assertEquals(false, viewTicketResponse2.equals(viewTicketResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASViewTicketResponse viewTicketResponse1 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse2 = new OASViewTicketResponse();

        System.assertEquals(viewTicketResponse1.hashCode(), viewTicketResponse1.hashCode());
        System.assertEquals(viewTicketResponse2.hashCode(), viewTicketResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASViewTicketResponse viewTicketResponse1 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse2 = OASViewTicketResponse.getExample();
        OASViewTicketResponse viewTicketResponse3 = new OASViewTicketResponse();
        OASViewTicketResponse viewTicketResponse4 = new OASViewTicketResponse();

        System.assert(viewTicketResponse1.equals(viewTicketResponse2));
        System.assert(viewTicketResponse3.equals(viewTicketResponse4));
        System.assertEquals(viewTicketResponse1.hashCode(), viewTicketResponse2.hashCode());
        System.assertEquals(viewTicketResponse3.hashCode(), viewTicketResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASViewTicketResponse viewTicketResponse = new OASViewTicketResponse();
        Map<String, String> x-property-mappings = viewTicketResponse.getx-property-mappings();
        System.assertEquals('ticketCustomFields', x-property-mappings.get('ticket_custom_fields'));
        System.assertEquals('ticketPosts', x-property-mappings.get('ticket_posts'));
    }
}
