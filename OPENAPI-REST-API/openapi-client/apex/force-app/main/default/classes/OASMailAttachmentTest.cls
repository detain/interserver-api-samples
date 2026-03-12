@isTest
private class OASMailAttachmentTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailAttachment mailAttachment1 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment2 = mailAttachment1;
        OASMailAttachment mailAttachment3 = new OASMailAttachment();
        OASMailAttachment mailAttachment4 = mailAttachment3;

        System.assert(mailAttachment1.equals(mailAttachment2));
        System.assert(mailAttachment2.equals(mailAttachment1));
        System.assert(mailAttachment1.equals(mailAttachment1));
        System.assert(mailAttachment3.equals(mailAttachment4));
        System.assert(mailAttachment4.equals(mailAttachment3));
        System.assert(mailAttachment3.equals(mailAttachment3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailAttachment mailAttachment1 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment2 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment3 = new OASMailAttachment();
        OASMailAttachment mailAttachment4 = new OASMailAttachment();

        System.assert(mailAttachment1.equals(mailAttachment2));
        System.assert(mailAttachment2.equals(mailAttachment1));
        System.assert(mailAttachment3.equals(mailAttachment4));
        System.assert(mailAttachment4.equals(mailAttachment3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailAttachment mailAttachment1 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment2 = new OASMailAttachment();

        System.assertEquals(false, mailAttachment1.equals('foo'));
        System.assertEquals(false, mailAttachment2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailAttachment mailAttachment1 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment2 = new OASMailAttachment();
        OASMailAttachment mailAttachment3;

        System.assertEquals(false, mailAttachment1.equals(mailAttachment3));
        System.assertEquals(false, mailAttachment2.equals(mailAttachment3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailAttachment mailAttachment1 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment2 = new OASMailAttachment();

        System.assertEquals(mailAttachment1.hashCode(), mailAttachment1.hashCode());
        System.assertEquals(mailAttachment2.hashCode(), mailAttachment2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailAttachment mailAttachment1 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment2 = OASMailAttachment.getExample();
        OASMailAttachment mailAttachment3 = new OASMailAttachment();
        OASMailAttachment mailAttachment4 = new OASMailAttachment();

        System.assert(mailAttachment1.equals(mailAttachment2));
        System.assert(mailAttachment3.equals(mailAttachment4));
        System.assertEquals(mailAttachment1.hashCode(), mailAttachment2.hashCode());
        System.assertEquals(mailAttachment3.hashCode(), mailAttachment4.hashCode());
    }
}
