@isTest
private class OASVpsOrderLocationNamesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderLocationNames vpsOrderLocationNames1 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames2 = vpsOrderLocationNames1;
        OASVpsOrderLocationNames vpsOrderLocationNames3 = new OASVpsOrderLocationNames();
        OASVpsOrderLocationNames vpsOrderLocationNames4 = vpsOrderLocationNames3;

        System.assert(vpsOrderLocationNames1.equals(vpsOrderLocationNames2));
        System.assert(vpsOrderLocationNames2.equals(vpsOrderLocationNames1));
        System.assert(vpsOrderLocationNames1.equals(vpsOrderLocationNames1));
        System.assert(vpsOrderLocationNames3.equals(vpsOrderLocationNames4));
        System.assert(vpsOrderLocationNames4.equals(vpsOrderLocationNames3));
        System.assert(vpsOrderLocationNames3.equals(vpsOrderLocationNames3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderLocationNames vpsOrderLocationNames1 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames2 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames3 = new OASVpsOrderLocationNames();
        OASVpsOrderLocationNames vpsOrderLocationNames4 = new OASVpsOrderLocationNames();

        System.assert(vpsOrderLocationNames1.equals(vpsOrderLocationNames2));
        System.assert(vpsOrderLocationNames2.equals(vpsOrderLocationNames1));
        System.assert(vpsOrderLocationNames3.equals(vpsOrderLocationNames4));
        System.assert(vpsOrderLocationNames4.equals(vpsOrderLocationNames3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderLocationNames vpsOrderLocationNames1 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames2 = new OASVpsOrderLocationNames();

        System.assertEquals(false, vpsOrderLocationNames1.equals('foo'));
        System.assertEquals(false, vpsOrderLocationNames2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderLocationNames vpsOrderLocationNames1 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames2 = new OASVpsOrderLocationNames();
        OASVpsOrderLocationNames vpsOrderLocationNames3;

        System.assertEquals(false, vpsOrderLocationNames1.equals(vpsOrderLocationNames3));
        System.assertEquals(false, vpsOrderLocationNames2.equals(vpsOrderLocationNames3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderLocationNames vpsOrderLocationNames1 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames2 = new OASVpsOrderLocationNames();

        System.assertEquals(vpsOrderLocationNames1.hashCode(), vpsOrderLocationNames1.hashCode());
        System.assertEquals(vpsOrderLocationNames2.hashCode(), vpsOrderLocationNames2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderLocationNames vpsOrderLocationNames1 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames2 = OASVpsOrderLocationNames.getExample();
        OASVpsOrderLocationNames vpsOrderLocationNames3 = new OASVpsOrderLocationNames();
        OASVpsOrderLocationNames vpsOrderLocationNames4 = new OASVpsOrderLocationNames();

        System.assert(vpsOrderLocationNames1.equals(vpsOrderLocationNames2));
        System.assert(vpsOrderLocationNames3.equals(vpsOrderLocationNames4));
        System.assertEquals(vpsOrderLocationNames1.hashCode(), vpsOrderLocationNames2.hashCode());
        System.assertEquals(vpsOrderLocationNames3.hashCode(), vpsOrderLocationNames4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrderLocationNames vpsOrderLocationNames = new OASVpsOrderLocationNames();
        Map<String, String> x-property-mappings = vpsOrderLocationNames.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('3'));
    }
}
