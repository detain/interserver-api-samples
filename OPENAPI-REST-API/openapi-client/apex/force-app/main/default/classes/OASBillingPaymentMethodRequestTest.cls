@isTest
private class OASBillingPaymentMethodRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest1 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest2 = billingPaymentMethodRequest1;
        OASBillingPaymentMethodRequest billingPaymentMethodRequest3 = new OASBillingPaymentMethodRequest();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest4 = billingPaymentMethodRequest3;

        System.assert(billingPaymentMethodRequest1.equals(billingPaymentMethodRequest2));
        System.assert(billingPaymentMethodRequest2.equals(billingPaymentMethodRequest1));
        System.assert(billingPaymentMethodRequest1.equals(billingPaymentMethodRequest1));
        System.assert(billingPaymentMethodRequest3.equals(billingPaymentMethodRequest4));
        System.assert(billingPaymentMethodRequest4.equals(billingPaymentMethodRequest3));
        System.assert(billingPaymentMethodRequest3.equals(billingPaymentMethodRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest1 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest2 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest3 = new OASBillingPaymentMethodRequest();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest4 = new OASBillingPaymentMethodRequest();

        System.assert(billingPaymentMethodRequest1.equals(billingPaymentMethodRequest2));
        System.assert(billingPaymentMethodRequest2.equals(billingPaymentMethodRequest1));
        System.assert(billingPaymentMethodRequest3.equals(billingPaymentMethodRequest4));
        System.assert(billingPaymentMethodRequest4.equals(billingPaymentMethodRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest1 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest2 = new OASBillingPaymentMethodRequest();

        System.assertEquals(false, billingPaymentMethodRequest1.equals('foo'));
        System.assertEquals(false, billingPaymentMethodRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest1 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest2 = new OASBillingPaymentMethodRequest();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest3;

        System.assertEquals(false, billingPaymentMethodRequest1.equals(billingPaymentMethodRequest3));
        System.assertEquals(false, billingPaymentMethodRequest2.equals(billingPaymentMethodRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest1 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest2 = new OASBillingPaymentMethodRequest();

        System.assertEquals(billingPaymentMethodRequest1.hashCode(), billingPaymentMethodRequest1.hashCode());
        System.assertEquals(billingPaymentMethodRequest2.hashCode(), billingPaymentMethodRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest1 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest2 = OASBillingPaymentMethodRequest.getExample();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest3 = new OASBillingPaymentMethodRequest();
        OASBillingPaymentMethodRequest billingPaymentMethodRequest4 = new OASBillingPaymentMethodRequest();

        System.assert(billingPaymentMethodRequest1.equals(billingPaymentMethodRequest2));
        System.assert(billingPaymentMethodRequest3.equals(billingPaymentMethodRequest4));
        System.assertEquals(billingPaymentMethodRequest1.hashCode(), billingPaymentMethodRequest2.hashCode());
        System.assertEquals(billingPaymentMethodRequest3.hashCode(), billingPaymentMethodRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBillingPaymentMethodRequest billingPaymentMethodRequest = new OASBillingPaymentMethodRequest();
        Map<String, String> x-property-mappings = billingPaymentMethodRequest.getx-property-mappings();
        System.assertEquals('paymentMethod', x-property-mappings.get('payment_method'));
        System.assertEquals('ccAuto', x-property-mappings.get('cc_auto'));
    }
}
