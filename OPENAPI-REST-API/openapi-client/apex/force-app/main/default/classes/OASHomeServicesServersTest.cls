@isTest
private class OASHomeServicesServersTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesServers homeServicesServers1 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers2 = homeServicesServers1;
        OASHomeServicesServers homeServicesServers3 = new OASHomeServicesServers();
        OASHomeServicesServers homeServicesServers4 = homeServicesServers3;

        System.assert(homeServicesServers1.equals(homeServicesServers2));
        System.assert(homeServicesServers2.equals(homeServicesServers1));
        System.assert(homeServicesServers1.equals(homeServicesServers1));
        System.assert(homeServicesServers3.equals(homeServicesServers4));
        System.assert(homeServicesServers4.equals(homeServicesServers3));
        System.assert(homeServicesServers3.equals(homeServicesServers3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesServers homeServicesServers1 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers2 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers3 = new OASHomeServicesServers();
        OASHomeServicesServers homeServicesServers4 = new OASHomeServicesServers();

        System.assert(homeServicesServers1.equals(homeServicesServers2));
        System.assert(homeServicesServers2.equals(homeServicesServers1));
        System.assert(homeServicesServers3.equals(homeServicesServers4));
        System.assert(homeServicesServers4.equals(homeServicesServers3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesServers homeServicesServers1 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers2 = new OASHomeServicesServers();

        System.assertEquals(false, homeServicesServers1.equals('foo'));
        System.assertEquals(false, homeServicesServers2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesServers homeServicesServers1 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers2 = new OASHomeServicesServers();
        OASHomeServicesServers homeServicesServers3;

        System.assertEquals(false, homeServicesServers1.equals(homeServicesServers3));
        System.assertEquals(false, homeServicesServers2.equals(homeServicesServers3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesServers homeServicesServers1 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers2 = new OASHomeServicesServers();

        System.assertEquals(homeServicesServers1.hashCode(), homeServicesServers1.hashCode());
        System.assertEquals(homeServicesServers2.hashCode(), homeServicesServers2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesServers homeServicesServers1 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers2 = OASHomeServicesServers.getExample();
        OASHomeServicesServers homeServicesServers3 = new OASHomeServicesServers();
        OASHomeServicesServers homeServicesServers4 = new OASHomeServicesServers();

        System.assert(homeServicesServers1.equals(homeServicesServers2));
        System.assert(homeServicesServers3.equals(homeServicesServers4));
        System.assertEquals(homeServicesServers1.hashCode(), homeServicesServers2.hashCode());
        System.assertEquals(homeServicesServers3.hashCode(), homeServicesServers4.hashCode());
    }
}
