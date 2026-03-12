@isTest
private class OASServerSwitchportTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerSwitchport serverSwitchport1 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport2 = serverSwitchport1;
        OASServerSwitchport serverSwitchport3 = new OASServerSwitchport();
        OASServerSwitchport serverSwitchport4 = serverSwitchport3;

        System.assert(serverSwitchport1.equals(serverSwitchport2));
        System.assert(serverSwitchport2.equals(serverSwitchport1));
        System.assert(serverSwitchport1.equals(serverSwitchport1));
        System.assert(serverSwitchport3.equals(serverSwitchport4));
        System.assert(serverSwitchport4.equals(serverSwitchport3));
        System.assert(serverSwitchport3.equals(serverSwitchport3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerSwitchport serverSwitchport1 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport2 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport3 = new OASServerSwitchport();
        OASServerSwitchport serverSwitchport4 = new OASServerSwitchport();

        System.assert(serverSwitchport1.equals(serverSwitchport2));
        System.assert(serverSwitchport2.equals(serverSwitchport1));
        System.assert(serverSwitchport3.equals(serverSwitchport4));
        System.assert(serverSwitchport4.equals(serverSwitchport3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerSwitchport serverSwitchport1 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport2 = new OASServerSwitchport();

        System.assertEquals(false, serverSwitchport1.equals('foo'));
        System.assertEquals(false, serverSwitchport2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerSwitchport serverSwitchport1 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport2 = new OASServerSwitchport();
        OASServerSwitchport serverSwitchport3;

        System.assertEquals(false, serverSwitchport1.equals(serverSwitchport3));
        System.assertEquals(false, serverSwitchport2.equals(serverSwitchport3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerSwitchport serverSwitchport1 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport2 = new OASServerSwitchport();

        System.assertEquals(serverSwitchport1.hashCode(), serverSwitchport1.hashCode());
        System.assertEquals(serverSwitchport2.hashCode(), serverSwitchport2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerSwitchport serverSwitchport1 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport2 = OASServerSwitchport.getExample();
        OASServerSwitchport serverSwitchport3 = new OASServerSwitchport();
        OASServerSwitchport serverSwitchport4 = new OASServerSwitchport();

        System.assert(serverSwitchport1.equals(serverSwitchport2));
        System.assert(serverSwitchport3.equals(serverSwitchport4));
        System.assertEquals(serverSwitchport1.hashCode(), serverSwitchport2.hashCode());
        System.assertEquals(serverSwitchport3.hashCode(), serverSwitchport4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerSwitchport serverSwitchport = new OASServerSwitchport();
        Map<String, String> x-property-mappings = serverSwitchport.getx-property-mappings();
        System.assertEquals('switchportId', x-property-mappings.get('switchport_id'));
        System.assertEquals('switchId', x-property-mappings.get('switch_id'));
        System.assertEquals('r_switch', x-property-mappings.get('switch'));
        System.assertEquals('graphId', x-property-mappings.get('graph_id'));
        System.assertEquals('assetId', x-property-mappings.get('asset_id'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServerSwitchport serverSwitchport = new OASServerSwitchport();
        System.assertEquals(new List<String>(), serverSwitchport.vlans);
        System.assertEquals(new List<String>(), serverSwitchport.vlans6);
        System.assertEquals(null, serverSwitchport.switchportId);
        System.assertEquals(null, serverSwitchport.switchId);
        System.assertEquals(null, serverSwitchport.r_switch);
        System.assertEquals(null, serverSwitchport.port);
        System.assertEquals(null, serverSwitchport.blade);
        System.assertEquals(null, serverSwitchport.justport);
        System.assertEquals(null, serverSwitchport.graphId);
        System.assertEquals(null, serverSwitchport.assetId);
    }
}
