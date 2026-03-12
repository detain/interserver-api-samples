@isTest
private class OASQuickserversCancel200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserversCancel200Response quickserversCancel200Response1 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response2 = quickserversCancel200Response1;
        OASQuickserversCancel200Response quickserversCancel200Response3 = new OASQuickserversCancel200Response();
        OASQuickserversCancel200Response quickserversCancel200Response4 = quickserversCancel200Response3;

        System.assert(quickserversCancel200Response1.equals(quickserversCancel200Response2));
        System.assert(quickserversCancel200Response2.equals(quickserversCancel200Response1));
        System.assert(quickserversCancel200Response1.equals(quickserversCancel200Response1));
        System.assert(quickserversCancel200Response3.equals(quickserversCancel200Response4));
        System.assert(quickserversCancel200Response4.equals(quickserversCancel200Response3));
        System.assert(quickserversCancel200Response3.equals(quickserversCancel200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserversCancel200Response quickserversCancel200Response1 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response2 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response3 = new OASQuickserversCancel200Response();
        OASQuickserversCancel200Response quickserversCancel200Response4 = new OASQuickserversCancel200Response();

        System.assert(quickserversCancel200Response1.equals(quickserversCancel200Response2));
        System.assert(quickserversCancel200Response2.equals(quickserversCancel200Response1));
        System.assert(quickserversCancel200Response3.equals(quickserversCancel200Response4));
        System.assert(quickserversCancel200Response4.equals(quickserversCancel200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserversCancel200Response quickserversCancel200Response1 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response2 = new OASQuickserversCancel200Response();

        System.assertEquals(false, quickserversCancel200Response1.equals('foo'));
        System.assertEquals(false, quickserversCancel200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserversCancel200Response quickserversCancel200Response1 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response2 = new OASQuickserversCancel200Response();
        OASQuickserversCancel200Response quickserversCancel200Response3;

        System.assertEquals(false, quickserversCancel200Response1.equals(quickserversCancel200Response3));
        System.assertEquals(false, quickserversCancel200Response2.equals(quickserversCancel200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserversCancel200Response quickserversCancel200Response1 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response2 = new OASQuickserversCancel200Response();

        System.assertEquals(quickserversCancel200Response1.hashCode(), quickserversCancel200Response1.hashCode());
        System.assertEquals(quickserversCancel200Response2.hashCode(), quickserversCancel200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserversCancel200Response quickserversCancel200Response1 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response2 = OASQuickserversCancel200Response.getExample();
        OASQuickserversCancel200Response quickserversCancel200Response3 = new OASQuickserversCancel200Response();
        OASQuickserversCancel200Response quickserversCancel200Response4 = new OASQuickserversCancel200Response();

        System.assert(quickserversCancel200Response1.equals(quickserversCancel200Response2));
        System.assert(quickserversCancel200Response3.equals(quickserversCancel200Response4));
        System.assertEquals(quickserversCancel200Response1.hashCode(), quickserversCancel200Response2.hashCode());
        System.assertEquals(quickserversCancel200Response3.hashCode(), quickserversCancel200Response4.hashCode());
    }
}
