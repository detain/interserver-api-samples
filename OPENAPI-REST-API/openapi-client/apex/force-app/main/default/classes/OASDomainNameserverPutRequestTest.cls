@isTest
private class OASDomainNameserverPutRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainNameserverPutRequest domainNameserverPutRequest1 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest2 = domainNameserverPutRequest1;
        OASDomainNameserverPutRequest domainNameserverPutRequest3 = new OASDomainNameserverPutRequest();
        OASDomainNameserverPutRequest domainNameserverPutRequest4 = domainNameserverPutRequest3;

        System.assert(domainNameserverPutRequest1.equals(domainNameserverPutRequest2));
        System.assert(domainNameserverPutRequest2.equals(domainNameserverPutRequest1));
        System.assert(domainNameserverPutRequest1.equals(domainNameserverPutRequest1));
        System.assert(domainNameserverPutRequest3.equals(domainNameserverPutRequest4));
        System.assert(domainNameserverPutRequest4.equals(domainNameserverPutRequest3));
        System.assert(domainNameserverPutRequest3.equals(domainNameserverPutRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainNameserverPutRequest domainNameserverPutRequest1 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest2 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest3 = new OASDomainNameserverPutRequest();
        OASDomainNameserverPutRequest domainNameserverPutRequest4 = new OASDomainNameserverPutRequest();

        System.assert(domainNameserverPutRequest1.equals(domainNameserverPutRequest2));
        System.assert(domainNameserverPutRequest2.equals(domainNameserverPutRequest1));
        System.assert(domainNameserverPutRequest3.equals(domainNameserverPutRequest4));
        System.assert(domainNameserverPutRequest4.equals(domainNameserverPutRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainNameserverPutRequest domainNameserverPutRequest1 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest2 = new OASDomainNameserverPutRequest();

        System.assertEquals(false, domainNameserverPutRequest1.equals('foo'));
        System.assertEquals(false, domainNameserverPutRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainNameserverPutRequest domainNameserverPutRequest1 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest2 = new OASDomainNameserverPutRequest();
        OASDomainNameserverPutRequest domainNameserverPutRequest3;

        System.assertEquals(false, domainNameserverPutRequest1.equals(domainNameserverPutRequest3));
        System.assertEquals(false, domainNameserverPutRequest2.equals(domainNameserverPutRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainNameserverPutRequest domainNameserverPutRequest1 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest2 = new OASDomainNameserverPutRequest();

        System.assertEquals(domainNameserverPutRequest1.hashCode(), domainNameserverPutRequest1.hashCode());
        System.assertEquals(domainNameserverPutRequest2.hashCode(), domainNameserverPutRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainNameserverPutRequest domainNameserverPutRequest1 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest2 = OASDomainNameserverPutRequest.getExample();
        OASDomainNameserverPutRequest domainNameserverPutRequest3 = new OASDomainNameserverPutRequest();
        OASDomainNameserverPutRequest domainNameserverPutRequest4 = new OASDomainNameserverPutRequest();

        System.assert(domainNameserverPutRequest1.equals(domainNameserverPutRequest2));
        System.assert(domainNameserverPutRequest3.equals(domainNameserverPutRequest4));
        System.assertEquals(domainNameserverPutRequest1.hashCode(), domainNameserverPutRequest2.hashCode());
        System.assertEquals(domainNameserverPutRequest3.hashCode(), domainNameserverPutRequest4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASDomainNameserverPutRequest domainNameserverPutRequest = new OASDomainNameserverPutRequest();
        System.assertEquals(new List<String>(), domainNameserverPutRequest.nameserver);
    }
}
