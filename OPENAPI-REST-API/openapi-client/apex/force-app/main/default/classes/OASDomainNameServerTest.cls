@isTest
private class OASDomainNameServerTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainNameServer domainNameServer1 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer2 = domainNameServer1;
        OASDomainNameServer domainNameServer3 = new OASDomainNameServer();
        OASDomainNameServer domainNameServer4 = domainNameServer3;

        System.assert(domainNameServer1.equals(domainNameServer2));
        System.assert(domainNameServer2.equals(domainNameServer1));
        System.assert(domainNameServer1.equals(domainNameServer1));
        System.assert(domainNameServer3.equals(domainNameServer4));
        System.assert(domainNameServer4.equals(domainNameServer3));
        System.assert(domainNameServer3.equals(domainNameServer3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainNameServer domainNameServer1 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer2 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer3 = new OASDomainNameServer();
        OASDomainNameServer domainNameServer4 = new OASDomainNameServer();

        System.assert(domainNameServer1.equals(domainNameServer2));
        System.assert(domainNameServer2.equals(domainNameServer1));
        System.assert(domainNameServer3.equals(domainNameServer4));
        System.assert(domainNameServer4.equals(domainNameServer3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainNameServer domainNameServer1 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer2 = new OASDomainNameServer();

        System.assertEquals(false, domainNameServer1.equals('foo'));
        System.assertEquals(false, domainNameServer2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainNameServer domainNameServer1 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer2 = new OASDomainNameServer();
        OASDomainNameServer domainNameServer3;

        System.assertEquals(false, domainNameServer1.equals(domainNameServer3));
        System.assertEquals(false, domainNameServer2.equals(domainNameServer3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainNameServer domainNameServer1 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer2 = new OASDomainNameServer();

        System.assertEquals(domainNameServer1.hashCode(), domainNameServer1.hashCode());
        System.assertEquals(domainNameServer2.hashCode(), domainNameServer2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainNameServer domainNameServer1 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer2 = OASDomainNameServer.getExample();
        OASDomainNameServer domainNameServer3 = new OASDomainNameServer();
        OASDomainNameServer domainNameServer4 = new OASDomainNameServer();

        System.assert(domainNameServer1.equals(domainNameServer2));
        System.assert(domainNameServer3.equals(domainNameServer4));
        System.assertEquals(domainNameServer1.hashCode(), domainNameServer2.hashCode());
        System.assertEquals(domainNameServer3.hashCode(), domainNameServer4.hashCode());
    }
}
