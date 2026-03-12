@isTest
private class OASBillingVerifyCcRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASBillingVerifyCcRequest billingVerifyCcRequest1 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest2 = billingVerifyCcRequest1;
        OASBillingVerifyCcRequest billingVerifyCcRequest3 = new OASBillingVerifyCcRequest();
        OASBillingVerifyCcRequest billingVerifyCcRequest4 = billingVerifyCcRequest3;

        System.assert(billingVerifyCcRequest1.equals(billingVerifyCcRequest2));
        System.assert(billingVerifyCcRequest2.equals(billingVerifyCcRequest1));
        System.assert(billingVerifyCcRequest1.equals(billingVerifyCcRequest1));
        System.assert(billingVerifyCcRequest3.equals(billingVerifyCcRequest4));
        System.assert(billingVerifyCcRequest4.equals(billingVerifyCcRequest3));
        System.assert(billingVerifyCcRequest3.equals(billingVerifyCcRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBillingVerifyCcRequest billingVerifyCcRequest1 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest2 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest3 = new OASBillingVerifyCcRequest();
        OASBillingVerifyCcRequest billingVerifyCcRequest4 = new OASBillingVerifyCcRequest();

        System.assert(billingVerifyCcRequest1.equals(billingVerifyCcRequest2));
        System.assert(billingVerifyCcRequest2.equals(billingVerifyCcRequest1));
        System.assert(billingVerifyCcRequest3.equals(billingVerifyCcRequest4));
        System.assert(billingVerifyCcRequest4.equals(billingVerifyCcRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBillingVerifyCcRequest billingVerifyCcRequest1 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest2 = new OASBillingVerifyCcRequest();

        System.assertEquals(false, billingVerifyCcRequest1.equals('foo'));
        System.assertEquals(false, billingVerifyCcRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBillingVerifyCcRequest billingVerifyCcRequest1 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest2 = new OASBillingVerifyCcRequest();
        OASBillingVerifyCcRequest billingVerifyCcRequest3;

        System.assertEquals(false, billingVerifyCcRequest1.equals(billingVerifyCcRequest3));
        System.assertEquals(false, billingVerifyCcRequest2.equals(billingVerifyCcRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBillingVerifyCcRequest billingVerifyCcRequest1 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest2 = new OASBillingVerifyCcRequest();

        System.assertEquals(billingVerifyCcRequest1.hashCode(), billingVerifyCcRequest1.hashCode());
        System.assertEquals(billingVerifyCcRequest2.hashCode(), billingVerifyCcRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBillingVerifyCcRequest billingVerifyCcRequest1 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest2 = OASBillingVerifyCcRequest.getExample();
        OASBillingVerifyCcRequest billingVerifyCcRequest3 = new OASBillingVerifyCcRequest();
        OASBillingVerifyCcRequest billingVerifyCcRequest4 = new OASBillingVerifyCcRequest();

        System.assert(billingVerifyCcRequest1.equals(billingVerifyCcRequest2));
        System.assert(billingVerifyCcRequest3.equals(billingVerifyCcRequest4));
        System.assertEquals(billingVerifyCcRequest1.hashCode(), billingVerifyCcRequest2.hashCode());
        System.assertEquals(billingVerifyCcRequest3.hashCode(), billingVerifyCcRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBillingVerifyCcRequest billingVerifyCcRequest = new OASBillingVerifyCcRequest();
        Map<String, String> x-property-mappings = billingVerifyCcRequest.getx-property-mappings();
        System.assertEquals('ccCcv2', x-property-mappings.get('cc_ccv2'));
        System.assertEquals('ccAmount1', x-property-mappings.get('cc_amount1'));
        System.assertEquals('ccAmount2', x-property-mappings.get('cc_amount2'));
    }
}
