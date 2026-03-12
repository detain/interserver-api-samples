@isTest
private class OASServiceTypeTest {
    @isTest
    private static void equalsSameInstance() {
        OASServiceType serviceType1 = OASServiceType.getExample();
        OASServiceType serviceType2 = serviceType1;
        OASServiceType serviceType3 = new OASServiceType();
        OASServiceType serviceType4 = serviceType3;

        System.assert(serviceType1.equals(serviceType2));
        System.assert(serviceType2.equals(serviceType1));
        System.assert(serviceType1.equals(serviceType1));
        System.assert(serviceType3.equals(serviceType4));
        System.assert(serviceType4.equals(serviceType3));
        System.assert(serviceType3.equals(serviceType3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServiceType serviceType1 = OASServiceType.getExample();
        OASServiceType serviceType2 = OASServiceType.getExample();
        OASServiceType serviceType3 = new OASServiceType();
        OASServiceType serviceType4 = new OASServiceType();

        System.assert(serviceType1.equals(serviceType2));
        System.assert(serviceType2.equals(serviceType1));
        System.assert(serviceType3.equals(serviceType4));
        System.assert(serviceType4.equals(serviceType3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServiceType serviceType1 = OASServiceType.getExample();
        OASServiceType serviceType2 = new OASServiceType();

        System.assertEquals(false, serviceType1.equals('foo'));
        System.assertEquals(false, serviceType2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServiceType serviceType1 = OASServiceType.getExample();
        OASServiceType serviceType2 = new OASServiceType();
        OASServiceType serviceType3;

        System.assertEquals(false, serviceType1.equals(serviceType3));
        System.assertEquals(false, serviceType2.equals(serviceType3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServiceType serviceType1 = OASServiceType.getExample();
        OASServiceType serviceType2 = new OASServiceType();

        System.assertEquals(serviceType1.hashCode(), serviceType1.hashCode());
        System.assertEquals(serviceType2.hashCode(), serviceType2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServiceType serviceType1 = OASServiceType.getExample();
        OASServiceType serviceType2 = OASServiceType.getExample();
        OASServiceType serviceType3 = new OASServiceType();
        OASServiceType serviceType4 = new OASServiceType();

        System.assert(serviceType1.equals(serviceType2));
        System.assert(serviceType3.equals(serviceType4));
        System.assertEquals(serviceType1.hashCode(), serviceType2.hashCode());
        System.assertEquals(serviceType3.hashCode(), serviceType4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASServiceType serviceType = new OASServiceType();
        Map<String, String> x-property-mappings = serviceType.getx-property-mappings();
        System.assertEquals('stId', x-property-mappings.get('st_id'));
        System.assertEquals('stName', x-property-mappings.get('st_name'));
        System.assertEquals('stCategory', x-property-mappings.get('st_category'));
        System.assertEquals('stModule', x-property-mappings.get('st_module'));
    }
}
