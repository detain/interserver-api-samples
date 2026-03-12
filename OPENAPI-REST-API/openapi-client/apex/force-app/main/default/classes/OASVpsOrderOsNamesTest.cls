@isTest
private class OASVpsOrderOsNamesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderOsNames vpsOrderOsNames1 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames2 = vpsOrderOsNames1;
        OASVpsOrderOsNames vpsOrderOsNames3 = new OASVpsOrderOsNames();
        OASVpsOrderOsNames vpsOrderOsNames4 = vpsOrderOsNames3;

        System.assert(vpsOrderOsNames1.equals(vpsOrderOsNames2));
        System.assert(vpsOrderOsNames2.equals(vpsOrderOsNames1));
        System.assert(vpsOrderOsNames1.equals(vpsOrderOsNames1));
        System.assert(vpsOrderOsNames3.equals(vpsOrderOsNames4));
        System.assert(vpsOrderOsNames4.equals(vpsOrderOsNames3));
        System.assert(vpsOrderOsNames3.equals(vpsOrderOsNames3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderOsNames vpsOrderOsNames1 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames2 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames3 = new OASVpsOrderOsNames();
        OASVpsOrderOsNames vpsOrderOsNames4 = new OASVpsOrderOsNames();

        System.assert(vpsOrderOsNames1.equals(vpsOrderOsNames2));
        System.assert(vpsOrderOsNames2.equals(vpsOrderOsNames1));
        System.assert(vpsOrderOsNames3.equals(vpsOrderOsNames4));
        System.assert(vpsOrderOsNames4.equals(vpsOrderOsNames3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderOsNames vpsOrderOsNames1 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames2 = new OASVpsOrderOsNames();

        System.assertEquals(false, vpsOrderOsNames1.equals('foo'));
        System.assertEquals(false, vpsOrderOsNames2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderOsNames vpsOrderOsNames1 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames2 = new OASVpsOrderOsNames();
        OASVpsOrderOsNames vpsOrderOsNames3;

        System.assertEquals(false, vpsOrderOsNames1.equals(vpsOrderOsNames3));
        System.assertEquals(false, vpsOrderOsNames2.equals(vpsOrderOsNames3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderOsNames vpsOrderOsNames1 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames2 = new OASVpsOrderOsNames();

        System.assertEquals(vpsOrderOsNames1.hashCode(), vpsOrderOsNames1.hashCode());
        System.assertEquals(vpsOrderOsNames2.hashCode(), vpsOrderOsNames2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderOsNames vpsOrderOsNames1 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames2 = OASVpsOrderOsNames.getExample();
        OASVpsOrderOsNames vpsOrderOsNames3 = new OASVpsOrderOsNames();
        OASVpsOrderOsNames vpsOrderOsNames4 = new OASVpsOrderOsNames();

        System.assert(vpsOrderOsNames1.equals(vpsOrderOsNames2));
        System.assert(vpsOrderOsNames3.equals(vpsOrderOsNames4));
        System.assertEquals(vpsOrderOsNames1.hashCode(), vpsOrderOsNames2.hashCode());
        System.assertEquals(vpsOrderOsNames3.hashCode(), vpsOrderOsNames4.hashCode());
    }
}
