@isTest
private class OASInvoiceRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASInvoiceRow invoiceRow1 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow2 = invoiceRow1;
        OASInvoiceRow invoiceRow3 = new OASInvoiceRow();
        OASInvoiceRow invoiceRow4 = invoiceRow3;

        System.assert(invoiceRow1.equals(invoiceRow2));
        System.assert(invoiceRow2.equals(invoiceRow1));
        System.assert(invoiceRow1.equals(invoiceRow1));
        System.assert(invoiceRow3.equals(invoiceRow4));
        System.assert(invoiceRow4.equals(invoiceRow3));
        System.assert(invoiceRow3.equals(invoiceRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASInvoiceRow invoiceRow1 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow2 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow3 = new OASInvoiceRow();
        OASInvoiceRow invoiceRow4 = new OASInvoiceRow();

        System.assert(invoiceRow1.equals(invoiceRow2));
        System.assert(invoiceRow2.equals(invoiceRow1));
        System.assert(invoiceRow3.equals(invoiceRow4));
        System.assert(invoiceRow4.equals(invoiceRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASInvoiceRow invoiceRow1 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow2 = new OASInvoiceRow();

        System.assertEquals(false, invoiceRow1.equals('foo'));
        System.assertEquals(false, invoiceRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASInvoiceRow invoiceRow1 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow2 = new OASInvoiceRow();
        OASInvoiceRow invoiceRow3;

        System.assertEquals(false, invoiceRow1.equals(invoiceRow3));
        System.assertEquals(false, invoiceRow2.equals(invoiceRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASInvoiceRow invoiceRow1 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow2 = new OASInvoiceRow();

        System.assertEquals(invoiceRow1.hashCode(), invoiceRow1.hashCode());
        System.assertEquals(invoiceRow2.hashCode(), invoiceRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASInvoiceRow invoiceRow1 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow2 = OASInvoiceRow.getExample();
        OASInvoiceRow invoiceRow3 = new OASInvoiceRow();
        OASInvoiceRow invoiceRow4 = new OASInvoiceRow();

        System.assert(invoiceRow1.equals(invoiceRow2));
        System.assert(invoiceRow3.equals(invoiceRow4));
        System.assertEquals(invoiceRow1.hashCode(), invoiceRow2.hashCode());
        System.assertEquals(invoiceRow3.hashCode(), invoiceRow4.hashCode());
    }
}
