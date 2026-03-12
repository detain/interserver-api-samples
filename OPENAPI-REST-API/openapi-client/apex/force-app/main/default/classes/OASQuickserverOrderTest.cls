@isTest
private class OASQuickserverOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverOrder quickserverOrder1 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder2 = quickserverOrder1;
        OASQuickserverOrder quickserverOrder3 = new OASQuickserverOrder();
        OASQuickserverOrder quickserverOrder4 = quickserverOrder3;

        System.assert(quickserverOrder1.equals(quickserverOrder2));
        System.assert(quickserverOrder2.equals(quickserverOrder1));
        System.assert(quickserverOrder1.equals(quickserverOrder1));
        System.assert(quickserverOrder3.equals(quickserverOrder4));
        System.assert(quickserverOrder4.equals(quickserverOrder3));
        System.assert(quickserverOrder3.equals(quickserverOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverOrder quickserverOrder1 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder2 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder3 = new OASQuickserverOrder();
        OASQuickserverOrder quickserverOrder4 = new OASQuickserverOrder();

        System.assert(quickserverOrder1.equals(quickserverOrder2));
        System.assert(quickserverOrder2.equals(quickserverOrder1));
        System.assert(quickserverOrder3.equals(quickserverOrder4));
        System.assert(quickserverOrder4.equals(quickserverOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverOrder quickserverOrder1 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder2 = new OASQuickserverOrder();

        System.assertEquals(false, quickserverOrder1.equals('foo'));
        System.assertEquals(false, quickserverOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverOrder quickserverOrder1 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder2 = new OASQuickserverOrder();
        OASQuickserverOrder quickserverOrder3;

        System.assertEquals(false, quickserverOrder1.equals(quickserverOrder3));
        System.assertEquals(false, quickserverOrder2.equals(quickserverOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverOrder quickserverOrder1 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder2 = new OASQuickserverOrder();

        System.assertEquals(quickserverOrder1.hashCode(), quickserverOrder1.hashCode());
        System.assertEquals(quickserverOrder2.hashCode(), quickserverOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverOrder quickserverOrder1 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder2 = OASQuickserverOrder.getExample();
        OASQuickserverOrder quickserverOrder3 = new OASQuickserverOrder();
        OASQuickserverOrder quickserverOrder4 = new OASQuickserverOrder();

        System.assert(quickserverOrder1.equals(quickserverOrder2));
        System.assert(quickserverOrder3.equals(quickserverOrder4));
        System.assertEquals(quickserverOrder1.hashCode(), quickserverOrder2.hashCode());
        System.assertEquals(quickserverOrder3.hashCode(), quickserverOrder4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverOrder quickserverOrder = new OASQuickserverOrder();
        Map<String, String> x-property-mappings = quickserverOrder.getx-property-mappings();
        System.assertEquals('qsId', x-property-mappings.get('qs_id'));
        System.assertEquals('serverDetails', x-property-mappings.get('server_details'));
        System.assertEquals('distroSel', x-property-mappings.get('distro_sel'));
    }
}
