@isTest
private class OASServerOrderFieldLabelsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderFieldLabels serverOrderFieldLabels1 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels2 = serverOrderFieldLabels1;
        OASServerOrderFieldLabels serverOrderFieldLabels3 = new OASServerOrderFieldLabels();
        OASServerOrderFieldLabels serverOrderFieldLabels4 = serverOrderFieldLabels3;

        System.assert(serverOrderFieldLabels1.equals(serverOrderFieldLabels2));
        System.assert(serverOrderFieldLabels2.equals(serverOrderFieldLabels1));
        System.assert(serverOrderFieldLabels1.equals(serverOrderFieldLabels1));
        System.assert(serverOrderFieldLabels3.equals(serverOrderFieldLabels4));
        System.assert(serverOrderFieldLabels4.equals(serverOrderFieldLabels3));
        System.assert(serverOrderFieldLabels3.equals(serverOrderFieldLabels3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderFieldLabels serverOrderFieldLabels1 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels2 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels3 = new OASServerOrderFieldLabels();
        OASServerOrderFieldLabels serverOrderFieldLabels4 = new OASServerOrderFieldLabels();

        System.assert(serverOrderFieldLabels1.equals(serverOrderFieldLabels2));
        System.assert(serverOrderFieldLabels2.equals(serverOrderFieldLabels1));
        System.assert(serverOrderFieldLabels3.equals(serverOrderFieldLabels4));
        System.assert(serverOrderFieldLabels4.equals(serverOrderFieldLabels3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderFieldLabels serverOrderFieldLabels1 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels2 = new OASServerOrderFieldLabels();

        System.assertEquals(false, serverOrderFieldLabels1.equals('foo'));
        System.assertEquals(false, serverOrderFieldLabels2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderFieldLabels serverOrderFieldLabels1 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels2 = new OASServerOrderFieldLabels();
        OASServerOrderFieldLabels serverOrderFieldLabels3;

        System.assertEquals(false, serverOrderFieldLabels1.equals(serverOrderFieldLabels3));
        System.assertEquals(false, serverOrderFieldLabels2.equals(serverOrderFieldLabels3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderFieldLabels serverOrderFieldLabels1 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels2 = new OASServerOrderFieldLabels();

        System.assertEquals(serverOrderFieldLabels1.hashCode(), serverOrderFieldLabels1.hashCode());
        System.assertEquals(serverOrderFieldLabels2.hashCode(), serverOrderFieldLabels2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderFieldLabels serverOrderFieldLabels1 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels2 = OASServerOrderFieldLabels.getExample();
        OASServerOrderFieldLabels serverOrderFieldLabels3 = new OASServerOrderFieldLabels();
        OASServerOrderFieldLabels serverOrderFieldLabels4 = new OASServerOrderFieldLabels();

        System.assert(serverOrderFieldLabels1.equals(serverOrderFieldLabels2));
        System.assert(serverOrderFieldLabels3.equals(serverOrderFieldLabels4));
        System.assertEquals(serverOrderFieldLabels1.hashCode(), serverOrderFieldLabels2.hashCode());
        System.assertEquals(serverOrderFieldLabels3.hashCode(), serverOrderFieldLabels4.hashCode());
    }
}
