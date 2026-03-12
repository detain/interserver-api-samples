@isTest
private class OASMemoryOptionTest {
    @isTest
    private static void equalsSameInstance() {
        OASMemoryOption memoryOption1 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption2 = memoryOption1;
        OASMemoryOption memoryOption3 = new OASMemoryOption();
        OASMemoryOption memoryOption4 = memoryOption3;

        System.assert(memoryOption1.equals(memoryOption2));
        System.assert(memoryOption2.equals(memoryOption1));
        System.assert(memoryOption1.equals(memoryOption1));
        System.assert(memoryOption3.equals(memoryOption4));
        System.assert(memoryOption4.equals(memoryOption3));
        System.assert(memoryOption3.equals(memoryOption3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMemoryOption memoryOption1 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption2 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption3 = new OASMemoryOption();
        OASMemoryOption memoryOption4 = new OASMemoryOption();

        System.assert(memoryOption1.equals(memoryOption2));
        System.assert(memoryOption2.equals(memoryOption1));
        System.assert(memoryOption3.equals(memoryOption4));
        System.assert(memoryOption4.equals(memoryOption3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMemoryOption memoryOption1 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption2 = new OASMemoryOption();

        System.assertEquals(false, memoryOption1.equals('foo'));
        System.assertEquals(false, memoryOption2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMemoryOption memoryOption1 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption2 = new OASMemoryOption();
        OASMemoryOption memoryOption3;

        System.assertEquals(false, memoryOption1.equals(memoryOption3));
        System.assertEquals(false, memoryOption2.equals(memoryOption3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMemoryOption memoryOption1 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption2 = new OASMemoryOption();

        System.assertEquals(memoryOption1.hashCode(), memoryOption1.hashCode());
        System.assertEquals(memoryOption2.hashCode(), memoryOption2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMemoryOption memoryOption1 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption2 = OASMemoryOption.getExample();
        OASMemoryOption memoryOption3 = new OASMemoryOption();
        OASMemoryOption memoryOption4 = new OASMemoryOption();

        System.assert(memoryOption1.equals(memoryOption2));
        System.assert(memoryOption3.equals(memoryOption4));
        System.assertEquals(memoryOption1.hashCode(), memoryOption2.hashCode());
        System.assertEquals(memoryOption3.hashCode(), memoryOption4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMemoryOption memoryOption = new OASMemoryOption();
        Map<String, String> x-property-mappings = memoryOption.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
        System.assertEquals('monthlyPriceDisplay', x-property-mappings.get('monthly_price_display'));
    }
}
