@isTest
private class OASTicketPostDetailsInnerTest {
    @isTest
    private static void equalsSameInstance() {
        OASTicketPostDetailsInner ticketPostDetailsInner1 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner2 = ticketPostDetailsInner1;
        OASTicketPostDetailsInner ticketPostDetailsInner3 = new OASTicketPostDetailsInner();
        OASTicketPostDetailsInner ticketPostDetailsInner4 = ticketPostDetailsInner3;

        System.assert(ticketPostDetailsInner1.equals(ticketPostDetailsInner2));
        System.assert(ticketPostDetailsInner2.equals(ticketPostDetailsInner1));
        System.assert(ticketPostDetailsInner1.equals(ticketPostDetailsInner1));
        System.assert(ticketPostDetailsInner3.equals(ticketPostDetailsInner4));
        System.assert(ticketPostDetailsInner4.equals(ticketPostDetailsInner3));
        System.assert(ticketPostDetailsInner3.equals(ticketPostDetailsInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASTicketPostDetailsInner ticketPostDetailsInner1 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner2 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner3 = new OASTicketPostDetailsInner();
        OASTicketPostDetailsInner ticketPostDetailsInner4 = new OASTicketPostDetailsInner();

        System.assert(ticketPostDetailsInner1.equals(ticketPostDetailsInner2));
        System.assert(ticketPostDetailsInner2.equals(ticketPostDetailsInner1));
        System.assert(ticketPostDetailsInner3.equals(ticketPostDetailsInner4));
        System.assert(ticketPostDetailsInner4.equals(ticketPostDetailsInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASTicketPostDetailsInner ticketPostDetailsInner1 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner2 = new OASTicketPostDetailsInner();

        System.assertEquals(false, ticketPostDetailsInner1.equals('foo'));
        System.assertEquals(false, ticketPostDetailsInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASTicketPostDetailsInner ticketPostDetailsInner1 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner2 = new OASTicketPostDetailsInner();
        OASTicketPostDetailsInner ticketPostDetailsInner3;

        System.assertEquals(false, ticketPostDetailsInner1.equals(ticketPostDetailsInner3));
        System.assertEquals(false, ticketPostDetailsInner2.equals(ticketPostDetailsInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASTicketPostDetailsInner ticketPostDetailsInner1 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner2 = new OASTicketPostDetailsInner();

        System.assertEquals(ticketPostDetailsInner1.hashCode(), ticketPostDetailsInner1.hashCode());
        System.assertEquals(ticketPostDetailsInner2.hashCode(), ticketPostDetailsInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASTicketPostDetailsInner ticketPostDetailsInner1 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner2 = OASTicketPostDetailsInner.getExample();
        OASTicketPostDetailsInner ticketPostDetailsInner3 = new OASTicketPostDetailsInner();
        OASTicketPostDetailsInner ticketPostDetailsInner4 = new OASTicketPostDetailsInner();

        System.assert(ticketPostDetailsInner1.equals(ticketPostDetailsInner2));
        System.assert(ticketPostDetailsInner3.equals(ticketPostDetailsInner4));
        System.assertEquals(ticketPostDetailsInner1.hashCode(), ticketPostDetailsInner2.hashCode());
        System.assertEquals(ticketPostDetailsInner3.hashCode(), ticketPostDetailsInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASTicketPostDetailsInner ticketPostDetailsInner = new OASTicketPostDetailsInner();
        Map<String, String> x-property-mappings = ticketPostDetailsInner.getx-property-mappings();
        System.assertEquals('postId', x-property-mappings.get('post_id'));
        System.assertEquals('r_date', x-property-mappings.get('date'));
        System.assertEquals('creatorEmail', x-property-mappings.get('creator_email'));
        System.assertEquals('creatorName', x-property-mappings.get('creator_name'));
        System.assertEquals('attachmentDownload', x-property-mappings.get('attachment_download'));
    }
}
