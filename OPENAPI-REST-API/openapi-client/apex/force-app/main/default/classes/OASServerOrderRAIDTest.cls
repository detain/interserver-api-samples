@isTest
private class OASServerOrderRAIDTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderRAID serverOrderRAID1 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID2 = serverOrderRAID1;
        OASServerOrderRAID serverOrderRAID3 = new OASServerOrderRAID();
        OASServerOrderRAID serverOrderRAID4 = serverOrderRAID3;

        System.assert(serverOrderRAID1.equals(serverOrderRAID2));
        System.assert(serverOrderRAID2.equals(serverOrderRAID1));
        System.assert(serverOrderRAID1.equals(serverOrderRAID1));
        System.assert(serverOrderRAID3.equals(serverOrderRAID4));
        System.assert(serverOrderRAID4.equals(serverOrderRAID3));
        System.assert(serverOrderRAID3.equals(serverOrderRAID3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderRAID serverOrderRAID1 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID2 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID3 = new OASServerOrderRAID();
        OASServerOrderRAID serverOrderRAID4 = new OASServerOrderRAID();

        System.assert(serverOrderRAID1.equals(serverOrderRAID2));
        System.assert(serverOrderRAID2.equals(serverOrderRAID1));
        System.assert(serverOrderRAID3.equals(serverOrderRAID4));
        System.assert(serverOrderRAID4.equals(serverOrderRAID3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderRAID serverOrderRAID1 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID2 = new OASServerOrderRAID();

        System.assertEquals(false, serverOrderRAID1.equals('foo'));
        System.assertEquals(false, serverOrderRAID2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderRAID serverOrderRAID1 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID2 = new OASServerOrderRAID();
        OASServerOrderRAID serverOrderRAID3;

        System.assertEquals(false, serverOrderRAID1.equals(serverOrderRAID3));
        System.assertEquals(false, serverOrderRAID2.equals(serverOrderRAID3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderRAID serverOrderRAID1 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID2 = new OASServerOrderRAID();

        System.assertEquals(serverOrderRAID1.hashCode(), serverOrderRAID1.hashCode());
        System.assertEquals(serverOrderRAID2.hashCode(), serverOrderRAID2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderRAID serverOrderRAID1 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID2 = OASServerOrderRAID.getExample();
        OASServerOrderRAID serverOrderRAID3 = new OASServerOrderRAID();
        OASServerOrderRAID serverOrderRAID4 = new OASServerOrderRAID();

        System.assert(serverOrderRAID1.equals(serverOrderRAID2));
        System.assert(serverOrderRAID3.equals(serverOrderRAID4));
        System.assertEquals(serverOrderRAID1.hashCode(), serverOrderRAID2.hashCode());
        System.assertEquals(serverOrderRAID3.hashCode(), serverOrderRAID4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderRAID serverOrderRAID = new OASServerOrderRAID();
        Map<String, String> x-property-mappings = serverOrderRAID.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('priceDisplay', x-property-mappings.get('price_display'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
