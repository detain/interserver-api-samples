@isTest
private class OASServerTest {
    @isTest
    private static void equalsSameInstance() {
        OASServer server1 = OASServer.getExample();
        OASServer server2 = server1;
        OASServer server3 = new OASServer();
        OASServer server4 = server3;

        System.assert(server1.equals(server2));
        System.assert(server2.equals(server1));
        System.assert(server1.equals(server1));
        System.assert(server3.equals(server4));
        System.assert(server4.equals(server3));
        System.assert(server3.equals(server3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServer server1 = OASServer.getExample();
        OASServer server2 = OASServer.getExample();
        OASServer server3 = new OASServer();
        OASServer server4 = new OASServer();

        System.assert(server1.equals(server2));
        System.assert(server2.equals(server1));
        System.assert(server3.equals(server4));
        System.assert(server4.equals(server3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServer server1 = OASServer.getExample();
        OASServer server2 = new OASServer();

        System.assertEquals(false, server1.equals('foo'));
        System.assertEquals(false, server2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServer server1 = OASServer.getExample();
        OASServer server2 = new OASServer();
        OASServer server3;

        System.assertEquals(false, server1.equals(server3));
        System.assertEquals(false, server2.equals(server3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServer server1 = OASServer.getExample();
        OASServer server2 = new OASServer();

        System.assertEquals(server1.hashCode(), server1.hashCode());
        System.assertEquals(server2.hashCode(), server2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServer server1 = OASServer.getExample();
        OASServer server2 = OASServer.getExample();
        OASServer server3 = new OASServer();
        OASServer server4 = new OASServer();

        System.assert(server1.equals(server2));
        System.assert(server3.equals(server4));
        System.assertEquals(server1.hashCode(), server2.hashCode());
        System.assertEquals(server3.hashCode(), server4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServer server = new OASServer();
        Map<String, String> x-property-mappings = server.getx-property-mappings();
        System.assertEquals('clientLinks', x-property-mappings.get('client_links'));
        System.assertEquals('r_package', x-property-mappings.get('package'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServer server = new OASServer();
        System.assertEquals(new List<OASServerClientLink>(), server.clientLinks);
        System.assertEquals(new List<String>(), server.serviceExtra);
        System.assertEquals(null, server.ipmiAuth);
        System.assertEquals(null, server.billingDetails);
        System.assertEquals(null, server.custCurrency);
        System.assertEquals(null, server.custCurrencySymbol);
        System.assertEquals(null, server.r_package);
        System.assertEquals(null, server.locations);
        System.assertEquals(null, server.networkInfo);
        System.assertEquals(null, server.extraInfoTables);
        System.assertEquals(null, server.serviceInfo);
    }
}
