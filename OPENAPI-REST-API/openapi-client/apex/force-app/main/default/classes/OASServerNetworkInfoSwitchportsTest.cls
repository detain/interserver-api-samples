@isTest
private class OASServerNetworkInfoSwitchportsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports1 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports2 = serverNetworkInfoSwitchports1;
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports3 = new OASServerNetworkInfoSwitchports();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports4 = serverNetworkInfoSwitchports3;

        System.assert(serverNetworkInfoSwitchports1.equals(serverNetworkInfoSwitchports2));
        System.assert(serverNetworkInfoSwitchports2.equals(serverNetworkInfoSwitchports1));
        System.assert(serverNetworkInfoSwitchports1.equals(serverNetworkInfoSwitchports1));
        System.assert(serverNetworkInfoSwitchports3.equals(serverNetworkInfoSwitchports4));
        System.assert(serverNetworkInfoSwitchports4.equals(serverNetworkInfoSwitchports3));
        System.assert(serverNetworkInfoSwitchports3.equals(serverNetworkInfoSwitchports3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports1 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports2 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports3 = new OASServerNetworkInfoSwitchports();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports4 = new OASServerNetworkInfoSwitchports();

        System.assert(serverNetworkInfoSwitchports1.equals(serverNetworkInfoSwitchports2));
        System.assert(serverNetworkInfoSwitchports2.equals(serverNetworkInfoSwitchports1));
        System.assert(serverNetworkInfoSwitchports3.equals(serverNetworkInfoSwitchports4));
        System.assert(serverNetworkInfoSwitchports4.equals(serverNetworkInfoSwitchports3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports1 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports2 = new OASServerNetworkInfoSwitchports();

        System.assertEquals(false, serverNetworkInfoSwitchports1.equals('foo'));
        System.assertEquals(false, serverNetworkInfoSwitchports2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports1 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports2 = new OASServerNetworkInfoSwitchports();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports3;

        System.assertEquals(false, serverNetworkInfoSwitchports1.equals(serverNetworkInfoSwitchports3));
        System.assertEquals(false, serverNetworkInfoSwitchports2.equals(serverNetworkInfoSwitchports3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports1 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports2 = new OASServerNetworkInfoSwitchports();

        System.assertEquals(serverNetworkInfoSwitchports1.hashCode(), serverNetworkInfoSwitchports1.hashCode());
        System.assertEquals(serverNetworkInfoSwitchports2.hashCode(), serverNetworkInfoSwitchports2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports1 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports2 = OASServerNetworkInfoSwitchports.getExample();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports3 = new OASServerNetworkInfoSwitchports();
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports4 = new OASServerNetworkInfoSwitchports();

        System.assert(serverNetworkInfoSwitchports1.equals(serverNetworkInfoSwitchports2));
        System.assert(serverNetworkInfoSwitchports3.equals(serverNetworkInfoSwitchports4));
        System.assertEquals(serverNetworkInfoSwitchports1.hashCode(), serverNetworkInfoSwitchports2.hashCode());
        System.assertEquals(serverNetworkInfoSwitchports3.hashCode(), serverNetworkInfoSwitchports4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerNetworkInfoSwitchports serverNetworkInfoSwitchports = new OASServerNetworkInfoSwitchports();
        Map<String, String> x-property-mappings = serverNetworkInfoSwitchports.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('10414'));
    }
}
