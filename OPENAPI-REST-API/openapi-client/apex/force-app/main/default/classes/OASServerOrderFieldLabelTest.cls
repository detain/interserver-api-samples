@isTest
private class OASServerOrderFieldLabelTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderFieldLabel serverOrderFieldLabel1 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel2 = serverOrderFieldLabel1;
        OASServerOrderFieldLabel serverOrderFieldLabel3 = new OASServerOrderFieldLabel();
        OASServerOrderFieldLabel serverOrderFieldLabel4 = serverOrderFieldLabel3;

        System.assert(serverOrderFieldLabel1.equals(serverOrderFieldLabel2));
        System.assert(serverOrderFieldLabel2.equals(serverOrderFieldLabel1));
        System.assert(serverOrderFieldLabel1.equals(serverOrderFieldLabel1));
        System.assert(serverOrderFieldLabel3.equals(serverOrderFieldLabel4));
        System.assert(serverOrderFieldLabel4.equals(serverOrderFieldLabel3));
        System.assert(serverOrderFieldLabel3.equals(serverOrderFieldLabel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderFieldLabel serverOrderFieldLabel1 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel2 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel3 = new OASServerOrderFieldLabel();
        OASServerOrderFieldLabel serverOrderFieldLabel4 = new OASServerOrderFieldLabel();

        System.assert(serverOrderFieldLabel1.equals(serverOrderFieldLabel2));
        System.assert(serverOrderFieldLabel2.equals(serverOrderFieldLabel1));
        System.assert(serverOrderFieldLabel3.equals(serverOrderFieldLabel4));
        System.assert(serverOrderFieldLabel4.equals(serverOrderFieldLabel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderFieldLabel serverOrderFieldLabel1 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel2 = new OASServerOrderFieldLabel();

        System.assertEquals(false, serverOrderFieldLabel1.equals('foo'));
        System.assertEquals(false, serverOrderFieldLabel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderFieldLabel serverOrderFieldLabel1 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel2 = new OASServerOrderFieldLabel();
        OASServerOrderFieldLabel serverOrderFieldLabel3;

        System.assertEquals(false, serverOrderFieldLabel1.equals(serverOrderFieldLabel3));
        System.assertEquals(false, serverOrderFieldLabel2.equals(serverOrderFieldLabel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderFieldLabel serverOrderFieldLabel1 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel2 = new OASServerOrderFieldLabel();

        System.assertEquals(serverOrderFieldLabel1.hashCode(), serverOrderFieldLabel1.hashCode());
        System.assertEquals(serverOrderFieldLabel2.hashCode(), serverOrderFieldLabel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderFieldLabel serverOrderFieldLabel1 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel2 = OASServerOrderFieldLabel.getExample();
        OASServerOrderFieldLabel serverOrderFieldLabel3 = new OASServerOrderFieldLabel();
        OASServerOrderFieldLabel serverOrderFieldLabel4 = new OASServerOrderFieldLabel();

        System.assert(serverOrderFieldLabel1.equals(serverOrderFieldLabel2));
        System.assert(serverOrderFieldLabel3.equals(serverOrderFieldLabel4));
        System.assertEquals(serverOrderFieldLabel1.hashCode(), serverOrderFieldLabel2.hashCode());
        System.assertEquals(serverOrderFieldLabel3.hashCode(), serverOrderFieldLabel4.hashCode());
    }
}
