@isTest
private class OASGetScrubIpDetails200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response1 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response2 = getScrubIpDetails200Response1;
        OASGetScrubIpDetails200Response getScrubIpDetails200Response3 = new OASGetScrubIpDetails200Response();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response4 = getScrubIpDetails200Response3;

        System.assert(getScrubIpDetails200Response1.equals(getScrubIpDetails200Response2));
        System.assert(getScrubIpDetails200Response2.equals(getScrubIpDetails200Response1));
        System.assert(getScrubIpDetails200Response1.equals(getScrubIpDetails200Response1));
        System.assert(getScrubIpDetails200Response3.equals(getScrubIpDetails200Response4));
        System.assert(getScrubIpDetails200Response4.equals(getScrubIpDetails200Response3));
        System.assert(getScrubIpDetails200Response3.equals(getScrubIpDetails200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response1 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response2 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response3 = new OASGetScrubIpDetails200Response();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response4 = new OASGetScrubIpDetails200Response();

        System.assert(getScrubIpDetails200Response1.equals(getScrubIpDetails200Response2));
        System.assert(getScrubIpDetails200Response2.equals(getScrubIpDetails200Response1));
        System.assert(getScrubIpDetails200Response3.equals(getScrubIpDetails200Response4));
        System.assert(getScrubIpDetails200Response4.equals(getScrubIpDetails200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response1 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response2 = new OASGetScrubIpDetails200Response();

        System.assertEquals(false, getScrubIpDetails200Response1.equals('foo'));
        System.assertEquals(false, getScrubIpDetails200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response1 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response2 = new OASGetScrubIpDetails200Response();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response3;

        System.assertEquals(false, getScrubIpDetails200Response1.equals(getScrubIpDetails200Response3));
        System.assertEquals(false, getScrubIpDetails200Response2.equals(getScrubIpDetails200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response1 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response2 = new OASGetScrubIpDetails200Response();

        System.assertEquals(getScrubIpDetails200Response1.hashCode(), getScrubIpDetails200Response1.hashCode());
        System.assertEquals(getScrubIpDetails200Response2.hashCode(), getScrubIpDetails200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response1 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response2 = OASGetScrubIpDetails200Response.getExample();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response3 = new OASGetScrubIpDetails200Response();
        OASGetScrubIpDetails200Response getScrubIpDetails200Response4 = new OASGetScrubIpDetails200Response();

        System.assert(getScrubIpDetails200Response1.equals(getScrubIpDetails200Response2));
        System.assert(getScrubIpDetails200Response3.equals(getScrubIpDetails200Response4));
        System.assertEquals(getScrubIpDetails200Response1.hashCode(), getScrubIpDetails200Response2.hashCode());
        System.assertEquals(getScrubIpDetails200Response3.hashCode(), getScrubIpDetails200Response4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response = new OASGetScrubIpDetails200Response();
        Map<String, String> x-property-mappings = getScrubIpDetails200Response.getx-property-mappings();
        System.assertEquals('clientLinks', x-property-mappings.get('client_links'));
        System.assertEquals('r_package', x-property-mappings.get('package'));
        System.assertEquals('filterFirewall', x-property-mappings.get('filter_firewall'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASGetScrubIpDetails200Response getScrubIpDetails200Response = new OASGetScrubIpDetails200Response();
        System.assertEquals(new List<OASGetScrubIpDetails200ResponseClien>(), getScrubIpDetails200Response.clientLinks);
        System.assertEquals(null, getScrubIpDetails200Response.serviceInfo);
        System.assertEquals(null, getScrubIpDetails200Response.billingDetails);
        System.assertEquals(null, getScrubIpDetails200Response.custCurrency);
        System.assertEquals(null, getScrubIpDetails200Response.custCurrencySymbol);
        System.assertEquals(null, getScrubIpDetails200Response.r_package);
        System.assertEquals(null, getScrubIpDetails200Response.extraInfoTables);
        System.assertEquals(null, getScrubIpDetails200Response.filterFirewall);
    }
}
