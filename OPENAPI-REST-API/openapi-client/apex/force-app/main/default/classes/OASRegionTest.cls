@isTest
private class OASRegionTest {
    @isTest
    private static void equalsSameInstance() {
        OASRegion region1 = OASRegion.getExample();
        OASRegion region2 = region1;
        OASRegion region3 = new OASRegion();
        OASRegion region4 = region3;

        System.assert(region1.equals(region2));
        System.assert(region2.equals(region1));
        System.assert(region1.equals(region1));
        System.assert(region3.equals(region4));
        System.assert(region4.equals(region3));
        System.assert(region3.equals(region3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASRegion region1 = OASRegion.getExample();
        OASRegion region2 = OASRegion.getExample();
        OASRegion region3 = new OASRegion();
        OASRegion region4 = new OASRegion();

        System.assert(region1.equals(region2));
        System.assert(region2.equals(region1));
        System.assert(region3.equals(region4));
        System.assert(region4.equals(region3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASRegion region1 = OASRegion.getExample();
        OASRegion region2 = new OASRegion();

        System.assertEquals(false, region1.equals('foo'));
        System.assertEquals(false, region2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASRegion region1 = OASRegion.getExample();
        OASRegion region2 = new OASRegion();
        OASRegion region3;

        System.assertEquals(false, region1.equals(region3));
        System.assertEquals(false, region2.equals(region3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASRegion region1 = OASRegion.getExample();
        OASRegion region2 = new OASRegion();

        System.assertEquals(region1.hashCode(), region1.hashCode());
        System.assertEquals(region2.hashCode(), region2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASRegion region1 = OASRegion.getExample();
        OASRegion region2 = OASRegion.getExample();
        OASRegion region3 = new OASRegion();
        OASRegion region4 = new OASRegion();

        System.assert(region1.equals(region2));
        System.assert(region3.equals(region4));
        System.assertEquals(region1.hashCode(), region2.hashCode());
        System.assertEquals(region3.hashCode(), region4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASRegion region = new OASRegion();
        Map<String, String> x-property-mappings = region.getx-property-mappings();
        System.assertEquals('regionId', x-property-mappings.get('region_id'));
        System.assertEquals('regionName', x-property-mappings.get('region_name'));
    }
}
