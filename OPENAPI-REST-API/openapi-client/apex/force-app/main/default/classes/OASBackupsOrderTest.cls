@isTest
private class OASBackupsOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupsOrder backupsOrder1 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder2 = backupsOrder1;
        OASBackupsOrder backupsOrder3 = new OASBackupsOrder();
        OASBackupsOrder backupsOrder4 = backupsOrder3;

        System.assert(backupsOrder1.equals(backupsOrder2));
        System.assert(backupsOrder2.equals(backupsOrder1));
        System.assert(backupsOrder1.equals(backupsOrder1));
        System.assert(backupsOrder3.equals(backupsOrder4));
        System.assert(backupsOrder4.equals(backupsOrder3));
        System.assert(backupsOrder3.equals(backupsOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupsOrder backupsOrder1 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder2 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder3 = new OASBackupsOrder();
        OASBackupsOrder backupsOrder4 = new OASBackupsOrder();

        System.assert(backupsOrder1.equals(backupsOrder2));
        System.assert(backupsOrder2.equals(backupsOrder1));
        System.assert(backupsOrder3.equals(backupsOrder4));
        System.assert(backupsOrder4.equals(backupsOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupsOrder backupsOrder1 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder2 = new OASBackupsOrder();

        System.assertEquals(false, backupsOrder1.equals('foo'));
        System.assertEquals(false, backupsOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupsOrder backupsOrder1 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder2 = new OASBackupsOrder();
        OASBackupsOrder backupsOrder3;

        System.assertEquals(false, backupsOrder1.equals(backupsOrder3));
        System.assertEquals(false, backupsOrder2.equals(backupsOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupsOrder backupsOrder1 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder2 = new OASBackupsOrder();

        System.assertEquals(backupsOrder1.hashCode(), backupsOrder1.hashCode());
        System.assertEquals(backupsOrder2.hashCode(), backupsOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupsOrder backupsOrder1 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder2 = OASBackupsOrder.getExample();
        OASBackupsOrder backupsOrder3 = new OASBackupsOrder();
        OASBackupsOrder backupsOrder4 = new OASBackupsOrder();

        System.assert(backupsOrder1.equals(backupsOrder2));
        System.assert(backupsOrder3.equals(backupsOrder4));
        System.assertEquals(backupsOrder1.hashCode(), backupsOrder2.hashCode());
        System.assertEquals(backupsOrder3.hashCode(), backupsOrder4.hashCode());
    }
}
