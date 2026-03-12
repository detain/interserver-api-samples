@isTest
private class OASLicensesOrderTest {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesOrder licensesOrder1 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder2 = licensesOrder1;
        OASLicensesOrder licensesOrder3 = new OASLicensesOrder();
        OASLicensesOrder licensesOrder4 = licensesOrder3;

        System.assert(licensesOrder1.equals(licensesOrder2));
        System.assert(licensesOrder2.equals(licensesOrder1));
        System.assert(licensesOrder1.equals(licensesOrder1));
        System.assert(licensesOrder3.equals(licensesOrder4));
        System.assert(licensesOrder4.equals(licensesOrder3));
        System.assert(licensesOrder3.equals(licensesOrder3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesOrder licensesOrder1 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder2 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder3 = new OASLicensesOrder();
        OASLicensesOrder licensesOrder4 = new OASLicensesOrder();

        System.assert(licensesOrder1.equals(licensesOrder2));
        System.assert(licensesOrder2.equals(licensesOrder1));
        System.assert(licensesOrder3.equals(licensesOrder4));
        System.assert(licensesOrder4.equals(licensesOrder3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesOrder licensesOrder1 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder2 = new OASLicensesOrder();

        System.assertEquals(false, licensesOrder1.equals('foo'));
        System.assertEquals(false, licensesOrder2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesOrder licensesOrder1 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder2 = new OASLicensesOrder();
        OASLicensesOrder licensesOrder3;

        System.assertEquals(false, licensesOrder1.equals(licensesOrder3));
        System.assertEquals(false, licensesOrder2.equals(licensesOrder3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesOrder licensesOrder1 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder2 = new OASLicensesOrder();

        System.assertEquals(licensesOrder1.hashCode(), licensesOrder1.hashCode());
        System.assertEquals(licensesOrder2.hashCode(), licensesOrder2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesOrder licensesOrder1 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder2 = OASLicensesOrder.getExample();
        OASLicensesOrder licensesOrder3 = new OASLicensesOrder();
        OASLicensesOrder licensesOrder4 = new OASLicensesOrder();

        System.assert(licensesOrder1.equals(licensesOrder2));
        System.assert(licensesOrder3.equals(licensesOrder4));
        System.assertEquals(licensesOrder1.hashCode(), licensesOrder2.hashCode());
        System.assertEquals(licensesOrder3.hashCode(), licensesOrder4.hashCode());
    }
}
