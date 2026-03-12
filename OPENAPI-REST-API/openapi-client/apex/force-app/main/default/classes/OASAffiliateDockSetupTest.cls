@isTest
private class OASAffiliateDockSetupTest {
    @isTest
    private static void equalsSameInstance() {
        OASAffiliateDockSetup affiliateDockSetup1 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup2 = affiliateDockSetup1;
        OASAffiliateDockSetup affiliateDockSetup3 = new OASAffiliateDockSetup();
        OASAffiliateDockSetup affiliateDockSetup4 = affiliateDockSetup3;

        System.assert(affiliateDockSetup1.equals(affiliateDockSetup2));
        System.assert(affiliateDockSetup2.equals(affiliateDockSetup1));
        System.assert(affiliateDockSetup1.equals(affiliateDockSetup1));
        System.assert(affiliateDockSetup3.equals(affiliateDockSetup4));
        System.assert(affiliateDockSetup4.equals(affiliateDockSetup3));
        System.assert(affiliateDockSetup3.equals(affiliateDockSetup3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAffiliateDockSetup affiliateDockSetup1 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup2 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup3 = new OASAffiliateDockSetup();
        OASAffiliateDockSetup affiliateDockSetup4 = new OASAffiliateDockSetup();

        System.assert(affiliateDockSetup1.equals(affiliateDockSetup2));
        System.assert(affiliateDockSetup2.equals(affiliateDockSetup1));
        System.assert(affiliateDockSetup3.equals(affiliateDockSetup4));
        System.assert(affiliateDockSetup4.equals(affiliateDockSetup3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAffiliateDockSetup affiliateDockSetup1 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup2 = new OASAffiliateDockSetup();

        System.assertEquals(false, affiliateDockSetup1.equals('foo'));
        System.assertEquals(false, affiliateDockSetup2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAffiliateDockSetup affiliateDockSetup1 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup2 = new OASAffiliateDockSetup();
        OASAffiliateDockSetup affiliateDockSetup3;

        System.assertEquals(false, affiliateDockSetup1.equals(affiliateDockSetup3));
        System.assertEquals(false, affiliateDockSetup2.equals(affiliateDockSetup3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAffiliateDockSetup affiliateDockSetup1 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup2 = new OASAffiliateDockSetup();

        System.assertEquals(affiliateDockSetup1.hashCode(), affiliateDockSetup1.hashCode());
        System.assertEquals(affiliateDockSetup2.hashCode(), affiliateDockSetup2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAffiliateDockSetup affiliateDockSetup1 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup2 = OASAffiliateDockSetup.getExample();
        OASAffiliateDockSetup affiliateDockSetup3 = new OASAffiliateDockSetup();
        OASAffiliateDockSetup affiliateDockSetup4 = new OASAffiliateDockSetup();

        System.assert(affiliateDockSetup1.equals(affiliateDockSetup2));
        System.assert(affiliateDockSetup3.equals(affiliateDockSetup4));
        System.assertEquals(affiliateDockSetup1.hashCode(), affiliateDockSetup2.hashCode());
        System.assertEquals(affiliateDockSetup3.hashCode(), affiliateDockSetup4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAffiliateDockSetup affiliateDockSetup = new OASAffiliateDockSetup();
        Map<String, String> x-property-mappings = affiliateDockSetup.getx-property-mappings();
        System.assertEquals('affiliateDockTitle', x-property-mappings.get('affiliate_dock_title'));
        System.assertEquals('affiliateDockDescription', x-property-mappings.get('affiliate_dock_description'));
        System.assertEquals('referrerCoupon', x-property-mappings.get('referrer_coupon'));
    }
}
