@isTest
private class OASVpsOrderServiceTypesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes1 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes2 = vpsOrderServiceTypes1;
        OASVpsOrderServiceTypes vpsOrderServiceTypes3 = new OASVpsOrderServiceTypes();
        OASVpsOrderServiceTypes vpsOrderServiceTypes4 = vpsOrderServiceTypes3;

        System.assert(vpsOrderServiceTypes1.equals(vpsOrderServiceTypes2));
        System.assert(vpsOrderServiceTypes2.equals(vpsOrderServiceTypes1));
        System.assert(vpsOrderServiceTypes1.equals(vpsOrderServiceTypes1));
        System.assert(vpsOrderServiceTypes3.equals(vpsOrderServiceTypes4));
        System.assert(vpsOrderServiceTypes4.equals(vpsOrderServiceTypes3));
        System.assert(vpsOrderServiceTypes3.equals(vpsOrderServiceTypes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes1 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes2 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes3 = new OASVpsOrderServiceTypes();
        OASVpsOrderServiceTypes vpsOrderServiceTypes4 = new OASVpsOrderServiceTypes();

        System.assert(vpsOrderServiceTypes1.equals(vpsOrderServiceTypes2));
        System.assert(vpsOrderServiceTypes2.equals(vpsOrderServiceTypes1));
        System.assert(vpsOrderServiceTypes3.equals(vpsOrderServiceTypes4));
        System.assert(vpsOrderServiceTypes4.equals(vpsOrderServiceTypes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes1 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes2 = new OASVpsOrderServiceTypes();

        System.assertEquals(false, vpsOrderServiceTypes1.equals('foo'));
        System.assertEquals(false, vpsOrderServiceTypes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes1 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes2 = new OASVpsOrderServiceTypes();
        OASVpsOrderServiceTypes vpsOrderServiceTypes3;

        System.assertEquals(false, vpsOrderServiceTypes1.equals(vpsOrderServiceTypes3));
        System.assertEquals(false, vpsOrderServiceTypes2.equals(vpsOrderServiceTypes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes1 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes2 = new OASVpsOrderServiceTypes();

        System.assertEquals(vpsOrderServiceTypes1.hashCode(), vpsOrderServiceTypes1.hashCode());
        System.assertEquals(vpsOrderServiceTypes2.hashCode(), vpsOrderServiceTypes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes1 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes2 = OASVpsOrderServiceTypes.getExample();
        OASVpsOrderServiceTypes vpsOrderServiceTypes3 = new OASVpsOrderServiceTypes();
        OASVpsOrderServiceTypes vpsOrderServiceTypes4 = new OASVpsOrderServiceTypes();

        System.assert(vpsOrderServiceTypes1.equals(vpsOrderServiceTypes2));
        System.assert(vpsOrderServiceTypes3.equals(vpsOrderServiceTypes4));
        System.assertEquals(vpsOrderServiceTypes1.hashCode(), vpsOrderServiceTypes2.hashCode());
        System.assertEquals(vpsOrderServiceTypes3.hashCode(), vpsOrderServiceTypes4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrderServiceTypes vpsOrderServiceTypes = new OASVpsOrderServiceTypes();
        Map<String, String> x-property-mappings = vpsOrderServiceTypes.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('32'));
    }
}
