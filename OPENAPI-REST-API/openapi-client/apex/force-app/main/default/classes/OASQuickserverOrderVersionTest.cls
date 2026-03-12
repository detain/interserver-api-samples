@isTest
private class OASQuickserverOrderVersionTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderVersion quickserverOrderVersion1 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion2 = quickserverOrderVersion1;
        OASQuickserverOrderVersion quickserverOrderVersion3 = new OASQuickserverOrderVersion();
        OASQuickserverOrderVersion quickserverOrderVersion4 = quickserverOrderVersion3;

        System.assert(quickserverOrderVersion1.equals(quickserverOrderVersion2));
        System.assert(quickserverOrderVersion2.equals(quickserverOrderVersion1));
        System.assert(quickserverOrderVersion1.equals(quickserverOrderVersion1));
        System.assert(quickserverOrderVersion3.equals(quickserverOrderVersion4));
        System.assert(quickserverOrderVersion4.equals(quickserverOrderVersion3));
        System.assert(quickserverOrderVersion3.equals(quickserverOrderVersion3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderVersion quickserverOrderVersion1 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion2 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion3 = new OASQuickserverOrderVersion();
        OASQuickserverOrderVersion quickserverOrderVersion4 = new OASQuickserverOrderVersion();

        System.assert(quickserverOrderVersion1.equals(quickserverOrderVersion2));
        System.assert(quickserverOrderVersion2.equals(quickserverOrderVersion1));
        System.assert(quickserverOrderVersion3.equals(quickserverOrderVersion4));
        System.assert(quickserverOrderVersion4.equals(quickserverOrderVersion3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderVersion quickserverOrderVersion1 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion2 = new OASQuickserverOrderVersion();

        System.assertEquals(false, quickserverOrderVersion1.equals('foo'));
        System.assertEquals(false, quickserverOrderVersion2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderVersion quickserverOrderVersion1 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion2 = new OASQuickserverOrderVersion();
        OASQuickserverOrderVersion quickserverOrderVersion3;

        System.assertEquals(false, quickserverOrderVersion1.equals(quickserverOrderVersion3));
        System.assertEquals(false, quickserverOrderVersion2.equals(quickserverOrderVersion3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderVersion quickserverOrderVersion1 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion2 = new OASQuickserverOrderVersion();

        System.assertEquals(quickserverOrderVersion1.hashCode(), quickserverOrderVersion1.hashCode());
        System.assertEquals(quickserverOrderVersion2.hashCode(), quickserverOrderVersion2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderVersion quickserverOrderVersion1 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion2 = OASQuickserverOrderVersion.getExample();
        OASQuickserverOrderVersion quickserverOrderVersion3 = new OASQuickserverOrderVersion();
        OASQuickserverOrderVersion quickserverOrderVersion4 = new OASQuickserverOrderVersion();

        System.assert(quickserverOrderVersion1.equals(quickserverOrderVersion2));
        System.assert(quickserverOrderVersion3.equals(quickserverOrderVersion4));
        System.assertEquals(quickserverOrderVersion1.hashCode(), quickserverOrderVersion2.hashCode());
        System.assertEquals(quickserverOrderVersion3.hashCode(), quickserverOrderVersion4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrderVersion quickserverOrderVersion = new OASQuickserverOrderVersion();
        Map<String, String> x-property-mappings = quickserverOrderVersion.getx-property-mappings();
        System.assertEquals('centosstream8', x-property-mappings.get('centosstream-8'));
    }
}
