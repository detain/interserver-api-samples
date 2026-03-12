@isTest
private class OASMailAlertUpdateRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest1 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest2 = mailAlertUpdateRequest1;
        OASMailAlertUpdateRequest mailAlertUpdateRequest3 = new OASMailAlertUpdateRequest();
        OASMailAlertUpdateRequest mailAlertUpdateRequest4 = mailAlertUpdateRequest3;

        System.assert(mailAlertUpdateRequest1.equals(mailAlertUpdateRequest2));
        System.assert(mailAlertUpdateRequest2.equals(mailAlertUpdateRequest1));
        System.assert(mailAlertUpdateRequest1.equals(mailAlertUpdateRequest1));
        System.assert(mailAlertUpdateRequest3.equals(mailAlertUpdateRequest4));
        System.assert(mailAlertUpdateRequest4.equals(mailAlertUpdateRequest3));
        System.assert(mailAlertUpdateRequest3.equals(mailAlertUpdateRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest1 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest2 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest3 = new OASMailAlertUpdateRequest();
        OASMailAlertUpdateRequest mailAlertUpdateRequest4 = new OASMailAlertUpdateRequest();

        System.assert(mailAlertUpdateRequest1.equals(mailAlertUpdateRequest2));
        System.assert(mailAlertUpdateRequest2.equals(mailAlertUpdateRequest1));
        System.assert(mailAlertUpdateRequest3.equals(mailAlertUpdateRequest4));
        System.assert(mailAlertUpdateRequest4.equals(mailAlertUpdateRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest1 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest2 = new OASMailAlertUpdateRequest();

        System.assertEquals(false, mailAlertUpdateRequest1.equals('foo'));
        System.assertEquals(false, mailAlertUpdateRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest1 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest2 = new OASMailAlertUpdateRequest();
        OASMailAlertUpdateRequest mailAlertUpdateRequest3;

        System.assertEquals(false, mailAlertUpdateRequest1.equals(mailAlertUpdateRequest3));
        System.assertEquals(false, mailAlertUpdateRequest2.equals(mailAlertUpdateRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest1 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest2 = new OASMailAlertUpdateRequest();

        System.assertEquals(mailAlertUpdateRequest1.hashCode(), mailAlertUpdateRequest1.hashCode());
        System.assertEquals(mailAlertUpdateRequest2.hashCode(), mailAlertUpdateRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest1 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest2 = OASMailAlertUpdateRequest.getExample();
        OASMailAlertUpdateRequest mailAlertUpdateRequest3 = new OASMailAlertUpdateRequest();
        OASMailAlertUpdateRequest mailAlertUpdateRequest4 = new OASMailAlertUpdateRequest();

        System.assert(mailAlertUpdateRequest1.equals(mailAlertUpdateRequest2));
        System.assert(mailAlertUpdateRequest3.equals(mailAlertUpdateRequest4));
        System.assertEquals(mailAlertUpdateRequest1.hashCode(), mailAlertUpdateRequest2.hashCode());
        System.assertEquals(mailAlertUpdateRequest3.hashCode(), mailAlertUpdateRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailAlertUpdateRequest mailAlertUpdateRequest = new OASMailAlertUpdateRequest();
        Map<String, String> x-property-mappings = mailAlertUpdateRequest.getx-property-mappings();
        System.assertEquals('alertId', x-property-mappings.get('alert_id'));
    }
}
