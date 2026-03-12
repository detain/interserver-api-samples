@isTest
private class OASReplyTicketResponseSchemaTest {
    @isTest
    private static void equalsSameInstance() {
        OASReplyTicketResponseSchema replyTicketResponseSchema1 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema2 = replyTicketResponseSchema1;
        OASReplyTicketResponseSchema replyTicketResponseSchema3 = new OASReplyTicketResponseSchema();
        OASReplyTicketResponseSchema replyTicketResponseSchema4 = replyTicketResponseSchema3;

        System.assert(replyTicketResponseSchema1.equals(replyTicketResponseSchema2));
        System.assert(replyTicketResponseSchema2.equals(replyTicketResponseSchema1));
        System.assert(replyTicketResponseSchema1.equals(replyTicketResponseSchema1));
        System.assert(replyTicketResponseSchema3.equals(replyTicketResponseSchema4));
        System.assert(replyTicketResponseSchema4.equals(replyTicketResponseSchema3));
        System.assert(replyTicketResponseSchema3.equals(replyTicketResponseSchema3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASReplyTicketResponseSchema replyTicketResponseSchema1 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema2 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema3 = new OASReplyTicketResponseSchema();
        OASReplyTicketResponseSchema replyTicketResponseSchema4 = new OASReplyTicketResponseSchema();

        System.assert(replyTicketResponseSchema1.equals(replyTicketResponseSchema2));
        System.assert(replyTicketResponseSchema2.equals(replyTicketResponseSchema1));
        System.assert(replyTicketResponseSchema3.equals(replyTicketResponseSchema4));
        System.assert(replyTicketResponseSchema4.equals(replyTicketResponseSchema3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASReplyTicketResponseSchema replyTicketResponseSchema1 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema2 = new OASReplyTicketResponseSchema();

        System.assertEquals(false, replyTicketResponseSchema1.equals('foo'));
        System.assertEquals(false, replyTicketResponseSchema2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASReplyTicketResponseSchema replyTicketResponseSchema1 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema2 = new OASReplyTicketResponseSchema();
        OASReplyTicketResponseSchema replyTicketResponseSchema3;

        System.assertEquals(false, replyTicketResponseSchema1.equals(replyTicketResponseSchema3));
        System.assertEquals(false, replyTicketResponseSchema2.equals(replyTicketResponseSchema3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASReplyTicketResponseSchema replyTicketResponseSchema1 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema2 = new OASReplyTicketResponseSchema();

        System.assertEquals(replyTicketResponseSchema1.hashCode(), replyTicketResponseSchema1.hashCode());
        System.assertEquals(replyTicketResponseSchema2.hashCode(), replyTicketResponseSchema2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASReplyTicketResponseSchema replyTicketResponseSchema1 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema2 = OASReplyTicketResponseSchema.getExample();
        OASReplyTicketResponseSchema replyTicketResponseSchema3 = new OASReplyTicketResponseSchema();
        OASReplyTicketResponseSchema replyTicketResponseSchema4 = new OASReplyTicketResponseSchema();

        System.assert(replyTicketResponseSchema1.equals(replyTicketResponseSchema2));
        System.assert(replyTicketResponseSchema3.equals(replyTicketResponseSchema4));
        System.assertEquals(replyTicketResponseSchema1.hashCode(), replyTicketResponseSchema2.hashCode());
        System.assertEquals(replyTicketResponseSchema3.hashCode(), replyTicketResponseSchema4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASReplyTicketResponseSchema replyTicketResponseSchema = new OASReplyTicketResponseSchema();
        Map<String, String> x-property-mappings = replyTicketResponseSchema.getx-property-mappings();
        System.assertEquals('postId', x-property-mappings.get('post_id'));
    }
}
