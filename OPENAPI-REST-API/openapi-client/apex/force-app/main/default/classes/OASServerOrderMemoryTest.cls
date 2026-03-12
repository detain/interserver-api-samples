@isTest
private class OASServerOrderMemoryTest {
    @isTest
    private static void equalsSameInstance() {
        OASServerOrderMemory serverOrderMemory1 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory2 = serverOrderMemory1;
        OASServerOrderMemory serverOrderMemory3 = new OASServerOrderMemory();
        OASServerOrderMemory serverOrderMemory4 = serverOrderMemory3;

        System.assert(serverOrderMemory1.equals(serverOrderMemory2));
        System.assert(serverOrderMemory2.equals(serverOrderMemory1));
        System.assert(serverOrderMemory1.equals(serverOrderMemory1));
        System.assert(serverOrderMemory3.equals(serverOrderMemory4));
        System.assert(serverOrderMemory4.equals(serverOrderMemory3));
        System.assert(serverOrderMemory3.equals(serverOrderMemory3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServerOrderMemory serverOrderMemory1 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory2 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory3 = new OASServerOrderMemory();
        OASServerOrderMemory serverOrderMemory4 = new OASServerOrderMemory();

        System.assert(serverOrderMemory1.equals(serverOrderMemory2));
        System.assert(serverOrderMemory2.equals(serverOrderMemory1));
        System.assert(serverOrderMemory3.equals(serverOrderMemory4));
        System.assert(serverOrderMemory4.equals(serverOrderMemory3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServerOrderMemory serverOrderMemory1 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory2 = new OASServerOrderMemory();

        System.assertEquals(false, serverOrderMemory1.equals('foo'));
        System.assertEquals(false, serverOrderMemory2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServerOrderMemory serverOrderMemory1 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory2 = new OASServerOrderMemory();
        OASServerOrderMemory serverOrderMemory3;

        System.assertEquals(false, serverOrderMemory1.equals(serverOrderMemory3));
        System.assertEquals(false, serverOrderMemory2.equals(serverOrderMemory3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServerOrderMemory serverOrderMemory1 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory2 = new OASServerOrderMemory();

        System.assertEquals(serverOrderMemory1.hashCode(), serverOrderMemory1.hashCode());
        System.assertEquals(serverOrderMemory2.hashCode(), serverOrderMemory2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServerOrderMemory serverOrderMemory1 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory2 = OASServerOrderMemory.getExample();
        OASServerOrderMemory serverOrderMemory3 = new OASServerOrderMemory();
        OASServerOrderMemory serverOrderMemory4 = new OASServerOrderMemory();

        System.assert(serverOrderMemory1.equals(serverOrderMemory2));
        System.assert(serverOrderMemory3.equals(serverOrderMemory4));
        System.assertEquals(serverOrderMemory1.hashCode(), serverOrderMemory2.hashCode());
        System.assertEquals(serverOrderMemory3.hashCode(), serverOrderMemory4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServerOrderMemory serverOrderMemory = new OASServerOrderMemory();
        Map<String, String> x-property-mappings = serverOrderMemory.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('longDesc', x-property-mappings.get('long_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('driveType', x-property-mappings.get('drive_type'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
