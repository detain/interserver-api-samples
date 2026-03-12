@isTest
private class OASVpsOrderPackageCostsTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts1 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts2 = vpsOrderPackageCosts1;
        OASVpsOrderPackageCosts vpsOrderPackageCosts3 = new OASVpsOrderPackageCosts();
        OASVpsOrderPackageCosts vpsOrderPackageCosts4 = vpsOrderPackageCosts3;

        System.assert(vpsOrderPackageCosts1.equals(vpsOrderPackageCosts2));
        System.assert(vpsOrderPackageCosts2.equals(vpsOrderPackageCosts1));
        System.assert(vpsOrderPackageCosts1.equals(vpsOrderPackageCosts1));
        System.assert(vpsOrderPackageCosts3.equals(vpsOrderPackageCosts4));
        System.assert(vpsOrderPackageCosts4.equals(vpsOrderPackageCosts3));
        System.assert(vpsOrderPackageCosts3.equals(vpsOrderPackageCosts3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts1 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts2 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts3 = new OASVpsOrderPackageCosts();
        OASVpsOrderPackageCosts vpsOrderPackageCosts4 = new OASVpsOrderPackageCosts();

        System.assert(vpsOrderPackageCosts1.equals(vpsOrderPackageCosts2));
        System.assert(vpsOrderPackageCosts2.equals(vpsOrderPackageCosts1));
        System.assert(vpsOrderPackageCosts3.equals(vpsOrderPackageCosts4));
        System.assert(vpsOrderPackageCosts4.equals(vpsOrderPackageCosts3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts1 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts2 = new OASVpsOrderPackageCosts();

        System.assertEquals(false, vpsOrderPackageCosts1.equals('foo'));
        System.assertEquals(false, vpsOrderPackageCosts2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts1 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts2 = new OASVpsOrderPackageCosts();
        OASVpsOrderPackageCosts vpsOrderPackageCosts3;

        System.assertEquals(false, vpsOrderPackageCosts1.equals(vpsOrderPackageCosts3));
        System.assertEquals(false, vpsOrderPackageCosts2.equals(vpsOrderPackageCosts3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts1 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts2 = new OASVpsOrderPackageCosts();

        System.assertEquals(vpsOrderPackageCosts1.hashCode(), vpsOrderPackageCosts1.hashCode());
        System.assertEquals(vpsOrderPackageCosts2.hashCode(), vpsOrderPackageCosts2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts1 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts2 = OASVpsOrderPackageCosts.getExample();
        OASVpsOrderPackageCosts vpsOrderPackageCosts3 = new OASVpsOrderPackageCosts();
        OASVpsOrderPackageCosts vpsOrderPackageCosts4 = new OASVpsOrderPackageCosts();

        System.assert(vpsOrderPackageCosts1.equals(vpsOrderPackageCosts2));
        System.assert(vpsOrderPackageCosts3.equals(vpsOrderPackageCosts4));
        System.assertEquals(vpsOrderPackageCosts1.hashCode(), vpsOrderPackageCosts2.hashCode());
        System.assertEquals(vpsOrderPackageCosts3.hashCode(), vpsOrderPackageCosts4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrderPackageCosts vpsOrderPackageCosts = new OASVpsOrderPackageCosts();
        Map<String, String> x-property-mappings = vpsOrderPackageCosts.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('57'));
    }
}
