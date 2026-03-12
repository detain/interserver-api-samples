@isTest
private class OASVpsTest {
    @isTest
    private static void equalsSameInstance() {
        OASVps vps1 = OASVps.getExample();
        OASVps vps2 = vps1;
        OASVps vps3 = new OASVps();
        OASVps vps4 = vps3;

        System.assert(vps1.equals(vps2));
        System.assert(vps2.equals(vps1));
        System.assert(vps1.equals(vps1));
        System.assert(vps3.equals(vps4));
        System.assert(vps4.equals(vps3));
        System.assert(vps3.equals(vps3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVps vps1 = OASVps.getExample();
        OASVps vps2 = OASVps.getExample();
        OASVps vps3 = new OASVps();
        OASVps vps4 = new OASVps();

        System.assert(vps1.equals(vps2));
        System.assert(vps2.equals(vps1));
        System.assert(vps3.equals(vps4));
        System.assert(vps4.equals(vps3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVps vps1 = OASVps.getExample();
        OASVps vps2 = new OASVps();

        System.assertEquals(false, vps1.equals('foo'));
        System.assertEquals(false, vps2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVps vps1 = OASVps.getExample();
        OASVps vps2 = new OASVps();
        OASVps vps3;

        System.assertEquals(false, vps1.equals(vps3));
        System.assertEquals(false, vps2.equals(vps3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVps vps1 = OASVps.getExample();
        OASVps vps2 = new OASVps();

        System.assertEquals(vps1.hashCode(), vps1.hashCode());
        System.assertEquals(vps2.hashCode(), vps2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVps vps1 = OASVps.getExample();
        OASVps vps2 = OASVps.getExample();
        OASVps vps3 = new OASVps();
        OASVps vps4 = new OASVps();

        System.assert(vps1.equals(vps2));
        System.assert(vps3.equals(vps4));
        System.assertEquals(vps1.hashCode(), vps2.hashCode());
        System.assertEquals(vps3.hashCode(), vps4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVps vps = new OASVps();
        Map<String, String> x-property-mappings = vps.getx-property-mappings();
        System.assertEquals('clientLinks', x-property-mappings.get('client_links'));
        System.assertEquals('r_package', x-property-mappings.get('package'));
        System.assertEquals('daLink', x-property-mappings.get('da_link'));
        System.assertEquals('srLink', x-property-mappings.get('sr_link'));
        System.assertEquals('cpData', x-property-mappings.get('cp_data'));
        System.assertEquals('daData', x-property-mappings.get('da_data'));
        System.assertEquals('plesk12Data', x-property-mappings.get('plesk12_data'));
        System.assertEquals('osTemplate', x-property-mappings.get('os_template'));
        System.assertEquals('cpuGraphData', x-property-mappings.get('cpu_graph_data'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVps vps = new OASVps();
        System.assertEquals(new List<OASVpsClientLink>(), vps.clientLinks);
        System.assertEquals(null, vps.serviceInfo);
        System.assertEquals(null, vps.billingDetails);
        System.assertEquals(null, vps.custCurrency);
        System.assertEquals(null, vps.custCurrencySymbol);
        System.assertEquals(null, vps.serviceMaster);
        System.assertEquals(null, vps.r_package);
        System.assertEquals(null, vps.serviceExtra);
        System.assertEquals(null, vps.extraInfoTables);
        System.assertEquals(null, vps.module);
        System.assertEquals(null, vps.token);
        System.assertEquals(null, vps.daLink);
        System.assertEquals(null, vps.srLink);
        System.assertEquals(null, vps.cpData);
        System.assertEquals(null, vps.daData);
        System.assertEquals(null, vps.plesk12Data);
        System.assertEquals(null, vps.serviceAddons);
        System.assertEquals(null, vps.osTemplate);
        System.assertEquals(null, vps.cpuGraphData);
    }
}
