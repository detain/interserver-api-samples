@isTest
private class OASPostOauthCallbackRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASPostOauthCallbackRequest postOauthCallbackRequest1 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest2 = postOauthCallbackRequest1;
        OASPostOauthCallbackRequest postOauthCallbackRequest3 = new OASPostOauthCallbackRequest();
        OASPostOauthCallbackRequest postOauthCallbackRequest4 = postOauthCallbackRequest3;

        System.assert(postOauthCallbackRequest1.equals(postOauthCallbackRequest2));
        System.assert(postOauthCallbackRequest2.equals(postOauthCallbackRequest1));
        System.assert(postOauthCallbackRequest1.equals(postOauthCallbackRequest1));
        System.assert(postOauthCallbackRequest3.equals(postOauthCallbackRequest4));
        System.assert(postOauthCallbackRequest4.equals(postOauthCallbackRequest3));
        System.assert(postOauthCallbackRequest3.equals(postOauthCallbackRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPostOauthCallbackRequest postOauthCallbackRequest1 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest2 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest3 = new OASPostOauthCallbackRequest();
        OASPostOauthCallbackRequest postOauthCallbackRequest4 = new OASPostOauthCallbackRequest();

        System.assert(postOauthCallbackRequest1.equals(postOauthCallbackRequest2));
        System.assert(postOauthCallbackRequest2.equals(postOauthCallbackRequest1));
        System.assert(postOauthCallbackRequest3.equals(postOauthCallbackRequest4));
        System.assert(postOauthCallbackRequest4.equals(postOauthCallbackRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPostOauthCallbackRequest postOauthCallbackRequest1 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest2 = new OASPostOauthCallbackRequest();

        System.assertEquals(false, postOauthCallbackRequest1.equals('foo'));
        System.assertEquals(false, postOauthCallbackRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPostOauthCallbackRequest postOauthCallbackRequest1 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest2 = new OASPostOauthCallbackRequest();
        OASPostOauthCallbackRequest postOauthCallbackRequest3;

        System.assertEquals(false, postOauthCallbackRequest1.equals(postOauthCallbackRequest3));
        System.assertEquals(false, postOauthCallbackRequest2.equals(postOauthCallbackRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPostOauthCallbackRequest postOauthCallbackRequest1 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest2 = new OASPostOauthCallbackRequest();

        System.assertEquals(postOauthCallbackRequest1.hashCode(), postOauthCallbackRequest1.hashCode());
        System.assertEquals(postOauthCallbackRequest2.hashCode(), postOauthCallbackRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPostOauthCallbackRequest postOauthCallbackRequest1 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest2 = OASPostOauthCallbackRequest.getExample();
        OASPostOauthCallbackRequest postOauthCallbackRequest3 = new OASPostOauthCallbackRequest();
        OASPostOauthCallbackRequest postOauthCallbackRequest4 = new OASPostOauthCallbackRequest();

        System.assert(postOauthCallbackRequest1.equals(postOauthCallbackRequest2));
        System.assert(postOauthCallbackRequest3.equals(postOauthCallbackRequest4));
        System.assertEquals(postOauthCallbackRequest1.hashCode(), postOauthCallbackRequest2.hashCode());
        System.assertEquals(postOauthCallbackRequest3.hashCode(), postOauthCallbackRequest4.hashCode());
    }
}
