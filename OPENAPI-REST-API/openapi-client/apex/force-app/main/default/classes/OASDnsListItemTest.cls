@isTest
private class OASDnsListItemTest {
    @isTest
    private static void equalsSameInstance() {
        OASDnsListItem dnsListItem1 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem2 = dnsListItem1;
        OASDnsListItem dnsListItem3 = new OASDnsListItem();
        OASDnsListItem dnsListItem4 = dnsListItem3;

        System.assert(dnsListItem1.equals(dnsListItem2));
        System.assert(dnsListItem2.equals(dnsListItem1));
        System.assert(dnsListItem1.equals(dnsListItem1));
        System.assert(dnsListItem3.equals(dnsListItem4));
        System.assert(dnsListItem4.equals(dnsListItem3));
        System.assert(dnsListItem3.equals(dnsListItem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDnsListItem dnsListItem1 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem2 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem3 = new OASDnsListItem();
        OASDnsListItem dnsListItem4 = new OASDnsListItem();

        System.assert(dnsListItem1.equals(dnsListItem2));
        System.assert(dnsListItem2.equals(dnsListItem1));
        System.assert(dnsListItem3.equals(dnsListItem4));
        System.assert(dnsListItem4.equals(dnsListItem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDnsListItem dnsListItem1 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem2 = new OASDnsListItem();

        System.assertEquals(false, dnsListItem1.equals('foo'));
        System.assertEquals(false, dnsListItem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDnsListItem dnsListItem1 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem2 = new OASDnsListItem();
        OASDnsListItem dnsListItem3;

        System.assertEquals(false, dnsListItem1.equals(dnsListItem3));
        System.assertEquals(false, dnsListItem2.equals(dnsListItem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDnsListItem dnsListItem1 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem2 = new OASDnsListItem();

        System.assertEquals(dnsListItem1.hashCode(), dnsListItem1.hashCode());
        System.assertEquals(dnsListItem2.hashCode(), dnsListItem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDnsListItem dnsListItem1 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem2 = OASDnsListItem.getExample();
        OASDnsListItem dnsListItem3 = new OASDnsListItem();
        OASDnsListItem dnsListItem4 = new OASDnsListItem();

        System.assert(dnsListItem1.equals(dnsListItem2));
        System.assert(dnsListItem3.equals(dnsListItem4));
        System.assertEquals(dnsListItem1.hashCode(), dnsListItem2.hashCode());
        System.assertEquals(dnsListItem3.hashCode(), dnsListItem4.hashCode());
    }
}
