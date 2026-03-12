@isTest
private class OASVpsServiceAddonsTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsServiceAddons vpsServiceAddons1 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons2 = vpsServiceAddons1;
        OASVpsServiceAddons vpsServiceAddons3 = new OASVpsServiceAddons();
        OASVpsServiceAddons vpsServiceAddons4 = vpsServiceAddons3;

        System.assert(vpsServiceAddons1.equals(vpsServiceAddons2));
        System.assert(vpsServiceAddons2.equals(vpsServiceAddons1));
        System.assert(vpsServiceAddons1.equals(vpsServiceAddons1));
        System.assert(vpsServiceAddons3.equals(vpsServiceAddons4));
        System.assert(vpsServiceAddons4.equals(vpsServiceAddons3));
        System.assert(vpsServiceAddons3.equals(vpsServiceAddons3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsServiceAddons vpsServiceAddons1 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons2 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons3 = new OASVpsServiceAddons();
        OASVpsServiceAddons vpsServiceAddons4 = new OASVpsServiceAddons();

        System.assert(vpsServiceAddons1.equals(vpsServiceAddons2));
        System.assert(vpsServiceAddons2.equals(vpsServiceAddons1));
        System.assert(vpsServiceAddons3.equals(vpsServiceAddons4));
        System.assert(vpsServiceAddons4.equals(vpsServiceAddons3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsServiceAddons vpsServiceAddons1 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons2 = new OASVpsServiceAddons();

        System.assertEquals(false, vpsServiceAddons1.equals('foo'));
        System.assertEquals(false, vpsServiceAddons2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsServiceAddons vpsServiceAddons1 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons2 = new OASVpsServiceAddons();
        OASVpsServiceAddons vpsServiceAddons3;

        System.assertEquals(false, vpsServiceAddons1.equals(vpsServiceAddons3));
        System.assertEquals(false, vpsServiceAddons2.equals(vpsServiceAddons3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsServiceAddons vpsServiceAddons1 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons2 = new OASVpsServiceAddons();

        System.assertEquals(vpsServiceAddons1.hashCode(), vpsServiceAddons1.hashCode());
        System.assertEquals(vpsServiceAddons2.hashCode(), vpsServiceAddons2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsServiceAddons vpsServiceAddons1 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons2 = OASVpsServiceAddons.getExample();
        OASVpsServiceAddons vpsServiceAddons3 = new OASVpsServiceAddons();
        OASVpsServiceAddons vpsServiceAddons4 = new OASVpsServiceAddons();

        System.assert(vpsServiceAddons1.equals(vpsServiceAddons2));
        System.assert(vpsServiceAddons3.equals(vpsServiceAddons4));
        System.assertEquals(vpsServiceAddons1.hashCode(), vpsServiceAddons2.hashCode());
        System.assertEquals(vpsServiceAddons3.hashCode(), vpsServiceAddons4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsServiceAddons vpsServiceAddons = new OASVpsServiceAddons();
        Map<String, String> x-property-mappings = vpsServiceAddons.getx-property-mappings();
        System.assertEquals('hasCpanel', x-property-mappings.get('has_cpanel'));
        System.assertEquals('hasDirectadmin', x-property-mappings.get('has_directadmin'));
        System.assertEquals('hasFantastico', x-property-mappings.get('has_fantastico'));
        System.assertEquals('hasSoftaculous', x-property-mappings.get('has_softaculous'));
        System.assertEquals('hasHdspace', x-property-mappings.get('has_hdspace'));
        System.assertEquals('dedicatedIp', x-property-mappings.get('dedicated_ip'));
        System.assertEquals('extraIps', x-property-mappings.get('extra_ips'));
        System.assertEquals('extraIps6', x-property-mappings.get('extra_ips6'));
        System.assertEquals('unpaidIps', x-property-mappings.get('unpaid_ips'));
        System.assertEquals('cpanelId', x-property-mappings.get('cpanel_id'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsServiceAddons vpsServiceAddons = new OASVpsServiceAddons();
        System.assertEquals(new List<String>(), vpsServiceAddons.extraIps);
        System.assertEquals(new List<String>(), vpsServiceAddons.extraIps6);
        System.assertEquals(new List<String>(), vpsServiceAddons.unpaidIps);
        System.assertEquals(new List<String>(), vpsServiceAddons.ips);
        System.assertEquals(new List<String>(), vpsServiceAddons.ips6);
        System.assertEquals(new List<String>(), vpsServiceAddons.ids);
        System.assertEquals(new List<String>(), vpsServiceAddons.rdata);
        System.assertEquals(null, vpsServiceAddons.hasCpanel);
        System.assertEquals(null, vpsServiceAddons.hasDirectadmin);
        System.assertEquals(null, vpsServiceAddons.hasFantastico);
        System.assertEquals(null, vpsServiceAddons.hasSoftaculous);
        System.assertEquals(null, vpsServiceAddons.hasHdspace);
        System.assertEquals(null, vpsServiceAddons.dedicatedIp);
        System.assertEquals(null, vpsServiceAddons.cpanelId);
        System.assertEquals(null, vpsServiceAddons.cost);
    }
}
