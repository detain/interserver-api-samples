@isTest
private class OASChargeInvoiceRowsTest {
    @isTest
    private static void equalsSameInstance() {
        OASChargeInvoiceRows chargeInvoiceRows1 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows2 = chargeInvoiceRows1;
        OASChargeInvoiceRows chargeInvoiceRows3 = new OASChargeInvoiceRows();
        OASChargeInvoiceRows chargeInvoiceRows4 = chargeInvoiceRows3;

        System.assert(chargeInvoiceRows1.equals(chargeInvoiceRows2));
        System.assert(chargeInvoiceRows2.equals(chargeInvoiceRows1));
        System.assert(chargeInvoiceRows1.equals(chargeInvoiceRows1));
        System.assert(chargeInvoiceRows3.equals(chargeInvoiceRows4));
        System.assert(chargeInvoiceRows4.equals(chargeInvoiceRows3));
        System.assert(chargeInvoiceRows3.equals(chargeInvoiceRows3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASChargeInvoiceRows chargeInvoiceRows1 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows2 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows3 = new OASChargeInvoiceRows();
        OASChargeInvoiceRows chargeInvoiceRows4 = new OASChargeInvoiceRows();

        System.assert(chargeInvoiceRows1.equals(chargeInvoiceRows2));
        System.assert(chargeInvoiceRows2.equals(chargeInvoiceRows1));
        System.assert(chargeInvoiceRows3.equals(chargeInvoiceRows4));
        System.assert(chargeInvoiceRows4.equals(chargeInvoiceRows3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASChargeInvoiceRows chargeInvoiceRows1 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows2 = new OASChargeInvoiceRows();

        System.assertEquals(false, chargeInvoiceRows1.equals('foo'));
        System.assertEquals(false, chargeInvoiceRows2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASChargeInvoiceRows chargeInvoiceRows1 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows2 = new OASChargeInvoiceRows();
        OASChargeInvoiceRows chargeInvoiceRows3;

        System.assertEquals(false, chargeInvoiceRows1.equals(chargeInvoiceRows3));
        System.assertEquals(false, chargeInvoiceRows2.equals(chargeInvoiceRows3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASChargeInvoiceRows chargeInvoiceRows1 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows2 = new OASChargeInvoiceRows();

        System.assertEquals(chargeInvoiceRows1.hashCode(), chargeInvoiceRows1.hashCode());
        System.assertEquals(chargeInvoiceRows2.hashCode(), chargeInvoiceRows2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASChargeInvoiceRows chargeInvoiceRows1 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows2 = OASChargeInvoiceRows.getExample();
        OASChargeInvoiceRows chargeInvoiceRows3 = new OASChargeInvoiceRows();
        OASChargeInvoiceRows chargeInvoiceRows4 = new OASChargeInvoiceRows();

        System.assert(chargeInvoiceRows1.equals(chargeInvoiceRows2));
        System.assert(chargeInvoiceRows3.equals(chargeInvoiceRows4));
        System.assertEquals(chargeInvoiceRows1.hashCode(), chargeInvoiceRows2.hashCode());
        System.assertEquals(chargeInvoiceRows3.hashCode(), chargeInvoiceRows4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASChargeInvoiceRows chargeInvoiceRows = new OASChargeInvoiceRows();
        System.assertEquals(new Map<String, OASChargeInvoiceRowsInvoicesValue>(), chargeInvoiceRows.invoices);
        System.assertEquals(null, chargeInvoiceRows.success);
    }
}
