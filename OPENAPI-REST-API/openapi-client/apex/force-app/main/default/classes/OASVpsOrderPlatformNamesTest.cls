@isTest
private class OASVpsOrderPlatformNamesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderPlatformNames vpsOrderPlatformNames1 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames2 = vpsOrderPlatformNames1;
        OASVpsOrderPlatformNames vpsOrderPlatformNames3 = new OASVpsOrderPlatformNames();
        OASVpsOrderPlatformNames vpsOrderPlatformNames4 = vpsOrderPlatformNames3;

        System.assert(vpsOrderPlatformNames1.equals(vpsOrderPlatformNames2));
        System.assert(vpsOrderPlatformNames2.equals(vpsOrderPlatformNames1));
        System.assert(vpsOrderPlatformNames1.equals(vpsOrderPlatformNames1));
        System.assert(vpsOrderPlatformNames3.equals(vpsOrderPlatformNames4));
        System.assert(vpsOrderPlatformNames4.equals(vpsOrderPlatformNames3));
        System.assert(vpsOrderPlatformNames3.equals(vpsOrderPlatformNames3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderPlatformNames vpsOrderPlatformNames1 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames2 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames3 = new OASVpsOrderPlatformNames();
        OASVpsOrderPlatformNames vpsOrderPlatformNames4 = new OASVpsOrderPlatformNames();

        System.assert(vpsOrderPlatformNames1.equals(vpsOrderPlatformNames2));
        System.assert(vpsOrderPlatformNames2.equals(vpsOrderPlatformNames1));
        System.assert(vpsOrderPlatformNames3.equals(vpsOrderPlatformNames4));
        System.assert(vpsOrderPlatformNames4.equals(vpsOrderPlatformNames3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderPlatformNames vpsOrderPlatformNames1 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames2 = new OASVpsOrderPlatformNames();

        System.assertEquals(false, vpsOrderPlatformNames1.equals('foo'));
        System.assertEquals(false, vpsOrderPlatformNames2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderPlatformNames vpsOrderPlatformNames1 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames2 = new OASVpsOrderPlatformNames();
        OASVpsOrderPlatformNames vpsOrderPlatformNames3;

        System.assertEquals(false, vpsOrderPlatformNames1.equals(vpsOrderPlatformNames3));
        System.assertEquals(false, vpsOrderPlatformNames2.equals(vpsOrderPlatformNames3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderPlatformNames vpsOrderPlatformNames1 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames2 = new OASVpsOrderPlatformNames();

        System.assertEquals(vpsOrderPlatformNames1.hashCode(), vpsOrderPlatformNames1.hashCode());
        System.assertEquals(vpsOrderPlatformNames2.hashCode(), vpsOrderPlatformNames2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderPlatformNames vpsOrderPlatformNames1 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames2 = OASVpsOrderPlatformNames.getExample();
        OASVpsOrderPlatformNames vpsOrderPlatformNames3 = new OASVpsOrderPlatformNames();
        OASVpsOrderPlatformNames vpsOrderPlatformNames4 = new OASVpsOrderPlatformNames();

        System.assert(vpsOrderPlatformNames1.equals(vpsOrderPlatformNames2));
        System.assert(vpsOrderPlatformNames3.equals(vpsOrderPlatformNames4));
        System.assertEquals(vpsOrderPlatformNames1.hashCode(), vpsOrderPlatformNames2.hashCode());
        System.assertEquals(vpsOrderPlatformNames3.hashCode(), vpsOrderPlatformNames4.hashCode());
    }
}
