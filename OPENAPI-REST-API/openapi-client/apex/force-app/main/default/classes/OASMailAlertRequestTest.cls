@isTest
private class OASMailAlertRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailAlertRequest mailAlertRequest1 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest2 = mailAlertRequest1;
        OASMailAlertRequest mailAlertRequest3 = new OASMailAlertRequest();
        OASMailAlertRequest mailAlertRequest4 = mailAlertRequest3;

        System.assert(mailAlertRequest1.equals(mailAlertRequest2));
        System.assert(mailAlertRequest2.equals(mailAlertRequest1));
        System.assert(mailAlertRequest1.equals(mailAlertRequest1));
        System.assert(mailAlertRequest3.equals(mailAlertRequest4));
        System.assert(mailAlertRequest4.equals(mailAlertRequest3));
        System.assert(mailAlertRequest3.equals(mailAlertRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailAlertRequest mailAlertRequest1 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest2 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest3 = new OASMailAlertRequest();
        OASMailAlertRequest mailAlertRequest4 = new OASMailAlertRequest();

        System.assert(mailAlertRequest1.equals(mailAlertRequest2));
        System.assert(mailAlertRequest2.equals(mailAlertRequest1));
        System.assert(mailAlertRequest3.equals(mailAlertRequest4));
        System.assert(mailAlertRequest4.equals(mailAlertRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailAlertRequest mailAlertRequest1 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest2 = new OASMailAlertRequest();

        System.assertEquals(false, mailAlertRequest1.equals('foo'));
        System.assertEquals(false, mailAlertRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailAlertRequest mailAlertRequest1 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest2 = new OASMailAlertRequest();
        OASMailAlertRequest mailAlertRequest3;

        System.assertEquals(false, mailAlertRequest1.equals(mailAlertRequest3));
        System.assertEquals(false, mailAlertRequest2.equals(mailAlertRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailAlertRequest mailAlertRequest1 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest2 = new OASMailAlertRequest();

        System.assertEquals(mailAlertRequest1.hashCode(), mailAlertRequest1.hashCode());
        System.assertEquals(mailAlertRequest2.hashCode(), mailAlertRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailAlertRequest mailAlertRequest1 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest2 = OASMailAlertRequest.getExample();
        OASMailAlertRequest mailAlertRequest3 = new OASMailAlertRequest();
        OASMailAlertRequest mailAlertRequest4 = new OASMailAlertRequest();

        System.assert(mailAlertRequest1.equals(mailAlertRequest2));
        System.assert(mailAlertRequest3.equals(mailAlertRequest4));
        System.assertEquals(mailAlertRequest1.hashCode(), mailAlertRequest2.hashCode());
        System.assertEquals(mailAlertRequest3.hashCode(), mailAlertRequest4.hashCode());
    }
}
