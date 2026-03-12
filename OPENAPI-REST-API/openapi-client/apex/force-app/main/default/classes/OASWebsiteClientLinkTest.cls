@isTest
private class OASWebsiteClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsiteClientLink websiteClientLink1 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink2 = websiteClientLink1;
        OASWebsiteClientLink websiteClientLink3 = new OASWebsiteClientLink();
        OASWebsiteClientLink websiteClientLink4 = websiteClientLink3;

        System.assert(websiteClientLink1.equals(websiteClientLink2));
        System.assert(websiteClientLink2.equals(websiteClientLink1));
        System.assert(websiteClientLink1.equals(websiteClientLink1));
        System.assert(websiteClientLink3.equals(websiteClientLink4));
        System.assert(websiteClientLink4.equals(websiteClientLink3));
        System.assert(websiteClientLink3.equals(websiteClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsiteClientLink websiteClientLink1 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink2 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink3 = new OASWebsiteClientLink();
        OASWebsiteClientLink websiteClientLink4 = new OASWebsiteClientLink();

        System.assert(websiteClientLink1.equals(websiteClientLink2));
        System.assert(websiteClientLink2.equals(websiteClientLink1));
        System.assert(websiteClientLink3.equals(websiteClientLink4));
        System.assert(websiteClientLink4.equals(websiteClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsiteClientLink websiteClientLink1 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink2 = new OASWebsiteClientLink();

        System.assertEquals(false, websiteClientLink1.equals('foo'));
        System.assertEquals(false, websiteClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsiteClientLink websiteClientLink1 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink2 = new OASWebsiteClientLink();
        OASWebsiteClientLink websiteClientLink3;

        System.assertEquals(false, websiteClientLink1.equals(websiteClientLink3));
        System.assertEquals(false, websiteClientLink2.equals(websiteClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsiteClientLink websiteClientLink1 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink2 = new OASWebsiteClientLink();

        System.assertEquals(websiteClientLink1.hashCode(), websiteClientLink1.hashCode());
        System.assertEquals(websiteClientLink2.hashCode(), websiteClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsiteClientLink websiteClientLink1 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink2 = OASWebsiteClientLink.getExample();
        OASWebsiteClientLink websiteClientLink3 = new OASWebsiteClientLink();
        OASWebsiteClientLink websiteClientLink4 = new OASWebsiteClientLink();

        System.assert(websiteClientLink1.equals(websiteClientLink2));
        System.assert(websiteClientLink3.equals(websiteClientLink4));
        System.assertEquals(websiteClientLink1.hashCode(), websiteClientLink2.hashCode());
        System.assertEquals(websiteClientLink3.hashCode(), websiteClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASWebsiteClientLink websiteClientLink = new OASWebsiteClientLink();
        Map<String, String> x-property-mappings = websiteClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
        System.assertEquals('otherAttr', x-property-mappings.get('other_attr'));
    }
}
