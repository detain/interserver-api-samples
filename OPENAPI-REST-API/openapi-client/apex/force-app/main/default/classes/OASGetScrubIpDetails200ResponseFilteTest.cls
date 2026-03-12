@isTest
private class OASGetScrubIpDetails200ResponseFilteTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall1 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall2 = getScrubIpDetails200ResponseFilterFirewall1;
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall3 = new OASGetScrubIpDetails200ResponseFilte();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall4 = getScrubIpDetails200ResponseFilterFirewall3;

        System.assert(getScrubIpDetails200ResponseFilterFirewall1.equals(getScrubIpDetails200ResponseFilterFirewall2));
        System.assert(getScrubIpDetails200ResponseFilterFirewall2.equals(getScrubIpDetails200ResponseFilterFirewall1));
        System.assert(getScrubIpDetails200ResponseFilterFirewall1.equals(getScrubIpDetails200ResponseFilterFirewall1));
        System.assert(getScrubIpDetails200ResponseFilterFirewall3.equals(getScrubIpDetails200ResponseFilterFirewall4));
        System.assert(getScrubIpDetails200ResponseFilterFirewall4.equals(getScrubIpDetails200ResponseFilterFirewall3));
        System.assert(getScrubIpDetails200ResponseFilterFirewall3.equals(getScrubIpDetails200ResponseFilterFirewall3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall1 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall2 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall3 = new OASGetScrubIpDetails200ResponseFilte();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall4 = new OASGetScrubIpDetails200ResponseFilte();

        System.assert(getScrubIpDetails200ResponseFilterFirewall1.equals(getScrubIpDetails200ResponseFilterFirewall2));
        System.assert(getScrubIpDetails200ResponseFilterFirewall2.equals(getScrubIpDetails200ResponseFilterFirewall1));
        System.assert(getScrubIpDetails200ResponseFilterFirewall3.equals(getScrubIpDetails200ResponseFilterFirewall4));
        System.assert(getScrubIpDetails200ResponseFilterFirewall4.equals(getScrubIpDetails200ResponseFilterFirewall3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall1 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall2 = new OASGetScrubIpDetails200ResponseFilte();

        System.assertEquals(false, getScrubIpDetails200ResponseFilterFirewall1.equals('foo'));
        System.assertEquals(false, getScrubIpDetails200ResponseFilterFirewall2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall1 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall2 = new OASGetScrubIpDetails200ResponseFilte();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall3;

        System.assertEquals(false, getScrubIpDetails200ResponseFilterFirewall1.equals(getScrubIpDetails200ResponseFilterFirewall3));
        System.assertEquals(false, getScrubIpDetails200ResponseFilterFirewall2.equals(getScrubIpDetails200ResponseFilterFirewall3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall1 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall2 = new OASGetScrubIpDetails200ResponseFilte();

        System.assertEquals(getScrubIpDetails200ResponseFilterFirewall1.hashCode(), getScrubIpDetails200ResponseFilterFirewall1.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseFilterFirewall2.hashCode(), getScrubIpDetails200ResponseFilterFirewall2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall1 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall2 = OASGetScrubIpDetails200ResponseFilte.getExample();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall3 = new OASGetScrubIpDetails200ResponseFilte();
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall4 = new OASGetScrubIpDetails200ResponseFilte();

        System.assert(getScrubIpDetails200ResponseFilterFirewall1.equals(getScrubIpDetails200ResponseFilterFirewall2));
        System.assert(getScrubIpDetails200ResponseFilterFirewall3.equals(getScrubIpDetails200ResponseFilterFirewall4));
        System.assertEquals(getScrubIpDetails200ResponseFilterFirewall1.hashCode(), getScrubIpDetails200ResponseFilterFirewall2.hashCode());
        System.assertEquals(getScrubIpDetails200ResponseFilterFirewall3.hashCode(), getScrubIpDetails200ResponseFilterFirewall4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall = new OASGetScrubIpDetails200ResponseFilte();
        Map<String, String> x-property-mappings = getScrubIpDetails200ResponseFilterFirewall.getx-property-mappings();
        System.assertEquals('scrubEnabled', x-property-mappings.get('scrub_enabled'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASGetScrubIpDetails200ResponseFilte getScrubIpDetails200ResponseFilterFirewall = new OASGetScrubIpDetails200ResponseFilte();
        System.assertEquals(new List<OASGetScrubIpDetails200ResponseFilte>(), getScrubIpDetails200ResponseFilterFirewall.rules);
        System.assertEquals(new List<OASGetScrubIpDetails200ResponseFilte>(), getScrubIpDetails200ResponseFilterFirewall.filters);
        System.assertEquals(null, getScrubIpDetails200ResponseFilterFirewall.scrubEnabled);
    }
}
