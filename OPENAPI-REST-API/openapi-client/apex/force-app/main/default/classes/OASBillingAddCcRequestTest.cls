@isTest
private class OASBillingAddCcRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASBillingAddCcRequest billingAddCcRequest1 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest2 = billingAddCcRequest1;
        OASBillingAddCcRequest billingAddCcRequest3 = new OASBillingAddCcRequest();
        OASBillingAddCcRequest billingAddCcRequest4 = billingAddCcRequest3;

        System.assert(billingAddCcRequest1.equals(billingAddCcRequest2));
        System.assert(billingAddCcRequest2.equals(billingAddCcRequest1));
        System.assert(billingAddCcRequest1.equals(billingAddCcRequest1));
        System.assert(billingAddCcRequest3.equals(billingAddCcRequest4));
        System.assert(billingAddCcRequest4.equals(billingAddCcRequest3));
        System.assert(billingAddCcRequest3.equals(billingAddCcRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBillingAddCcRequest billingAddCcRequest1 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest2 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest3 = new OASBillingAddCcRequest();
        OASBillingAddCcRequest billingAddCcRequest4 = new OASBillingAddCcRequest();

        System.assert(billingAddCcRequest1.equals(billingAddCcRequest2));
        System.assert(billingAddCcRequest2.equals(billingAddCcRequest1));
        System.assert(billingAddCcRequest3.equals(billingAddCcRequest4));
        System.assert(billingAddCcRequest4.equals(billingAddCcRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBillingAddCcRequest billingAddCcRequest1 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest2 = new OASBillingAddCcRequest();

        System.assertEquals(false, billingAddCcRequest1.equals('foo'));
        System.assertEquals(false, billingAddCcRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBillingAddCcRequest billingAddCcRequest1 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest2 = new OASBillingAddCcRequest();
        OASBillingAddCcRequest billingAddCcRequest3;

        System.assertEquals(false, billingAddCcRequest1.equals(billingAddCcRequest3));
        System.assertEquals(false, billingAddCcRequest2.equals(billingAddCcRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBillingAddCcRequest billingAddCcRequest1 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest2 = new OASBillingAddCcRequest();

        System.assertEquals(billingAddCcRequest1.hashCode(), billingAddCcRequest1.hashCode());
        System.assertEquals(billingAddCcRequest2.hashCode(), billingAddCcRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBillingAddCcRequest billingAddCcRequest1 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest2 = OASBillingAddCcRequest.getExample();
        OASBillingAddCcRequest billingAddCcRequest3 = new OASBillingAddCcRequest();
        OASBillingAddCcRequest billingAddCcRequest4 = new OASBillingAddCcRequest();

        System.assert(billingAddCcRequest1.equals(billingAddCcRequest2));
        System.assert(billingAddCcRequest3.equals(billingAddCcRequest4));
        System.assertEquals(billingAddCcRequest1.hashCode(), billingAddCcRequest2.hashCode());
        System.assertEquals(billingAddCcRequest3.hashCode(), billingAddCcRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBillingAddCcRequest billingAddCcRequest = new OASBillingAddCcRequest();
        Map<String, String> x-property-mappings = billingAddCcRequest.getx-property-mappings();
        System.assertEquals('ccExp', x-property-mappings.get('cc_exp'));
        System.assertEquals('ccCcv2', x-property-mappings.get('cc_ccv2'));
    }
}
