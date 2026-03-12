@isTest
private class OASServerLocation1Test {
    @isTest
    private static void equalsSameInstance() {
        OASServerLocation1 serverLocation11 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation12 = serverLocation11;
        OASServerLocation1 serverLocation13 = new OASServerLocation1();
        OASServerLocation1 serverLocation14 = serverLocation13;

        System.assert(serverLocation11.equals(serverLocation12));
        System.assert(serverLocation12.equals(serverLocation11));
        System.assert(serverLocation11.equals(serverLocation11));
        System.assert(serverLocation13.equals(serverLocation14));
        System.assert(serverLocation14.equals(serverLocation13));
        System.assert(serverLocation13.equals(serverLocation13));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerLocation1 serverLocation11 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation12 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation13 = new OASServerLocation1();
        OASServerLocation1 serverLocation14 = new OASServerLocation1();

        System.assert(serverLocation11.equals(serverLocation12));
        System.assert(serverLocation12.equals(serverLocation11));
        System.assert(serverLocation13.equals(serverLocation14));
        System.assert(serverLocation14.equals(serverLocation13));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerLocation1 serverLocation11 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation12 = new OASServerLocation1();

        System.assertEquals(false, serverLocation11.equals('foo'));
        System.assertEquals(false, serverLocation12.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerLocation1 serverLocation11 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation12 = new OASServerLocation1();
        OASServerLocation1 serverLocation13;

        System.assertEquals(false, serverLocation11.equals(serverLocation13));
        System.assertEquals(false, serverLocation12.equals(serverLocation13));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerLocation1 serverLocation11 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation12 = new OASServerLocation1();

        System.assertEquals(serverLocation11.hashCode(), serverLocation11.hashCode());
        System.assertEquals(serverLocation12.hashCode(), serverLocation12.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerLocation1 serverLocation11 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation12 = OASServerLocation1.getExample();
        OASServerLocation1 serverLocation13 = new OASServerLocation1();
        OASServerLocation1 serverLocation14 = new OASServerLocation1();

        System.assert(serverLocation11.equals(serverLocation12));
        System.assert(serverLocation13.equals(serverLocation14));
        System.assertEquals(serverLocation11.hashCode(), serverLocation12.hashCode());
        System.assertEquals(serverLocation13.hashCode(), serverLocation14.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerLocation1 serverLocation1 = new OASServerLocation1();
        Map<String, String> x-property-mappings = serverLocation1.getx-property-mappings();
        System.assertEquals('locationId', x-property-mappings.get('location_id'));
        System.assertEquals('locationName', x-property-mappings.get('location_name'));
        System.assertEquals('locationLat', x-property-mappings.get('location_lat'));
        System.assertEquals('locationLong', x-property-mappings.get('location_long'));
        System.assertEquals('locationDescription', x-property-mappings.get('location_description'));
        System.assertEquals('locationIpmiGroup', x-property-mappings.get('location_ipmi_group'));
    }
}
