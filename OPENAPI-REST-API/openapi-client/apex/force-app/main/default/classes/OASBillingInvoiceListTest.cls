@isTest
private class OASBillingInvoiceListTest {
    @isTest
    private static void equalsSameInstance() {
        OASBillingInvoiceList billingInvoiceList1 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList2 = billingInvoiceList1;
        OASBillingInvoiceList billingInvoiceList3 = new OASBillingInvoiceList();
        OASBillingInvoiceList billingInvoiceList4 = billingInvoiceList3;

        System.assert(billingInvoiceList1.equals(billingInvoiceList2));
        System.assert(billingInvoiceList2.equals(billingInvoiceList1));
        System.assert(billingInvoiceList1.equals(billingInvoiceList1));
        System.assert(billingInvoiceList3.equals(billingInvoiceList4));
        System.assert(billingInvoiceList4.equals(billingInvoiceList3));
        System.assert(billingInvoiceList3.equals(billingInvoiceList3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBillingInvoiceList billingInvoiceList1 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList2 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList3 = new OASBillingInvoiceList();
        OASBillingInvoiceList billingInvoiceList4 = new OASBillingInvoiceList();

        System.assert(billingInvoiceList1.equals(billingInvoiceList2));
        System.assert(billingInvoiceList2.equals(billingInvoiceList1));
        System.assert(billingInvoiceList3.equals(billingInvoiceList4));
        System.assert(billingInvoiceList4.equals(billingInvoiceList3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBillingInvoiceList billingInvoiceList1 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList2 = new OASBillingInvoiceList();

        System.assertEquals(false, billingInvoiceList1.equals('foo'));
        System.assertEquals(false, billingInvoiceList2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBillingInvoiceList billingInvoiceList1 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList2 = new OASBillingInvoiceList();
        OASBillingInvoiceList billingInvoiceList3;

        System.assertEquals(false, billingInvoiceList1.equals(billingInvoiceList3));
        System.assertEquals(false, billingInvoiceList2.equals(billingInvoiceList3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBillingInvoiceList billingInvoiceList1 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList2 = new OASBillingInvoiceList();

        System.assertEquals(billingInvoiceList1.hashCode(), billingInvoiceList1.hashCode());
        System.assertEquals(billingInvoiceList2.hashCode(), billingInvoiceList2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBillingInvoiceList billingInvoiceList1 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList2 = OASBillingInvoiceList.getExample();
        OASBillingInvoiceList billingInvoiceList3 = new OASBillingInvoiceList();
        OASBillingInvoiceList billingInvoiceList4 = new OASBillingInvoiceList();

        System.assert(billingInvoiceList1.equals(billingInvoiceList2));
        System.assert(billingInvoiceList3.equals(billingInvoiceList4));
        System.assertEquals(billingInvoiceList1.hashCode(), billingInvoiceList2.hashCode());
        System.assertEquals(billingInvoiceList3.hashCode(), billingInvoiceList4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBillingInvoiceList billingInvoiceList = new OASBillingInvoiceList();
        System.assertEquals(new List<Object>(), billingInvoiceList.rows);
        System.assertEquals(null, billingInvoiceList.summary);
    }
}
