@isTest
private class OASVpsServiceExtraTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsServiceExtra vpsServiceExtra1 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra2 = vpsServiceExtra1;
        OASVpsServiceExtra vpsServiceExtra3 = new OASVpsServiceExtra();
        OASVpsServiceExtra vpsServiceExtra4 = vpsServiceExtra3;

        System.assert(vpsServiceExtra1.equals(vpsServiceExtra2));
        System.assert(vpsServiceExtra2.equals(vpsServiceExtra1));
        System.assert(vpsServiceExtra1.equals(vpsServiceExtra1));
        System.assert(vpsServiceExtra3.equals(vpsServiceExtra4));
        System.assert(vpsServiceExtra4.equals(vpsServiceExtra3));
        System.assert(vpsServiceExtra3.equals(vpsServiceExtra3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsServiceExtra vpsServiceExtra1 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra2 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra3 = new OASVpsServiceExtra();
        OASVpsServiceExtra vpsServiceExtra4 = new OASVpsServiceExtra();

        System.assert(vpsServiceExtra1.equals(vpsServiceExtra2));
        System.assert(vpsServiceExtra2.equals(vpsServiceExtra1));
        System.assert(vpsServiceExtra3.equals(vpsServiceExtra4));
        System.assert(vpsServiceExtra4.equals(vpsServiceExtra3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsServiceExtra vpsServiceExtra1 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra2 = new OASVpsServiceExtra();

        System.assertEquals(false, vpsServiceExtra1.equals('foo'));
        System.assertEquals(false, vpsServiceExtra2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsServiceExtra vpsServiceExtra1 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra2 = new OASVpsServiceExtra();
        OASVpsServiceExtra vpsServiceExtra3;

        System.assertEquals(false, vpsServiceExtra1.equals(vpsServiceExtra3));
        System.assertEquals(false, vpsServiceExtra2.equals(vpsServiceExtra3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsServiceExtra vpsServiceExtra1 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra2 = new OASVpsServiceExtra();

        System.assertEquals(vpsServiceExtra1.hashCode(), vpsServiceExtra1.hashCode());
        System.assertEquals(vpsServiceExtra2.hashCode(), vpsServiceExtra2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsServiceExtra vpsServiceExtra1 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra2 = OASVpsServiceExtra.getExample();
        OASVpsServiceExtra vpsServiceExtra3 = new OASVpsServiceExtra();
        OASVpsServiceExtra vpsServiceExtra4 = new OASVpsServiceExtra();

        System.assert(vpsServiceExtra1.equals(vpsServiceExtra2));
        System.assert(vpsServiceExtra3.equals(vpsServiceExtra4));
        System.assertEquals(vpsServiceExtra1.hashCode(), vpsServiceExtra2.hashCode());
        System.assertEquals(vpsServiceExtra3.hashCode(), vpsServiceExtra4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsServiceExtra vpsServiceExtra = new OASVpsServiceExtra();
        System.assertEquals(new List<OASVpsSnapshot>(), vpsServiceExtra.snapshots);
        System.assertEquals(null, vpsServiceExtra.spice);
    }
}
