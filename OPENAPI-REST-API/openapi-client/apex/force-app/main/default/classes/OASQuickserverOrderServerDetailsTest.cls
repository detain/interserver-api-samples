@isTest
private class OASQuickserverOrderServerDetailsTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails1 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails2 = quickserverOrderServerDetails1;
        OASQuickserverOrderServerDetails quickserverOrderServerDetails3 = new OASQuickserverOrderServerDetails();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails4 = quickserverOrderServerDetails3;

        System.assert(quickserverOrderServerDetails1.equals(quickserverOrderServerDetails2));
        System.assert(quickserverOrderServerDetails2.equals(quickserverOrderServerDetails1));
        System.assert(quickserverOrderServerDetails1.equals(quickserverOrderServerDetails1));
        System.assert(quickserverOrderServerDetails3.equals(quickserverOrderServerDetails4));
        System.assert(quickserverOrderServerDetails4.equals(quickserverOrderServerDetails3));
        System.assert(quickserverOrderServerDetails3.equals(quickserverOrderServerDetails3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails1 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails2 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails3 = new OASQuickserverOrderServerDetails();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails4 = new OASQuickserverOrderServerDetails();

        System.assert(quickserverOrderServerDetails1.equals(quickserverOrderServerDetails2));
        System.assert(quickserverOrderServerDetails2.equals(quickserverOrderServerDetails1));
        System.assert(quickserverOrderServerDetails3.equals(quickserverOrderServerDetails4));
        System.assert(quickserverOrderServerDetails4.equals(quickserverOrderServerDetails3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails1 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails2 = new OASQuickserverOrderServerDetails();

        System.assertEquals(false, quickserverOrderServerDetails1.equals('foo'));
        System.assertEquals(false, quickserverOrderServerDetails2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails1 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails2 = new OASQuickserverOrderServerDetails();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails3;

        System.assertEquals(false, quickserverOrderServerDetails1.equals(quickserverOrderServerDetails3));
        System.assertEquals(false, quickserverOrderServerDetails2.equals(quickserverOrderServerDetails3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails1 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails2 = new OASQuickserverOrderServerDetails();

        System.assertEquals(quickserverOrderServerDetails1.hashCode(), quickserverOrderServerDetails1.hashCode());
        System.assertEquals(quickserverOrderServerDetails2.hashCode(), quickserverOrderServerDetails2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails1 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails2 = OASQuickserverOrderServerDetails.getExample();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails3 = new OASQuickserverOrderServerDetails();
        OASQuickserverOrderServerDetails quickserverOrderServerDetails4 = new OASQuickserverOrderServerDetails();

        System.assert(quickserverOrderServerDetails1.equals(quickserverOrderServerDetails2));
        System.assert(quickserverOrderServerDetails3.equals(quickserverOrderServerDetails4));
        System.assertEquals(quickserverOrderServerDetails1.hashCode(), quickserverOrderServerDetails2.hashCode());
        System.assertEquals(quickserverOrderServerDetails3.hashCode(), quickserverOrderServerDetails4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrderServerDetails quickserverOrderServerDetails = new OASQuickserverOrderServerDetails();
        Map<String, String> x-property-mappings = quickserverOrderServerDetails.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('381'));
    }
}
