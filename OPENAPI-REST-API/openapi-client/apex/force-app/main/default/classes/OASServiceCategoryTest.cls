@isTest
private class OASServiceCategoryTest {
    @isTest
    private static void equalsSameInstance() {
        OASServiceCategory serviceCategory1 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory2 = serviceCategory1;
        OASServiceCategory serviceCategory3 = new OASServiceCategory();
        OASServiceCategory serviceCategory4 = serviceCategory3;

        System.assert(serviceCategory1.equals(serviceCategory2));
        System.assert(serviceCategory2.equals(serviceCategory1));
        System.assert(serviceCategory1.equals(serviceCategory1));
        System.assert(serviceCategory3.equals(serviceCategory4));
        System.assert(serviceCategory4.equals(serviceCategory3));
        System.assert(serviceCategory3.equals(serviceCategory3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServiceCategory serviceCategory1 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory2 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory3 = new OASServiceCategory();
        OASServiceCategory serviceCategory4 = new OASServiceCategory();

        System.assert(serviceCategory1.equals(serviceCategory2));
        System.assert(serviceCategory2.equals(serviceCategory1));
        System.assert(serviceCategory3.equals(serviceCategory4));
        System.assert(serviceCategory4.equals(serviceCategory3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServiceCategory serviceCategory1 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory2 = new OASServiceCategory();

        System.assertEquals(false, serviceCategory1.equals('foo'));
        System.assertEquals(false, serviceCategory2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServiceCategory serviceCategory1 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory2 = new OASServiceCategory();
        OASServiceCategory serviceCategory3;

        System.assertEquals(false, serviceCategory1.equals(serviceCategory3));
        System.assertEquals(false, serviceCategory2.equals(serviceCategory3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServiceCategory serviceCategory1 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory2 = new OASServiceCategory();

        System.assertEquals(serviceCategory1.hashCode(), serviceCategory1.hashCode());
        System.assertEquals(serviceCategory2.hashCode(), serviceCategory2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServiceCategory serviceCategory1 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory2 = OASServiceCategory.getExample();
        OASServiceCategory serviceCategory3 = new OASServiceCategory();
        OASServiceCategory serviceCategory4 = new OASServiceCategory();

        System.assert(serviceCategory1.equals(serviceCategory2));
        System.assert(serviceCategory3.equals(serviceCategory4));
        System.assertEquals(serviceCategory1.hashCode(), serviceCategory2.hashCode());
        System.assertEquals(serviceCategory3.hashCode(), serviceCategory4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServiceCategory serviceCategory = new OASServiceCategory();
        Map<String, String> x-property-mappings = serviceCategory.getx-property-mappings();
        System.assertEquals('categoryId', x-property-mappings.get('category_id'));
        System.assertEquals('categoryName', x-property-mappings.get('category_name'));
        System.assertEquals('categoryTag', x-property-mappings.get('category_tag'));
        System.assertEquals('categoryModule', x-property-mappings.get('category_module'));
    }
}
