@isTest
private class OASInvoiceTest {
    @isTest
    private static void equalsSameInstance() {
        OASInvoice invoice1 = OASInvoice.getExample();
        OASInvoice invoice2 = invoice1;
        OASInvoice invoice3 = new OASInvoice();
        OASInvoice invoice4 = invoice3;

        System.assert(invoice1.equals(invoice2));
        System.assert(invoice2.equals(invoice1));
        System.assert(invoice1.equals(invoice1));
        System.assert(invoice3.equals(invoice4));
        System.assert(invoice4.equals(invoice3));
        System.assert(invoice3.equals(invoice3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASInvoice invoice1 = OASInvoice.getExample();
        OASInvoice invoice2 = OASInvoice.getExample();
        OASInvoice invoice3 = new OASInvoice();
        OASInvoice invoice4 = new OASInvoice();

        System.assert(invoice1.equals(invoice2));
        System.assert(invoice2.equals(invoice1));
        System.assert(invoice3.equals(invoice4));
        System.assert(invoice4.equals(invoice3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASInvoice invoice1 = OASInvoice.getExample();
        OASInvoice invoice2 = new OASInvoice();

        System.assertEquals(false, invoice1.equals('foo'));
        System.assertEquals(false, invoice2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASInvoice invoice1 = OASInvoice.getExample();
        OASInvoice invoice2 = new OASInvoice();
        OASInvoice invoice3;

        System.assertEquals(false, invoice1.equals(invoice3));
        System.assertEquals(false, invoice2.equals(invoice3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASInvoice invoice1 = OASInvoice.getExample();
        OASInvoice invoice2 = new OASInvoice();

        System.assertEquals(invoice1.hashCode(), invoice1.hashCode());
        System.assertEquals(invoice2.hashCode(), invoice2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASInvoice invoice1 = OASInvoice.getExample();
        OASInvoice invoice2 = OASInvoice.getExample();
        OASInvoice invoice3 = new OASInvoice();
        OASInvoice invoice4 = new OASInvoice();

        System.assert(invoice1.equals(invoice2));
        System.assert(invoice3.equals(invoice4));
        System.assertEquals(invoice1.hashCode(), invoice2.hashCode());
        System.assertEquals(invoice3.hashCode(), invoice4.hashCode());
    }
}
