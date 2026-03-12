@isTest
private class OASBillingInvoiceDetailTest {
    @isTest
    private static void equalsSameInstance() {
        OASBillingInvoiceDetail billingInvoiceDetail1 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail2 = billingInvoiceDetail1;
        OASBillingInvoiceDetail billingInvoiceDetail3 = new OASBillingInvoiceDetail();
        OASBillingInvoiceDetail billingInvoiceDetail4 = billingInvoiceDetail3;

        System.assert(billingInvoiceDetail1.equals(billingInvoiceDetail2));
        System.assert(billingInvoiceDetail2.equals(billingInvoiceDetail1));
        System.assert(billingInvoiceDetail1.equals(billingInvoiceDetail1));
        System.assert(billingInvoiceDetail3.equals(billingInvoiceDetail4));
        System.assert(billingInvoiceDetail4.equals(billingInvoiceDetail3));
        System.assert(billingInvoiceDetail3.equals(billingInvoiceDetail3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBillingInvoiceDetail billingInvoiceDetail1 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail2 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail3 = new OASBillingInvoiceDetail();
        OASBillingInvoiceDetail billingInvoiceDetail4 = new OASBillingInvoiceDetail();

        System.assert(billingInvoiceDetail1.equals(billingInvoiceDetail2));
        System.assert(billingInvoiceDetail2.equals(billingInvoiceDetail1));
        System.assert(billingInvoiceDetail3.equals(billingInvoiceDetail4));
        System.assert(billingInvoiceDetail4.equals(billingInvoiceDetail3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBillingInvoiceDetail billingInvoiceDetail1 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail2 = new OASBillingInvoiceDetail();

        System.assertEquals(false, billingInvoiceDetail1.equals('foo'));
        System.assertEquals(false, billingInvoiceDetail2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBillingInvoiceDetail billingInvoiceDetail1 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail2 = new OASBillingInvoiceDetail();
        OASBillingInvoiceDetail billingInvoiceDetail3;

        System.assertEquals(false, billingInvoiceDetail1.equals(billingInvoiceDetail3));
        System.assertEquals(false, billingInvoiceDetail2.equals(billingInvoiceDetail3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBillingInvoiceDetail billingInvoiceDetail1 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail2 = new OASBillingInvoiceDetail();

        System.assertEquals(billingInvoiceDetail1.hashCode(), billingInvoiceDetail1.hashCode());
        System.assertEquals(billingInvoiceDetail2.hashCode(), billingInvoiceDetail2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBillingInvoiceDetail billingInvoiceDetail1 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail2 = OASBillingInvoiceDetail.getExample();
        OASBillingInvoiceDetail billingInvoiceDetail3 = new OASBillingInvoiceDetail();
        OASBillingInvoiceDetail billingInvoiceDetail4 = new OASBillingInvoiceDetail();

        System.assert(billingInvoiceDetail1.equals(billingInvoiceDetail2));
        System.assert(billingInvoiceDetail3.equals(billingInvoiceDetail4));
        System.assertEquals(billingInvoiceDetail1.hashCode(), billingInvoiceDetail2.hashCode());
        System.assertEquals(billingInvoiceDetail3.hashCode(), billingInvoiceDetail4.hashCode());
    }
}
