@isTest
private class OASOperatingSystemTest {
    @isTest
    private static void equalsSameInstance() {
        OASOperatingSystem operatingSystem1 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem2 = operatingSystem1;
        OASOperatingSystem operatingSystem3 = new OASOperatingSystem();
        OASOperatingSystem operatingSystem4 = operatingSystem3;

        System.assert(operatingSystem1.equals(operatingSystem2));
        System.assert(operatingSystem2.equals(operatingSystem1));
        System.assert(operatingSystem1.equals(operatingSystem1));
        System.assert(operatingSystem3.equals(operatingSystem4));
        System.assert(operatingSystem4.equals(operatingSystem3));
        System.assert(operatingSystem3.equals(operatingSystem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASOperatingSystem operatingSystem1 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem2 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem3 = new OASOperatingSystem();
        OASOperatingSystem operatingSystem4 = new OASOperatingSystem();

        System.assert(operatingSystem1.equals(operatingSystem2));
        System.assert(operatingSystem2.equals(operatingSystem1));
        System.assert(operatingSystem3.equals(operatingSystem4));
        System.assert(operatingSystem4.equals(operatingSystem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASOperatingSystem operatingSystem1 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem2 = new OASOperatingSystem();

        System.assertEquals(false, operatingSystem1.equals('foo'));
        System.assertEquals(false, operatingSystem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASOperatingSystem operatingSystem1 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem2 = new OASOperatingSystem();
        OASOperatingSystem operatingSystem3;

        System.assertEquals(false, operatingSystem1.equals(operatingSystem3));
        System.assertEquals(false, operatingSystem2.equals(operatingSystem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASOperatingSystem operatingSystem1 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem2 = new OASOperatingSystem();

        System.assertEquals(operatingSystem1.hashCode(), operatingSystem1.hashCode());
        System.assertEquals(operatingSystem2.hashCode(), operatingSystem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASOperatingSystem operatingSystem1 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem2 = OASOperatingSystem.getExample();
        OASOperatingSystem operatingSystem3 = new OASOperatingSystem();
        OASOperatingSystem operatingSystem4 = new OASOperatingSystem();

        System.assert(operatingSystem1.equals(operatingSystem2));
        System.assert(operatingSystem3.equals(operatingSystem4));
        System.assertEquals(operatingSystem1.hashCode(), operatingSystem2.hashCode());
        System.assertEquals(operatingSystem3.hashCode(), operatingSystem4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASOperatingSystem operatingSystem = new OASOperatingSystem();
        Map<String, String> x-property-mappings = operatingSystem.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
