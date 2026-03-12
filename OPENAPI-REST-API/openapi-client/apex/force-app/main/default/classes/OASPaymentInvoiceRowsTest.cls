@isTest
private class OASPaymentInvoiceRowsTest {
    @isTest
    private static void equalsSameInstance() {
        OASPaymentInvoiceRows paymentInvoiceRows1 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows2 = paymentInvoiceRows1;
        OASPaymentInvoiceRows paymentInvoiceRows3 = new OASPaymentInvoiceRows();
        OASPaymentInvoiceRows paymentInvoiceRows4 = paymentInvoiceRows3;

        System.assert(paymentInvoiceRows1.equals(paymentInvoiceRows2));
        System.assert(paymentInvoiceRows2.equals(paymentInvoiceRows1));
        System.assert(paymentInvoiceRows1.equals(paymentInvoiceRows1));
        System.assert(paymentInvoiceRows3.equals(paymentInvoiceRows4));
        System.assert(paymentInvoiceRows4.equals(paymentInvoiceRows3));
        System.assert(paymentInvoiceRows3.equals(paymentInvoiceRows3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPaymentInvoiceRows paymentInvoiceRows1 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows2 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows3 = new OASPaymentInvoiceRows();
        OASPaymentInvoiceRows paymentInvoiceRows4 = new OASPaymentInvoiceRows();

        System.assert(paymentInvoiceRows1.equals(paymentInvoiceRows2));
        System.assert(paymentInvoiceRows2.equals(paymentInvoiceRows1));
        System.assert(paymentInvoiceRows3.equals(paymentInvoiceRows4));
        System.assert(paymentInvoiceRows4.equals(paymentInvoiceRows3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPaymentInvoiceRows paymentInvoiceRows1 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows2 = new OASPaymentInvoiceRows();

        System.assertEquals(false, paymentInvoiceRows1.equals('foo'));
        System.assertEquals(false, paymentInvoiceRows2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPaymentInvoiceRows paymentInvoiceRows1 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows2 = new OASPaymentInvoiceRows();
        OASPaymentInvoiceRows paymentInvoiceRows3;

        System.assertEquals(false, paymentInvoiceRows1.equals(paymentInvoiceRows3));
        System.assertEquals(false, paymentInvoiceRows2.equals(paymentInvoiceRows3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPaymentInvoiceRows paymentInvoiceRows1 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows2 = new OASPaymentInvoiceRows();

        System.assertEquals(paymentInvoiceRows1.hashCode(), paymentInvoiceRows1.hashCode());
        System.assertEquals(paymentInvoiceRows2.hashCode(), paymentInvoiceRows2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPaymentInvoiceRows paymentInvoiceRows1 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows2 = OASPaymentInvoiceRows.getExample();
        OASPaymentInvoiceRows paymentInvoiceRows3 = new OASPaymentInvoiceRows();
        OASPaymentInvoiceRows paymentInvoiceRows4 = new OASPaymentInvoiceRows();

        System.assert(paymentInvoiceRows1.equals(paymentInvoiceRows2));
        System.assert(paymentInvoiceRows3.equals(paymentInvoiceRows4));
        System.assertEquals(paymentInvoiceRows1.hashCode(), paymentInvoiceRows2.hashCode());
        System.assertEquals(paymentInvoiceRows3.hashCode(), paymentInvoiceRows4.hashCode());
    }
}
