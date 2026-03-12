@isTest
private class OASMailOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailOrder mailOrder1 = OASMailOrder.getExample();
        OASMailOrder mailOrder2 = mailOrder1;
        OASMailOrder mailOrder3 = new OASMailOrder();
        OASMailOrder mailOrder4 = mailOrder3;

        System.assert(mailOrder1.equals(mailOrder2));
        System.assert(mailOrder2.equals(mailOrder1));
        System.assert(mailOrder1.equals(mailOrder1));
        System.assert(mailOrder3.equals(mailOrder4));
        System.assert(mailOrder4.equals(mailOrder3));
        System.assert(mailOrder3.equals(mailOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailOrder mailOrder1 = OASMailOrder.getExample();
        OASMailOrder mailOrder2 = OASMailOrder.getExample();
        OASMailOrder mailOrder3 = new OASMailOrder();
        OASMailOrder mailOrder4 = new OASMailOrder();

        System.assert(mailOrder1.equals(mailOrder2));
        System.assert(mailOrder2.equals(mailOrder1));
        System.assert(mailOrder3.equals(mailOrder4));
        System.assert(mailOrder4.equals(mailOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailOrder mailOrder1 = OASMailOrder.getExample();
        OASMailOrder mailOrder2 = new OASMailOrder();

        System.assertEquals(false, mailOrder1.equals('foo'));
        System.assertEquals(false, mailOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailOrder mailOrder1 = OASMailOrder.getExample();
        OASMailOrder mailOrder2 = new OASMailOrder();
        OASMailOrder mailOrder3;

        System.assertEquals(false, mailOrder1.equals(mailOrder3));
        System.assertEquals(false, mailOrder2.equals(mailOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailOrder mailOrder1 = OASMailOrder.getExample();
        OASMailOrder mailOrder2 = new OASMailOrder();

        System.assertEquals(mailOrder1.hashCode(), mailOrder1.hashCode());
        System.assertEquals(mailOrder2.hashCode(), mailOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailOrder mailOrder1 = OASMailOrder.getExample();
        OASMailOrder mailOrder2 = OASMailOrder.getExample();
        OASMailOrder mailOrder3 = new OASMailOrder();
        OASMailOrder mailOrder4 = new OASMailOrder();

        System.assert(mailOrder1.equals(mailOrder2));
        System.assert(mailOrder3.equals(mailOrder4));
        System.assertEquals(mailOrder1.hashCode(), mailOrder2.hashCode());
        System.assertEquals(mailOrder3.hashCode(), mailOrder4.hashCode());
    }
}
