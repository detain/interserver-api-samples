@isTest
private class OASAffiliatePaymentSetupTest {
    @isTest
    private static void equalsSameInstance() {
        OASAffiliatePaymentSetup affiliatePaymentSetup1 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup2 = affiliatePaymentSetup1;
        OASAffiliatePaymentSetup affiliatePaymentSetup3 = new OASAffiliatePaymentSetup();
        OASAffiliatePaymentSetup affiliatePaymentSetup4 = affiliatePaymentSetup3;

        System.assert(affiliatePaymentSetup1.equals(affiliatePaymentSetup2));
        System.assert(affiliatePaymentSetup2.equals(affiliatePaymentSetup1));
        System.assert(affiliatePaymentSetup1.equals(affiliatePaymentSetup1));
        System.assert(affiliatePaymentSetup3.equals(affiliatePaymentSetup4));
        System.assert(affiliatePaymentSetup4.equals(affiliatePaymentSetup3));
        System.assert(affiliatePaymentSetup3.equals(affiliatePaymentSetup3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAffiliatePaymentSetup affiliatePaymentSetup1 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup2 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup3 = new OASAffiliatePaymentSetup();
        OASAffiliatePaymentSetup affiliatePaymentSetup4 = new OASAffiliatePaymentSetup();

        System.assert(affiliatePaymentSetup1.equals(affiliatePaymentSetup2));
        System.assert(affiliatePaymentSetup2.equals(affiliatePaymentSetup1));
        System.assert(affiliatePaymentSetup3.equals(affiliatePaymentSetup4));
        System.assert(affiliatePaymentSetup4.equals(affiliatePaymentSetup3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAffiliatePaymentSetup affiliatePaymentSetup1 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup2 = new OASAffiliatePaymentSetup();

        System.assertEquals(false, affiliatePaymentSetup1.equals('foo'));
        System.assertEquals(false, affiliatePaymentSetup2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAffiliatePaymentSetup affiliatePaymentSetup1 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup2 = new OASAffiliatePaymentSetup();
        OASAffiliatePaymentSetup affiliatePaymentSetup3;

        System.assertEquals(false, affiliatePaymentSetup1.equals(affiliatePaymentSetup3));
        System.assertEquals(false, affiliatePaymentSetup2.equals(affiliatePaymentSetup3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAffiliatePaymentSetup affiliatePaymentSetup1 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup2 = new OASAffiliatePaymentSetup();

        System.assertEquals(affiliatePaymentSetup1.hashCode(), affiliatePaymentSetup1.hashCode());
        System.assertEquals(affiliatePaymentSetup2.hashCode(), affiliatePaymentSetup2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAffiliatePaymentSetup affiliatePaymentSetup1 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup2 = OASAffiliatePaymentSetup.getExample();
        OASAffiliatePaymentSetup affiliatePaymentSetup3 = new OASAffiliatePaymentSetup();
        OASAffiliatePaymentSetup affiliatePaymentSetup4 = new OASAffiliatePaymentSetup();

        System.assert(affiliatePaymentSetup1.equals(affiliatePaymentSetup2));
        System.assert(affiliatePaymentSetup3.equals(affiliatePaymentSetup4));
        System.assertEquals(affiliatePaymentSetup1.hashCode(), affiliatePaymentSetup2.hashCode());
        System.assertEquals(affiliatePaymentSetup3.hashCode(), affiliatePaymentSetup4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAffiliatePaymentSetup affiliatePaymentSetup = new OASAffiliatePaymentSetup();
        Map<String, String> x-property-mappings = affiliatePaymentSetup.getx-property-mappings();
        System.assertEquals('affiliatePaypal', x-property-mappings.get('affiliate_paypal'));
        System.assertEquals('affiliatePaymentMethod', x-property-mappings.get('affiliate_payment_method'));
    }
}
