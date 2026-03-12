@isTest
private class OASAffiliateBannerRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASAffiliateBannerRow affiliateBannerRow1 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow2 = affiliateBannerRow1;
        OASAffiliateBannerRow affiliateBannerRow3 = new OASAffiliateBannerRow();
        OASAffiliateBannerRow affiliateBannerRow4 = affiliateBannerRow3;

        System.assert(affiliateBannerRow1.equals(affiliateBannerRow2));
        System.assert(affiliateBannerRow2.equals(affiliateBannerRow1));
        System.assert(affiliateBannerRow1.equals(affiliateBannerRow1));
        System.assert(affiliateBannerRow3.equals(affiliateBannerRow4));
        System.assert(affiliateBannerRow4.equals(affiliateBannerRow3));
        System.assert(affiliateBannerRow3.equals(affiliateBannerRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAffiliateBannerRow affiliateBannerRow1 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow2 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow3 = new OASAffiliateBannerRow();
        OASAffiliateBannerRow affiliateBannerRow4 = new OASAffiliateBannerRow();

        System.assert(affiliateBannerRow1.equals(affiliateBannerRow2));
        System.assert(affiliateBannerRow2.equals(affiliateBannerRow1));
        System.assert(affiliateBannerRow3.equals(affiliateBannerRow4));
        System.assert(affiliateBannerRow4.equals(affiliateBannerRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAffiliateBannerRow affiliateBannerRow1 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow2 = new OASAffiliateBannerRow();

        System.assertEquals(false, affiliateBannerRow1.equals('foo'));
        System.assertEquals(false, affiliateBannerRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAffiliateBannerRow affiliateBannerRow1 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow2 = new OASAffiliateBannerRow();
        OASAffiliateBannerRow affiliateBannerRow3;

        System.assertEquals(false, affiliateBannerRow1.equals(affiliateBannerRow3));
        System.assertEquals(false, affiliateBannerRow2.equals(affiliateBannerRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAffiliateBannerRow affiliateBannerRow1 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow2 = new OASAffiliateBannerRow();

        System.assertEquals(affiliateBannerRow1.hashCode(), affiliateBannerRow1.hashCode());
        System.assertEquals(affiliateBannerRow2.hashCode(), affiliateBannerRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAffiliateBannerRow affiliateBannerRow1 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow2 = OASAffiliateBannerRow.getExample();
        OASAffiliateBannerRow affiliateBannerRow3 = new OASAffiliateBannerRow();
        OASAffiliateBannerRow affiliateBannerRow4 = new OASAffiliateBannerRow();

        System.assert(affiliateBannerRow1.equals(affiliateBannerRow2));
        System.assert(affiliateBannerRow3.equals(affiliateBannerRow4));
        System.assertEquals(affiliateBannerRow1.hashCode(), affiliateBannerRow2.hashCode());
        System.assertEquals(affiliateBannerRow3.hashCode(), affiliateBannerRow4.hashCode());
    }
}
