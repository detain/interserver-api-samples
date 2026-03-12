@isTest
private class OASGetOrderDetail200ResponseServiceTTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner1 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner2 = getOrderDetail200ResponseServiceTypesInner1;
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner3 = new OASGetOrderDetail200ResponseServiceT();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner4 = getOrderDetail200ResponseServiceTypesInner3;

        System.assert(getOrderDetail200ResponseServiceTypesInner1.equals(getOrderDetail200ResponseServiceTypesInner2));
        System.assert(getOrderDetail200ResponseServiceTypesInner2.equals(getOrderDetail200ResponseServiceTypesInner1));
        System.assert(getOrderDetail200ResponseServiceTypesInner1.equals(getOrderDetail200ResponseServiceTypesInner1));
        System.assert(getOrderDetail200ResponseServiceTypesInner3.equals(getOrderDetail200ResponseServiceTypesInner4));
        System.assert(getOrderDetail200ResponseServiceTypesInner4.equals(getOrderDetail200ResponseServiceTypesInner3));
        System.assert(getOrderDetail200ResponseServiceTypesInner3.equals(getOrderDetail200ResponseServiceTypesInner3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner1 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner2 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner3 = new OASGetOrderDetail200ResponseServiceT();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner4 = new OASGetOrderDetail200ResponseServiceT();

        System.assert(getOrderDetail200ResponseServiceTypesInner1.equals(getOrderDetail200ResponseServiceTypesInner2));
        System.assert(getOrderDetail200ResponseServiceTypesInner2.equals(getOrderDetail200ResponseServiceTypesInner1));
        System.assert(getOrderDetail200ResponseServiceTypesInner3.equals(getOrderDetail200ResponseServiceTypesInner4));
        System.assert(getOrderDetail200ResponseServiceTypesInner4.equals(getOrderDetail200ResponseServiceTypesInner3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner1 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner2 = new OASGetOrderDetail200ResponseServiceT();

        System.assertEquals(false, getOrderDetail200ResponseServiceTypesInner1.equals('foo'));
        System.assertEquals(false, getOrderDetail200ResponseServiceTypesInner2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner1 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner2 = new OASGetOrderDetail200ResponseServiceT();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner3;

        System.assertEquals(false, getOrderDetail200ResponseServiceTypesInner1.equals(getOrderDetail200ResponseServiceTypesInner3));
        System.assertEquals(false, getOrderDetail200ResponseServiceTypesInner2.equals(getOrderDetail200ResponseServiceTypesInner3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner1 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner2 = new OASGetOrderDetail200ResponseServiceT();

        System.assertEquals(getOrderDetail200ResponseServiceTypesInner1.hashCode(), getOrderDetail200ResponseServiceTypesInner1.hashCode());
        System.assertEquals(getOrderDetail200ResponseServiceTypesInner2.hashCode(), getOrderDetail200ResponseServiceTypesInner2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner1 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner2 = OASGetOrderDetail200ResponseServiceT.getExample();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner3 = new OASGetOrderDetail200ResponseServiceT();
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner4 = new OASGetOrderDetail200ResponseServiceT();

        System.assert(getOrderDetail200ResponseServiceTypesInner1.equals(getOrderDetail200ResponseServiceTypesInner2));
        System.assert(getOrderDetail200ResponseServiceTypesInner3.equals(getOrderDetail200ResponseServiceTypesInner4));
        System.assertEquals(getOrderDetail200ResponseServiceTypesInner1.hashCode(), getOrderDetail200ResponseServiceTypesInner2.hashCode());
        System.assertEquals(getOrderDetail200ResponseServiceTypesInner3.hashCode(), getOrderDetail200ResponseServiceTypesInner4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetOrderDetail200ResponseServiceT getOrderDetail200ResponseServiceTypesInner = new OASGetOrderDetail200ResponseServiceT();
        Map<String, String> x-property-mappings = getOrderDetail200ResponseServiceTypesInner.getx-property-mappings();
        System.assertEquals('servicesId', x-property-mappings.get('services_id'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('servicesCost', x-property-mappings.get('services_cost'));
        System.assertEquals('servicesField1', x-property-mappings.get('services_field1'));
        System.assertEquals('servicesField2', x-property-mappings.get('services_field2'));
        System.assertEquals('servicesModule', x-property-mappings.get('services_module'));
    }
}
