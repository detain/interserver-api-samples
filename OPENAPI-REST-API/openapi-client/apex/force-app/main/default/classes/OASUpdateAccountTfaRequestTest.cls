@isTest
private class OASUpdateAccountTfaRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest1 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest2 = updateAccountTfaRequest1;
        OASUpdateAccountTfaRequest updateAccountTfaRequest3 = new OASUpdateAccountTfaRequest();
        OASUpdateAccountTfaRequest updateAccountTfaRequest4 = updateAccountTfaRequest3;

        System.assert(updateAccountTfaRequest1.equals(updateAccountTfaRequest2));
        System.assert(updateAccountTfaRequest2.equals(updateAccountTfaRequest1));
        System.assert(updateAccountTfaRequest1.equals(updateAccountTfaRequest1));
        System.assert(updateAccountTfaRequest3.equals(updateAccountTfaRequest4));
        System.assert(updateAccountTfaRequest4.equals(updateAccountTfaRequest3));
        System.assert(updateAccountTfaRequest3.equals(updateAccountTfaRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest1 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest2 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest3 = new OASUpdateAccountTfaRequest();
        OASUpdateAccountTfaRequest updateAccountTfaRequest4 = new OASUpdateAccountTfaRequest();

        System.assert(updateAccountTfaRequest1.equals(updateAccountTfaRequest2));
        System.assert(updateAccountTfaRequest2.equals(updateAccountTfaRequest1));
        System.assert(updateAccountTfaRequest3.equals(updateAccountTfaRequest4));
        System.assert(updateAccountTfaRequest4.equals(updateAccountTfaRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest1 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest2 = new OASUpdateAccountTfaRequest();

        System.assertEquals(false, updateAccountTfaRequest1.equals('foo'));
        System.assertEquals(false, updateAccountTfaRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest1 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest2 = new OASUpdateAccountTfaRequest();
        OASUpdateAccountTfaRequest updateAccountTfaRequest3;

        System.assertEquals(false, updateAccountTfaRequest1.equals(updateAccountTfaRequest3));
        System.assertEquals(false, updateAccountTfaRequest2.equals(updateAccountTfaRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest1 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest2 = new OASUpdateAccountTfaRequest();

        System.assertEquals(updateAccountTfaRequest1.hashCode(), updateAccountTfaRequest1.hashCode());
        System.assertEquals(updateAccountTfaRequest2.hashCode(), updateAccountTfaRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest1 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest2 = OASUpdateAccountTfaRequest.getExample();
        OASUpdateAccountTfaRequest updateAccountTfaRequest3 = new OASUpdateAccountTfaRequest();
        OASUpdateAccountTfaRequest updateAccountTfaRequest4 = new OASUpdateAccountTfaRequest();

        System.assert(updateAccountTfaRequest1.equals(updateAccountTfaRequest2));
        System.assert(updateAccountTfaRequest3.equals(updateAccountTfaRequest4));
        System.assertEquals(updateAccountTfaRequest1.hashCode(), updateAccountTfaRequest2.hashCode());
        System.assertEquals(updateAccountTfaRequest3.hashCode(), updateAccountTfaRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASUpdateAccountTfaRequest updateAccountTfaRequest = new OASUpdateAccountTfaRequest();
        Map<String, String> x-property-mappings = updateAccountTfaRequest.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('2fa_google_code'));
    }
}
