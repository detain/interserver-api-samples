@isTest
private class OASServerLocationsTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerLocations serverLocations1 = OASServerLocations.getExample();
        OASServerLocations serverLocations2 = serverLocations1;
        OASServerLocations serverLocations3 = new OASServerLocations();
        OASServerLocations serverLocations4 = serverLocations3;

        System.assert(serverLocations1.equals(serverLocations2));
        System.assert(serverLocations2.equals(serverLocations1));
        System.assert(serverLocations1.equals(serverLocations1));
        System.assert(serverLocations3.equals(serverLocations4));
        System.assert(serverLocations4.equals(serverLocations3));
        System.assert(serverLocations3.equals(serverLocations3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerLocations serverLocations1 = OASServerLocations.getExample();
        OASServerLocations serverLocations2 = OASServerLocations.getExample();
        OASServerLocations serverLocations3 = new OASServerLocations();
        OASServerLocations serverLocations4 = new OASServerLocations();

        System.assert(serverLocations1.equals(serverLocations2));
        System.assert(serverLocations2.equals(serverLocations1));
        System.assert(serverLocations3.equals(serverLocations4));
        System.assert(serverLocations4.equals(serverLocations3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerLocations serverLocations1 = OASServerLocations.getExample();
        OASServerLocations serverLocations2 = new OASServerLocations();

        System.assertEquals(false, serverLocations1.equals('foo'));
        System.assertEquals(false, serverLocations2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerLocations serverLocations1 = OASServerLocations.getExample();
        OASServerLocations serverLocations2 = new OASServerLocations();
        OASServerLocations serverLocations3;

        System.assertEquals(false, serverLocations1.equals(serverLocations3));
        System.assertEquals(false, serverLocations2.equals(serverLocations3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerLocations serverLocations1 = OASServerLocations.getExample();
        OASServerLocations serverLocations2 = new OASServerLocations();

        System.assertEquals(serverLocations1.hashCode(), serverLocations1.hashCode());
        System.assertEquals(serverLocations2.hashCode(), serverLocations2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerLocations serverLocations1 = OASServerLocations.getExample();
        OASServerLocations serverLocations2 = OASServerLocations.getExample();
        OASServerLocations serverLocations3 = new OASServerLocations();
        OASServerLocations serverLocations4 = new OASServerLocations();

        System.assert(serverLocations1.equals(serverLocations2));
        System.assert(serverLocations3.equals(serverLocations4));
        System.assertEquals(serverLocations1.hashCode(), serverLocations2.hashCode());
        System.assertEquals(serverLocations3.hashCode(), serverLocations4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerLocations serverLocations = new OASServerLocations();
        Map<String, String> x-property-mappings = serverLocations.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('1'));
    }
}
