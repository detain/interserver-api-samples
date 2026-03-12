@isTest
private class OASUrlRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASUrlRequest urlRequest1 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest2 = urlRequest1;
        OASUrlRequest urlRequest3 = new OASUrlRequest();
        OASUrlRequest urlRequest4 = urlRequest3;

        System.assert(urlRequest1.equals(urlRequest2));
        System.assert(urlRequest2.equals(urlRequest1));
        System.assert(urlRequest1.equals(urlRequest1));
        System.assert(urlRequest3.equals(urlRequest4));
        System.assert(urlRequest4.equals(urlRequest3));
        System.assert(urlRequest3.equals(urlRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASUrlRequest urlRequest1 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest2 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest3 = new OASUrlRequest();
        OASUrlRequest urlRequest4 = new OASUrlRequest();

        System.assert(urlRequest1.equals(urlRequest2));
        System.assert(urlRequest2.equals(urlRequest1));
        System.assert(urlRequest3.equals(urlRequest4));
        System.assert(urlRequest4.equals(urlRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASUrlRequest urlRequest1 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest2 = new OASUrlRequest();

        System.assertEquals(false, urlRequest1.equals('foo'));
        System.assertEquals(false, urlRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASUrlRequest urlRequest1 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest2 = new OASUrlRequest();
        OASUrlRequest urlRequest3;

        System.assertEquals(false, urlRequest1.equals(urlRequest3));
        System.assertEquals(false, urlRequest2.equals(urlRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASUrlRequest urlRequest1 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest2 = new OASUrlRequest();

        System.assertEquals(urlRequest1.hashCode(), urlRequest1.hashCode());
        System.assertEquals(urlRequest2.hashCode(), urlRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASUrlRequest urlRequest1 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest2 = OASUrlRequest.getExample();
        OASUrlRequest urlRequest3 = new OASUrlRequest();
        OASUrlRequest urlRequest4 = new OASUrlRequest();

        System.assert(urlRequest1.equals(urlRequest2));
        System.assert(urlRequest3.equals(urlRequest4));
        System.assertEquals(urlRequest1.hashCode(), urlRequest2.hashCode());
        System.assertEquals(urlRequest3.hashCode(), urlRequest4.hashCode());
    }
}
