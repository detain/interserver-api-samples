@isTest
private class OASVpsClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsClientLink vpsClientLink1 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink2 = vpsClientLink1;
        OASVpsClientLink vpsClientLink3 = new OASVpsClientLink();
        OASVpsClientLink vpsClientLink4 = vpsClientLink3;

        System.assert(vpsClientLink1.equals(vpsClientLink2));
        System.assert(vpsClientLink2.equals(vpsClientLink1));
        System.assert(vpsClientLink1.equals(vpsClientLink1));
        System.assert(vpsClientLink3.equals(vpsClientLink4));
        System.assert(vpsClientLink4.equals(vpsClientLink3));
        System.assert(vpsClientLink3.equals(vpsClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsClientLink vpsClientLink1 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink2 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink3 = new OASVpsClientLink();
        OASVpsClientLink vpsClientLink4 = new OASVpsClientLink();

        System.assert(vpsClientLink1.equals(vpsClientLink2));
        System.assert(vpsClientLink2.equals(vpsClientLink1));
        System.assert(vpsClientLink3.equals(vpsClientLink4));
        System.assert(vpsClientLink4.equals(vpsClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsClientLink vpsClientLink1 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink2 = new OASVpsClientLink();

        System.assertEquals(false, vpsClientLink1.equals('foo'));
        System.assertEquals(false, vpsClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsClientLink vpsClientLink1 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink2 = new OASVpsClientLink();
        OASVpsClientLink vpsClientLink3;

        System.assertEquals(false, vpsClientLink1.equals(vpsClientLink3));
        System.assertEquals(false, vpsClientLink2.equals(vpsClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsClientLink vpsClientLink1 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink2 = new OASVpsClientLink();

        System.assertEquals(vpsClientLink1.hashCode(), vpsClientLink1.hashCode());
        System.assertEquals(vpsClientLink2.hashCode(), vpsClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsClientLink vpsClientLink1 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink2 = OASVpsClientLink.getExample();
        OASVpsClientLink vpsClientLink3 = new OASVpsClientLink();
        OASVpsClientLink vpsClientLink4 = new OASVpsClientLink();

        System.assert(vpsClientLink1.equals(vpsClientLink2));
        System.assert(vpsClientLink3.equals(vpsClientLink4));
        System.assertEquals(vpsClientLink1.hashCode(), vpsClientLink2.hashCode());
        System.assertEquals(vpsClientLink3.hashCode(), vpsClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsClientLink vpsClientLink = new OASVpsClientLink();
        Map<String, String> x-property-mappings = vpsClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
    }
}
