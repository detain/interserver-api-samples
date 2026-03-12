@isTest
private class OASWebsiteTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsite website1 = OASWebsite.getExample();
        OASWebsite website2 = website1;
        OASWebsite website3 = new OASWebsite();
        OASWebsite website4 = website3;

        System.assert(website1.equals(website2));
        System.assert(website2.equals(website1));
        System.assert(website1.equals(website1));
        System.assert(website3.equals(website4));
        System.assert(website4.equals(website3));
        System.assert(website3.equals(website3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsite website1 = OASWebsite.getExample();
        OASWebsite website2 = OASWebsite.getExample();
        OASWebsite website3 = new OASWebsite();
        OASWebsite website4 = new OASWebsite();

        System.assert(website1.equals(website2));
        System.assert(website2.equals(website1));
        System.assert(website3.equals(website4));
        System.assert(website4.equals(website3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsite website1 = OASWebsite.getExample();
        OASWebsite website2 = new OASWebsite();

        System.assertEquals(false, website1.equals('foo'));
        System.assertEquals(false, website2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsite website1 = OASWebsite.getExample();
        OASWebsite website2 = new OASWebsite();
        OASWebsite website3;

        System.assertEquals(false, website1.equals(website3));
        System.assertEquals(false, website2.equals(website3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsite website1 = OASWebsite.getExample();
        OASWebsite website2 = new OASWebsite();

        System.assertEquals(website1.hashCode(), website1.hashCode());
        System.assertEquals(website2.hashCode(), website2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsite website1 = OASWebsite.getExample();
        OASWebsite website2 = OASWebsite.getExample();
        OASWebsite website3 = new OASWebsite();
        OASWebsite website4 = new OASWebsite();

        System.assert(website1.equals(website2));
        System.assert(website3.equals(website4));
        System.assertEquals(website1.hashCode(), website2.hashCode());
        System.assertEquals(website3.hashCode(), website4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsite website = new OASWebsite();
        Map<String, String> x-property-mappings = website.getx-property-mappings();
        System.assertEquals('clientLinks', x-property-mappings.get('client_links'));
        System.assertEquals('r_package', x-property-mappings.get('package'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASWebsite website = new OASWebsite();
        System.assertEquals(new List<OASWebsiteClientLink>(), website.clientLinks);
        System.assertEquals(new List<Object>(), website.serviceExtra);
        System.assertEquals(null, website.serviceInfo);
        System.assertEquals(null, website.billingDetails);
        System.assertEquals(null, website.custCurrency);
        System.assertEquals(null, website.custCurrencySymbol);
        System.assertEquals(null, website.serviceMaster);
        System.assertEquals(null, website.r_package);
        System.assertEquals(null, website.extraInfoTables);
    }
}
