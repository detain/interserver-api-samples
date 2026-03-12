@isTest
private class OASChargeInvoiceRowsInvoicesValuePaiTest {
    @isTest
    private static void equalsSameInstance() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue1 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue2 = chargeInvoiceRowsInvoicesValuePaidInvoicesValue1;
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue3 = new OASChargeInvoiceRowsInvoicesValuePai();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue4 = chargeInvoiceRowsInvoicesValuePaidInvoicesValue3;

        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue2));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue4));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue4.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue1 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue2 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue3 = new OASChargeInvoiceRowsInvoicesValuePai();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue4 = new OASChargeInvoiceRowsInvoicesValuePai();

        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue2));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue4));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue4.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue1 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue2 = new OASChargeInvoiceRowsInvoicesValuePai();

        System.assertEquals(false, chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.equals('foo'));
        System.assertEquals(false, chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue1 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue2 = new OASChargeInvoiceRowsInvoicesValuePai();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue3;

        System.assertEquals(false, chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3));
        System.assertEquals(false, chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue1 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue2 = new OASChargeInvoiceRowsInvoicesValuePai();

        System.assertEquals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.hashCode(), chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.hashCode());
        System.assertEquals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.hashCode(), chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue1 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue2 = OASChargeInvoiceRowsInvoicesValuePai.getExample();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue3 = new OASChargeInvoiceRowsInvoicesValuePai();
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue4 = new OASChargeInvoiceRowsInvoicesValuePai();

        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue2));
        System.assert(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3.equals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue4));
        System.assertEquals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue1.hashCode(), chargeInvoiceRowsInvoicesValuePaidInvoicesValue2.hashCode());
        System.assertEquals(chargeInvoiceRowsInvoicesValuePaidInvoicesValue3.hashCode(), chargeInvoiceRowsInvoicesValuePaidInvoicesValue4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue = new OASChargeInvoiceRowsInvoicesValuePai();
        Map<String, String> x-property-mappings = chargeInvoiceRowsInvoicesValuePaidInvoicesValue.getx-property-mappings();
        System.assertEquals('invoicesId', x-property-mappings.get('invoices_id'));
        System.assertEquals('invoicesDescription', x-property-mappings.get('invoices_description'));
        System.assertEquals('invoicesAmount', x-property-mappings.get('invoices_amount'));
        System.assertEquals('invoicesDate', x-property-mappings.get('invoices_date'));
        System.assertEquals('invoicesCurrency', x-property-mappings.get('invoices_currency'));
        System.assertEquals('currencySymbol', x-property-mappings.get('currency_symbol'));
        System.assertEquals('invoicesDateFormatted', x-property-mappings.get('invoices_date_formatted'));
        System.assertEquals('paymentType', x-property-mappings.get('payment_type'));
        System.assertEquals('refundInvoices', x-property-mappings.get('refund_invoices'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASChargeInvoiceRowsInvoicesValuePai chargeInvoiceRowsInvoicesValuePaidInvoicesValue = new OASChargeInvoiceRowsInvoicesValuePai();
        System.assertEquals(new Map<String, OASChargeInvoiceRowsInvoicesValuePai>(), chargeInvoiceRowsInvoicesValuePaidInvoicesValue.refundInvoices);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesId);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesDescription);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesAmount);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesDate);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesCurrency);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.currencySymbol);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.invoicesDateFormatted);
        System.assertEquals(null, chargeInvoiceRowsInvoicesValuePaidInvoicesValue.paymentType);
    }
}
