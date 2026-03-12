@isTest
private class OASQuickserverOrderVersionCentosstreTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream81 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream82 = quickserverOrderVersionCentosstream81;
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream83 = new OASQuickserverOrderVersionCentosstre();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream84 = quickserverOrderVersionCentosstream83;

        System.assert(quickserverOrderVersionCentosstream81.equals(quickserverOrderVersionCentosstream82));
        System.assert(quickserverOrderVersionCentosstream82.equals(quickserverOrderVersionCentosstream81));
        System.assert(quickserverOrderVersionCentosstream81.equals(quickserverOrderVersionCentosstream81));
        System.assert(quickserverOrderVersionCentosstream83.equals(quickserverOrderVersionCentosstream84));
        System.assert(quickserverOrderVersionCentosstream84.equals(quickserverOrderVersionCentosstream83));
        System.assert(quickserverOrderVersionCentosstream83.equals(quickserverOrderVersionCentosstream83));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream81 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream82 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream83 = new OASQuickserverOrderVersionCentosstre();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream84 = new OASQuickserverOrderVersionCentosstre();

        System.assert(quickserverOrderVersionCentosstream81.equals(quickserverOrderVersionCentosstream82));
        System.assert(quickserverOrderVersionCentosstream82.equals(quickserverOrderVersionCentosstream81));
        System.assert(quickserverOrderVersionCentosstream83.equals(quickserverOrderVersionCentosstream84));
        System.assert(quickserverOrderVersionCentosstream84.equals(quickserverOrderVersionCentosstream83));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream81 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream82 = new OASQuickserverOrderVersionCentosstre();

        System.assertEquals(false, quickserverOrderVersionCentosstream81.equals('foo'));
        System.assertEquals(false, quickserverOrderVersionCentosstream82.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream81 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream82 = new OASQuickserverOrderVersionCentosstre();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream83;

        System.assertEquals(false, quickserverOrderVersionCentosstream81.equals(quickserverOrderVersionCentosstream83));
        System.assertEquals(false, quickserverOrderVersionCentosstream82.equals(quickserverOrderVersionCentosstream83));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream81 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream82 = new OASQuickserverOrderVersionCentosstre();

        System.assertEquals(quickserverOrderVersionCentosstream81.hashCode(), quickserverOrderVersionCentosstream81.hashCode());
        System.assertEquals(quickserverOrderVersionCentosstream82.hashCode(), quickserverOrderVersionCentosstream82.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream81 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream82 = OASQuickserverOrderVersionCentosstre.getExample();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream83 = new OASQuickserverOrderVersionCentosstre();
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream84 = new OASQuickserverOrderVersionCentosstre();

        System.assert(quickserverOrderVersionCentosstream81.equals(quickserverOrderVersionCentosstream82));
        System.assert(quickserverOrderVersionCentosstream83.equals(quickserverOrderVersionCentosstream84));
        System.assertEquals(quickserverOrderVersionCentosstream81.hashCode(), quickserverOrderVersionCentosstream82.hashCode());
        System.assertEquals(quickserverOrderVersionCentosstream83.hashCode(), quickserverOrderVersionCentosstream84.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrderVersionCentosstre quickserverOrderVersionCentosstream8 = new OASQuickserverOrderVersionCentosstre();
        Map<String, String> x-property-mappings = quickserverOrderVersionCentosstream8.getx-property-mappings();
        System.assertEquals('centosstream8', x-property-mappings.get('centosstream-8'));
    }
}
