@isTest
private class OASVpsSnapshotTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsSnapshot vpsSnapshot1 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot2 = vpsSnapshot1;
        OASVpsSnapshot vpsSnapshot3 = new OASVpsSnapshot();
        OASVpsSnapshot vpsSnapshot4 = vpsSnapshot3;

        System.assert(vpsSnapshot1.equals(vpsSnapshot2));
        System.assert(vpsSnapshot2.equals(vpsSnapshot1));
        System.assert(vpsSnapshot1.equals(vpsSnapshot1));
        System.assert(vpsSnapshot3.equals(vpsSnapshot4));
        System.assert(vpsSnapshot4.equals(vpsSnapshot3));
        System.assert(vpsSnapshot3.equals(vpsSnapshot3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsSnapshot vpsSnapshot1 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot2 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot3 = new OASVpsSnapshot();
        OASVpsSnapshot vpsSnapshot4 = new OASVpsSnapshot();

        System.assert(vpsSnapshot1.equals(vpsSnapshot2));
        System.assert(vpsSnapshot2.equals(vpsSnapshot1));
        System.assert(vpsSnapshot3.equals(vpsSnapshot4));
        System.assert(vpsSnapshot4.equals(vpsSnapshot3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsSnapshot vpsSnapshot1 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot2 = new OASVpsSnapshot();

        System.assertEquals(false, vpsSnapshot1.equals('foo'));
        System.assertEquals(false, vpsSnapshot2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsSnapshot vpsSnapshot1 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot2 = new OASVpsSnapshot();
        OASVpsSnapshot vpsSnapshot3;

        System.assertEquals(false, vpsSnapshot1.equals(vpsSnapshot3));
        System.assertEquals(false, vpsSnapshot2.equals(vpsSnapshot3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsSnapshot vpsSnapshot1 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot2 = new OASVpsSnapshot();

        System.assertEquals(vpsSnapshot1.hashCode(), vpsSnapshot1.hashCode());
        System.assertEquals(vpsSnapshot2.hashCode(), vpsSnapshot2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsSnapshot vpsSnapshot1 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot2 = OASVpsSnapshot.getExample();
        OASVpsSnapshot vpsSnapshot3 = new OASVpsSnapshot();
        OASVpsSnapshot vpsSnapshot4 = new OASVpsSnapshot();

        System.assert(vpsSnapshot1.equals(vpsSnapshot2));
        System.assert(vpsSnapshot3.equals(vpsSnapshot4));
        System.assertEquals(vpsSnapshot1.hashCode(), vpsSnapshot2.hashCode());
        System.assertEquals(vpsSnapshot3.hashCode(), vpsSnapshot4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsSnapshot vpsSnapshot = new OASVpsSnapshot();
        Map<String, String> x-property-mappings = vpsSnapshot.getx-property-mappings();
        System.assertEquals('r_date', x-property-mappings.get('date'));
    }
}
