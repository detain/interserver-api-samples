@isTest
private class OASVpsOrderLocationStockTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderLocationStock vpsOrderLocationStock1 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock2 = vpsOrderLocationStock1;
        OASVpsOrderLocationStock vpsOrderLocationStock3 = new OASVpsOrderLocationStock();
        OASVpsOrderLocationStock vpsOrderLocationStock4 = vpsOrderLocationStock3;

        System.assert(vpsOrderLocationStock1.equals(vpsOrderLocationStock2));
        System.assert(vpsOrderLocationStock2.equals(vpsOrderLocationStock1));
        System.assert(vpsOrderLocationStock1.equals(vpsOrderLocationStock1));
        System.assert(vpsOrderLocationStock3.equals(vpsOrderLocationStock4));
        System.assert(vpsOrderLocationStock4.equals(vpsOrderLocationStock3));
        System.assert(vpsOrderLocationStock3.equals(vpsOrderLocationStock3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderLocationStock vpsOrderLocationStock1 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock2 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock3 = new OASVpsOrderLocationStock();
        OASVpsOrderLocationStock vpsOrderLocationStock4 = new OASVpsOrderLocationStock();

        System.assert(vpsOrderLocationStock1.equals(vpsOrderLocationStock2));
        System.assert(vpsOrderLocationStock2.equals(vpsOrderLocationStock1));
        System.assert(vpsOrderLocationStock3.equals(vpsOrderLocationStock4));
        System.assert(vpsOrderLocationStock4.equals(vpsOrderLocationStock3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderLocationStock vpsOrderLocationStock1 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock2 = new OASVpsOrderLocationStock();

        System.assertEquals(false, vpsOrderLocationStock1.equals('foo'));
        System.assertEquals(false, vpsOrderLocationStock2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderLocationStock vpsOrderLocationStock1 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock2 = new OASVpsOrderLocationStock();
        OASVpsOrderLocationStock vpsOrderLocationStock3;

        System.assertEquals(false, vpsOrderLocationStock1.equals(vpsOrderLocationStock3));
        System.assertEquals(false, vpsOrderLocationStock2.equals(vpsOrderLocationStock3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderLocationStock vpsOrderLocationStock1 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock2 = new OASVpsOrderLocationStock();

        System.assertEquals(vpsOrderLocationStock1.hashCode(), vpsOrderLocationStock1.hashCode());
        System.assertEquals(vpsOrderLocationStock2.hashCode(), vpsOrderLocationStock2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderLocationStock vpsOrderLocationStock1 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock2 = OASVpsOrderLocationStock.getExample();
        OASVpsOrderLocationStock vpsOrderLocationStock3 = new OASVpsOrderLocationStock();
        OASVpsOrderLocationStock vpsOrderLocationStock4 = new OASVpsOrderLocationStock();

        System.assert(vpsOrderLocationStock1.equals(vpsOrderLocationStock2));
        System.assert(vpsOrderLocationStock3.equals(vpsOrderLocationStock4));
        System.assertEquals(vpsOrderLocationStock1.hashCode(), vpsOrderLocationStock2.hashCode());
        System.assertEquals(vpsOrderLocationStock3.hashCode(), vpsOrderLocationStock4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrderLocationStock vpsOrderLocationStock = new OASVpsOrderLocationStock();
        Map<String, String> x-property-mappings = vpsOrderLocationStock.getx-property-mappings();
        System.assertEquals('', x-property-mappings.get('1'));
    }
}
