@isTest
private class OASAffiliateTrafficRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASAffiliateTrafficRow affiliateTrafficRow1 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow2 = affiliateTrafficRow1;
        OASAffiliateTrafficRow affiliateTrafficRow3 = new OASAffiliateTrafficRow();
        OASAffiliateTrafficRow affiliateTrafficRow4 = affiliateTrafficRow3;

        System.assert(affiliateTrafficRow1.equals(affiliateTrafficRow2));
        System.assert(affiliateTrafficRow2.equals(affiliateTrafficRow1));
        System.assert(affiliateTrafficRow1.equals(affiliateTrafficRow1));
        System.assert(affiliateTrafficRow3.equals(affiliateTrafficRow4));
        System.assert(affiliateTrafficRow4.equals(affiliateTrafficRow3));
        System.assert(affiliateTrafficRow3.equals(affiliateTrafficRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAffiliateTrafficRow affiliateTrafficRow1 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow2 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow3 = new OASAffiliateTrafficRow();
        OASAffiliateTrafficRow affiliateTrafficRow4 = new OASAffiliateTrafficRow();

        System.assert(affiliateTrafficRow1.equals(affiliateTrafficRow2));
        System.assert(affiliateTrafficRow2.equals(affiliateTrafficRow1));
        System.assert(affiliateTrafficRow3.equals(affiliateTrafficRow4));
        System.assert(affiliateTrafficRow4.equals(affiliateTrafficRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAffiliateTrafficRow affiliateTrafficRow1 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow2 = new OASAffiliateTrafficRow();

        System.assertEquals(false, affiliateTrafficRow1.equals('foo'));
        System.assertEquals(false, affiliateTrafficRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAffiliateTrafficRow affiliateTrafficRow1 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow2 = new OASAffiliateTrafficRow();
        OASAffiliateTrafficRow affiliateTrafficRow3;

        System.assertEquals(false, affiliateTrafficRow1.equals(affiliateTrafficRow3));
        System.assertEquals(false, affiliateTrafficRow2.equals(affiliateTrafficRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAffiliateTrafficRow affiliateTrafficRow1 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow2 = new OASAffiliateTrafficRow();

        System.assertEquals(affiliateTrafficRow1.hashCode(), affiliateTrafficRow1.hashCode());
        System.assertEquals(affiliateTrafficRow2.hashCode(), affiliateTrafficRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAffiliateTrafficRow affiliateTrafficRow1 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow2 = OASAffiliateTrafficRow.getExample();
        OASAffiliateTrafficRow affiliateTrafficRow3 = new OASAffiliateTrafficRow();
        OASAffiliateTrafficRow affiliateTrafficRow4 = new OASAffiliateTrafficRow();

        System.assert(affiliateTrafficRow1.equals(affiliateTrafficRow2));
        System.assert(affiliateTrafficRow3.equals(affiliateTrafficRow4));
        System.assertEquals(affiliateTrafficRow1.hashCode(), affiliateTrafficRow2.hashCode());
        System.assertEquals(affiliateTrafficRow3.hashCode(), affiliateTrafficRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAffiliateTrafficRow affiliateTrafficRow = new OASAffiliateTrafficRow();
        Map<String, String> x-property-mappings = affiliateTrafficRow.getx-property-mappings();
        System.assertEquals('trafficId', x-property-mappings.get('traffic_id'));
        System.assertEquals('trafficIp', x-property-mappings.get('traffic_ip'));
        System.assertEquals('trafficUrl', x-property-mappings.get('traffic_url'));
        System.assertEquals('trafficAffiliate', x-property-mappings.get('traffic_affiliate'));
        System.assertEquals('trafficReferrer', x-property-mappings.get('traffic_referrer'));
        System.assertEquals('trafficTimestamp', x-property-mappings.get('traffic_timestamp'));
    }
}
