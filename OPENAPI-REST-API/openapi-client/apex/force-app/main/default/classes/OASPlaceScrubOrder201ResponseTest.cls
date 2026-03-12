@isTest
private class OASPlaceScrubOrder201ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response1 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response2 = placeScrubOrder201Response1;
        OASPlaceScrubOrder201Response placeScrubOrder201Response3 = new OASPlaceScrubOrder201Response();
        OASPlaceScrubOrder201Response placeScrubOrder201Response4 = placeScrubOrder201Response3;

        System.assert(placeScrubOrder201Response1.equals(placeScrubOrder201Response2));
        System.assert(placeScrubOrder201Response2.equals(placeScrubOrder201Response1));
        System.assert(placeScrubOrder201Response1.equals(placeScrubOrder201Response1));
        System.assert(placeScrubOrder201Response3.equals(placeScrubOrder201Response4));
        System.assert(placeScrubOrder201Response4.equals(placeScrubOrder201Response3));
        System.assert(placeScrubOrder201Response3.equals(placeScrubOrder201Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response1 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response2 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response3 = new OASPlaceScrubOrder201Response();
        OASPlaceScrubOrder201Response placeScrubOrder201Response4 = new OASPlaceScrubOrder201Response();

        System.assert(placeScrubOrder201Response1.equals(placeScrubOrder201Response2));
        System.assert(placeScrubOrder201Response2.equals(placeScrubOrder201Response1));
        System.assert(placeScrubOrder201Response3.equals(placeScrubOrder201Response4));
        System.assert(placeScrubOrder201Response4.equals(placeScrubOrder201Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response1 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response2 = new OASPlaceScrubOrder201Response();

        System.assertEquals(false, placeScrubOrder201Response1.equals('foo'));
        System.assertEquals(false, placeScrubOrder201Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response1 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response2 = new OASPlaceScrubOrder201Response();
        OASPlaceScrubOrder201Response placeScrubOrder201Response3;

        System.assertEquals(false, placeScrubOrder201Response1.equals(placeScrubOrder201Response3));
        System.assertEquals(false, placeScrubOrder201Response2.equals(placeScrubOrder201Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response1 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response2 = new OASPlaceScrubOrder201Response();

        System.assertEquals(placeScrubOrder201Response1.hashCode(), placeScrubOrder201Response1.hashCode());
        System.assertEquals(placeScrubOrder201Response2.hashCode(), placeScrubOrder201Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response1 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response2 = OASPlaceScrubOrder201Response.getExample();
        OASPlaceScrubOrder201Response placeScrubOrder201Response3 = new OASPlaceScrubOrder201Response();
        OASPlaceScrubOrder201Response placeScrubOrder201Response4 = new OASPlaceScrubOrder201Response();

        System.assert(placeScrubOrder201Response1.equals(placeScrubOrder201Response2));
        System.assert(placeScrubOrder201Response3.equals(placeScrubOrder201Response4));
        System.assertEquals(placeScrubOrder201Response1.hashCode(), placeScrubOrder201Response2.hashCode());
        System.assertEquals(placeScrubOrder201Response3.hashCode(), placeScrubOrder201Response4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASPlaceScrubOrder201Response placeScrubOrder201Response = new OASPlaceScrubOrder201Response();
        Map<String, String> x-property-mappings = placeScrubOrder201Response.getx-property-mappings();
        System.assertEquals('orderDetails', x-property-mappings.get('order_details'));
    }
}
