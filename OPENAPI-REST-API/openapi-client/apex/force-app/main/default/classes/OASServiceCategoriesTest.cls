@isTest
private class OASServiceCategoriesTest {
    @isTest
    private static void equalsSameInstance() {
        OASServiceCategories serviceCategories1 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories2 = serviceCategories1;
        OASServiceCategories serviceCategories3 = new OASServiceCategories();
        OASServiceCategories serviceCategories4 = serviceCategories3;

        System.assert(serviceCategories1.equals(serviceCategories2));
        System.assert(serviceCategories2.equals(serviceCategories1));
        System.assert(serviceCategories1.equals(serviceCategories1));
        System.assert(serviceCategories3.equals(serviceCategories4));
        System.assert(serviceCategories4.equals(serviceCategories3));
        System.assert(serviceCategories3.equals(serviceCategories3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServiceCategories serviceCategories1 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories2 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories3 = new OASServiceCategories();
        OASServiceCategories serviceCategories4 = new OASServiceCategories();

        System.assert(serviceCategories1.equals(serviceCategories2));
        System.assert(serviceCategories2.equals(serviceCategories1));
        System.assert(serviceCategories3.equals(serviceCategories4));
        System.assert(serviceCategories4.equals(serviceCategories3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServiceCategories serviceCategories1 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories2 = new OASServiceCategories();

        System.assertEquals(false, serviceCategories1.equals('foo'));
        System.assertEquals(false, serviceCategories2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServiceCategories serviceCategories1 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories2 = new OASServiceCategories();
        OASServiceCategories serviceCategories3;

        System.assertEquals(false, serviceCategories1.equals(serviceCategories3));
        System.assertEquals(false, serviceCategories2.equals(serviceCategories3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServiceCategories serviceCategories1 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories2 = new OASServiceCategories();

        System.assertEquals(serviceCategories1.hashCode(), serviceCategories1.hashCode());
        System.assertEquals(serviceCategories2.hashCode(), serviceCategories2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServiceCategories serviceCategories1 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories2 = OASServiceCategories.getExample();
        OASServiceCategories serviceCategories3 = new OASServiceCategories();
        OASServiceCategories serviceCategories4 = new OASServiceCategories();

        System.assert(serviceCategories1.equals(serviceCategories2));
        System.assert(serviceCategories3.equals(serviceCategories4));
        System.assertEquals(serviceCategories1.hashCode(), serviceCategories2.hashCode());
        System.assertEquals(serviceCategories3.hashCode(), serviceCategories4.hashCode());
    }
}
