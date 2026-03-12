@isTest
private class OASQuickserverOrderTemplatesTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderTemplates quickserverOrderTemplates1 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates2 = quickserverOrderTemplates1;
        OASQuickserverOrderTemplates quickserverOrderTemplates3 = new OASQuickserverOrderTemplates();
        OASQuickserverOrderTemplates quickserverOrderTemplates4 = quickserverOrderTemplates3;

        System.assert(quickserverOrderTemplates1.equals(quickserverOrderTemplates2));
        System.assert(quickserverOrderTemplates2.equals(quickserverOrderTemplates1));
        System.assert(quickserverOrderTemplates1.equals(quickserverOrderTemplates1));
        System.assert(quickserverOrderTemplates3.equals(quickserverOrderTemplates4));
        System.assert(quickserverOrderTemplates4.equals(quickserverOrderTemplates3));
        System.assert(quickserverOrderTemplates3.equals(quickserverOrderTemplates3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderTemplates quickserverOrderTemplates1 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates2 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates3 = new OASQuickserverOrderTemplates();
        OASQuickserverOrderTemplates quickserverOrderTemplates4 = new OASQuickserverOrderTemplates();

        System.assert(quickserverOrderTemplates1.equals(quickserverOrderTemplates2));
        System.assert(quickserverOrderTemplates2.equals(quickserverOrderTemplates1));
        System.assert(quickserverOrderTemplates3.equals(quickserverOrderTemplates4));
        System.assert(quickserverOrderTemplates4.equals(quickserverOrderTemplates3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderTemplates quickserverOrderTemplates1 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates2 = new OASQuickserverOrderTemplates();

        System.assertEquals(false, quickserverOrderTemplates1.equals('foo'));
        System.assertEquals(false, quickserverOrderTemplates2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderTemplates quickserverOrderTemplates1 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates2 = new OASQuickserverOrderTemplates();
        OASQuickserverOrderTemplates quickserverOrderTemplates3;

        System.assertEquals(false, quickserverOrderTemplates1.equals(quickserverOrderTemplates3));
        System.assertEquals(false, quickserverOrderTemplates2.equals(quickserverOrderTemplates3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderTemplates quickserverOrderTemplates1 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates2 = new OASQuickserverOrderTemplates();

        System.assertEquals(quickserverOrderTemplates1.hashCode(), quickserverOrderTemplates1.hashCode());
        System.assertEquals(quickserverOrderTemplates2.hashCode(), quickserverOrderTemplates2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderTemplates quickserverOrderTemplates1 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates2 = OASQuickserverOrderTemplates.getExample();
        OASQuickserverOrderTemplates quickserverOrderTemplates3 = new OASQuickserverOrderTemplates();
        OASQuickserverOrderTemplates quickserverOrderTemplates4 = new OASQuickserverOrderTemplates();

        System.assert(quickserverOrderTemplates1.equals(quickserverOrderTemplates2));
        System.assert(quickserverOrderTemplates3.equals(quickserverOrderTemplates4));
        System.assertEquals(quickserverOrderTemplates1.hashCode(), quickserverOrderTemplates2.hashCode());
        System.assertEquals(quickserverOrderTemplates3.hashCode(), quickserverOrderTemplates4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrderTemplates quickserverOrderTemplates = new OASQuickserverOrderTemplates();
        Map<String, String> x-property-mappings = quickserverOrderTemplates.getx-property-mappings();
        System.assertEquals('ubuntu', x-property-mappings.get('Ubuntu'));
    }
}
