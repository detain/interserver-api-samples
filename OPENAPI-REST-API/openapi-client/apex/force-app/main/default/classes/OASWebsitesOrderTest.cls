@isTest
private class OASWebsitesOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASWebsitesOrder websitesOrder1 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder2 = websitesOrder1;
        OASWebsitesOrder websitesOrder3 = new OASWebsitesOrder();
        OASWebsitesOrder websitesOrder4 = websitesOrder3;

        System.assert(websitesOrder1.equals(websitesOrder2));
        System.assert(websitesOrder2.equals(websitesOrder1));
        System.assert(websitesOrder1.equals(websitesOrder1));
        System.assert(websitesOrder3.equals(websitesOrder4));
        System.assert(websitesOrder4.equals(websitesOrder3));
        System.assert(websitesOrder3.equals(websitesOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASWebsitesOrder websitesOrder1 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder2 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder3 = new OASWebsitesOrder();
        OASWebsitesOrder websitesOrder4 = new OASWebsitesOrder();

        System.assert(websitesOrder1.equals(websitesOrder2));
        System.assert(websitesOrder2.equals(websitesOrder1));
        System.assert(websitesOrder3.equals(websitesOrder4));
        System.assert(websitesOrder4.equals(websitesOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASWebsitesOrder websitesOrder1 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder2 = new OASWebsitesOrder();

        System.assertEquals(false, websitesOrder1.equals('foo'));
        System.assertEquals(false, websitesOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASWebsitesOrder websitesOrder1 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder2 = new OASWebsitesOrder();
        OASWebsitesOrder websitesOrder3;

        System.assertEquals(false, websitesOrder1.equals(websitesOrder3));
        System.assertEquals(false, websitesOrder2.equals(websitesOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASWebsitesOrder websitesOrder1 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder2 = new OASWebsitesOrder();

        System.assertEquals(websitesOrder1.hashCode(), websitesOrder1.hashCode());
        System.assertEquals(websitesOrder2.hashCode(), websitesOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASWebsitesOrder websitesOrder1 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder2 = OASWebsitesOrder.getExample();
        OASWebsitesOrder websitesOrder3 = new OASWebsitesOrder();
        OASWebsitesOrder websitesOrder4 = new OASWebsitesOrder();

        System.assert(websitesOrder1.equals(websitesOrder2));
        System.assert(websitesOrder3.equals(websitesOrder4));
        System.assertEquals(websitesOrder1.hashCode(), websitesOrder2.hashCode());
        System.assertEquals(websitesOrder3.hashCode(), websitesOrder4.hashCode());
    }
}
