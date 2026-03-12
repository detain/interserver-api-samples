@isTest
private class OASDomainNameserverPostRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainNameserverPostRequest domainNameserverPostRequest1 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest2 = domainNameserverPostRequest1;
        OASDomainNameserverPostRequest domainNameserverPostRequest3 = new OASDomainNameserverPostRequest();
        OASDomainNameserverPostRequest domainNameserverPostRequest4 = domainNameserverPostRequest3;

        System.assert(domainNameserverPostRequest1.equals(domainNameserverPostRequest2));
        System.assert(domainNameserverPostRequest2.equals(domainNameserverPostRequest1));
        System.assert(domainNameserverPostRequest1.equals(domainNameserverPostRequest1));
        System.assert(domainNameserverPostRequest3.equals(domainNameserverPostRequest4));
        System.assert(domainNameserverPostRequest4.equals(domainNameserverPostRequest3));
        System.assert(domainNameserverPostRequest3.equals(domainNameserverPostRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainNameserverPostRequest domainNameserverPostRequest1 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest2 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest3 = new OASDomainNameserverPostRequest();
        OASDomainNameserverPostRequest domainNameserverPostRequest4 = new OASDomainNameserverPostRequest();

        System.assert(domainNameserverPostRequest1.equals(domainNameserverPostRequest2));
        System.assert(domainNameserverPostRequest2.equals(domainNameserverPostRequest1));
        System.assert(domainNameserverPostRequest3.equals(domainNameserverPostRequest4));
        System.assert(domainNameserverPostRequest4.equals(domainNameserverPostRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainNameserverPostRequest domainNameserverPostRequest1 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest2 = new OASDomainNameserverPostRequest();

        System.assertEquals(false, domainNameserverPostRequest1.equals('foo'));
        System.assertEquals(false, domainNameserverPostRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainNameserverPostRequest domainNameserverPostRequest1 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest2 = new OASDomainNameserverPostRequest();
        OASDomainNameserverPostRequest domainNameserverPostRequest3;

        System.assertEquals(false, domainNameserverPostRequest1.equals(domainNameserverPostRequest3));
        System.assertEquals(false, domainNameserverPostRequest2.equals(domainNameserverPostRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainNameserverPostRequest domainNameserverPostRequest1 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest2 = new OASDomainNameserverPostRequest();

        System.assertEquals(domainNameserverPostRequest1.hashCode(), domainNameserverPostRequest1.hashCode());
        System.assertEquals(domainNameserverPostRequest2.hashCode(), domainNameserverPostRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainNameserverPostRequest domainNameserverPostRequest1 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest2 = OASDomainNameserverPostRequest.getExample();
        OASDomainNameserverPostRequest domainNameserverPostRequest3 = new OASDomainNameserverPostRequest();
        OASDomainNameserverPostRequest domainNameserverPostRequest4 = new OASDomainNameserverPostRequest();

        System.assert(domainNameserverPostRequest1.equals(domainNameserverPostRequest2));
        System.assert(domainNameserverPostRequest3.equals(domainNameserverPostRequest4));
        System.assertEquals(domainNameserverPostRequest1.hashCode(), domainNameserverPostRequest2.hashCode());
        System.assertEquals(domainNameserverPostRequest3.hashCode(), domainNameserverPostRequest4.hashCode());
    }
}
