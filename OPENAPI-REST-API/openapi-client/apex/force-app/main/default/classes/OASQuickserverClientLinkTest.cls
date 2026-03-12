@isTest
private class OASQuickserverClientLinkTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverClientLink quickserverClientLink1 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink2 = quickserverClientLink1;
        OASQuickserverClientLink quickserverClientLink3 = new OASQuickserverClientLink();
        OASQuickserverClientLink quickserverClientLink4 = quickserverClientLink3;

        System.assert(quickserverClientLink1.equals(quickserverClientLink2));
        System.assert(quickserverClientLink2.equals(quickserverClientLink1));
        System.assert(quickserverClientLink1.equals(quickserverClientLink1));
        System.assert(quickserverClientLink3.equals(quickserverClientLink4));
        System.assert(quickserverClientLink4.equals(quickserverClientLink3));
        System.assert(quickserverClientLink3.equals(quickserverClientLink3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverClientLink quickserverClientLink1 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink2 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink3 = new OASQuickserverClientLink();
        OASQuickserverClientLink quickserverClientLink4 = new OASQuickserverClientLink();

        System.assert(quickserverClientLink1.equals(quickserverClientLink2));
        System.assert(quickserverClientLink2.equals(quickserverClientLink1));
        System.assert(quickserverClientLink3.equals(quickserverClientLink4));
        System.assert(quickserverClientLink4.equals(quickserverClientLink3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverClientLink quickserverClientLink1 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink2 = new OASQuickserverClientLink();

        System.assertEquals(false, quickserverClientLink1.equals('foo'));
        System.assertEquals(false, quickserverClientLink2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverClientLink quickserverClientLink1 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink2 = new OASQuickserverClientLink();
        OASQuickserverClientLink quickserverClientLink3;

        System.assertEquals(false, quickserverClientLink1.equals(quickserverClientLink3));
        System.assertEquals(false, quickserverClientLink2.equals(quickserverClientLink3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverClientLink quickserverClientLink1 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink2 = new OASQuickserverClientLink();

        System.assertEquals(quickserverClientLink1.hashCode(), quickserverClientLink1.hashCode());
        System.assertEquals(quickserverClientLink2.hashCode(), quickserverClientLink2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverClientLink quickserverClientLink1 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink2 = OASQuickserverClientLink.getExample();
        OASQuickserverClientLink quickserverClientLink3 = new OASQuickserverClientLink();
        OASQuickserverClientLink quickserverClientLink4 = new OASQuickserverClientLink();

        System.assert(quickserverClientLink1.equals(quickserverClientLink2));
        System.assert(quickserverClientLink3.equals(quickserverClientLink4));
        System.assertEquals(quickserverClientLink1.hashCode(), quickserverClientLink2.hashCode());
        System.assertEquals(quickserverClientLink3.hashCode(), quickserverClientLink4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverClientLink quickserverClientLink = new OASQuickserverClientLink();
        Map<String, String> x-property-mappings = quickserverClientLink.getx-property-mappings();
        System.assertEquals('iconText', x-property-mappings.get('icon_text'));
        System.assertEquals('helpText', x-property-mappings.get('help_text'));
        System.assertEquals('otherAttr', x-property-mappings.get('other_attr'));
    }
}
