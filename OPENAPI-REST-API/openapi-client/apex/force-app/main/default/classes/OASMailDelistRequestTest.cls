@isTest
private class OASMailDelistRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailDelistRequest mailDelistRequest1 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest2 = mailDelistRequest1;
        OASMailDelistRequest mailDelistRequest3 = new OASMailDelistRequest();
        OASMailDelistRequest mailDelistRequest4 = mailDelistRequest3;

        System.assert(mailDelistRequest1.equals(mailDelistRequest2));
        System.assert(mailDelistRequest2.equals(mailDelistRequest1));
        System.assert(mailDelistRequest1.equals(mailDelistRequest1));
        System.assert(mailDelistRequest3.equals(mailDelistRequest4));
        System.assert(mailDelistRequest4.equals(mailDelistRequest3));
        System.assert(mailDelistRequest3.equals(mailDelistRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailDelistRequest mailDelistRequest1 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest2 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest3 = new OASMailDelistRequest();
        OASMailDelistRequest mailDelistRequest4 = new OASMailDelistRequest();

        System.assert(mailDelistRequest1.equals(mailDelistRequest2));
        System.assert(mailDelistRequest2.equals(mailDelistRequest1));
        System.assert(mailDelistRequest3.equals(mailDelistRequest4));
        System.assert(mailDelistRequest4.equals(mailDelistRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailDelistRequest mailDelistRequest1 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest2 = new OASMailDelistRequest();

        System.assertEquals(false, mailDelistRequest1.equals('foo'));
        System.assertEquals(false, mailDelistRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailDelistRequest mailDelistRequest1 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest2 = new OASMailDelistRequest();
        OASMailDelistRequest mailDelistRequest3;

        System.assertEquals(false, mailDelistRequest1.equals(mailDelistRequest3));
        System.assertEquals(false, mailDelistRequest2.equals(mailDelistRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailDelistRequest mailDelistRequest1 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest2 = new OASMailDelistRequest();

        System.assertEquals(mailDelistRequest1.hashCode(), mailDelistRequest1.hashCode());
        System.assertEquals(mailDelistRequest2.hashCode(), mailDelistRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailDelistRequest mailDelistRequest1 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest2 = OASMailDelistRequest.getExample();
        OASMailDelistRequest mailDelistRequest3 = new OASMailDelistRequest();
        OASMailDelistRequest mailDelistRequest4 = new OASMailDelistRequest();

        System.assert(mailDelistRequest1.equals(mailDelistRequest2));
        System.assert(mailDelistRequest3.equals(mailDelistRequest4));
        System.assertEquals(mailDelistRequest1.hashCode(), mailDelistRequest2.hashCode());
        System.assertEquals(mailDelistRequest3.hashCode(), mailDelistRequest4.hashCode());
    }
}
