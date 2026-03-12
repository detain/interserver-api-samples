@isTest
private class OASReplyTicketRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASReplyTicketRequest replyTicketRequest1 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest2 = replyTicketRequest1;
        OASReplyTicketRequest replyTicketRequest3 = new OASReplyTicketRequest();
        OASReplyTicketRequest replyTicketRequest4 = replyTicketRequest3;

        System.assert(replyTicketRequest1.equals(replyTicketRequest2));
        System.assert(replyTicketRequest2.equals(replyTicketRequest1));
        System.assert(replyTicketRequest1.equals(replyTicketRequest1));
        System.assert(replyTicketRequest3.equals(replyTicketRequest4));
        System.assert(replyTicketRequest4.equals(replyTicketRequest3));
        System.assert(replyTicketRequest3.equals(replyTicketRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASReplyTicketRequest replyTicketRequest1 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest2 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest3 = new OASReplyTicketRequest();
        OASReplyTicketRequest replyTicketRequest4 = new OASReplyTicketRequest();

        System.assert(replyTicketRequest1.equals(replyTicketRequest2));
        System.assert(replyTicketRequest2.equals(replyTicketRequest1));
        System.assert(replyTicketRequest3.equals(replyTicketRequest4));
        System.assert(replyTicketRequest4.equals(replyTicketRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASReplyTicketRequest replyTicketRequest1 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest2 = new OASReplyTicketRequest();

        System.assertEquals(false, replyTicketRequest1.equals('foo'));
        System.assertEquals(false, replyTicketRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASReplyTicketRequest replyTicketRequest1 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest2 = new OASReplyTicketRequest();
        OASReplyTicketRequest replyTicketRequest3;

        System.assertEquals(false, replyTicketRequest1.equals(replyTicketRequest3));
        System.assertEquals(false, replyTicketRequest2.equals(replyTicketRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASReplyTicketRequest replyTicketRequest1 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest2 = new OASReplyTicketRequest();

        System.assertEquals(replyTicketRequest1.hashCode(), replyTicketRequest1.hashCode());
        System.assertEquals(replyTicketRequest2.hashCode(), replyTicketRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASReplyTicketRequest replyTicketRequest1 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest2 = OASReplyTicketRequest.getExample();
        OASReplyTicketRequest replyTicketRequest3 = new OASReplyTicketRequest();
        OASReplyTicketRequest replyTicketRequest4 = new OASReplyTicketRequest();

        System.assert(replyTicketRequest1.equals(replyTicketRequest2));
        System.assert(replyTicketRequest3.equals(replyTicketRequest4));
        System.assertEquals(replyTicketRequest1.hashCode(), replyTicketRequest2.hashCode());
        System.assertEquals(replyTicketRequest3.hashCode(), replyTicketRequest4.hashCode());
    }
}
