@isTest
private class OASMailServiceTypeTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailServiceType mailServiceType1 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType2 = mailServiceType1;
        OASMailServiceType mailServiceType3 = new OASMailServiceType();
        OASMailServiceType mailServiceType4 = mailServiceType3;

        System.assert(mailServiceType1.equals(mailServiceType2));
        System.assert(mailServiceType2.equals(mailServiceType1));
        System.assert(mailServiceType1.equals(mailServiceType1));
        System.assert(mailServiceType3.equals(mailServiceType4));
        System.assert(mailServiceType4.equals(mailServiceType3));
        System.assert(mailServiceType3.equals(mailServiceType3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailServiceType mailServiceType1 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType2 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType3 = new OASMailServiceType();
        OASMailServiceType mailServiceType4 = new OASMailServiceType();

        System.assert(mailServiceType1.equals(mailServiceType2));
        System.assert(mailServiceType2.equals(mailServiceType1));
        System.assert(mailServiceType3.equals(mailServiceType4));
        System.assert(mailServiceType4.equals(mailServiceType3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailServiceType mailServiceType1 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType2 = new OASMailServiceType();

        System.assertEquals(false, mailServiceType1.equals('foo'));
        System.assertEquals(false, mailServiceType2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailServiceType mailServiceType1 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType2 = new OASMailServiceType();
        OASMailServiceType mailServiceType3;

        System.assertEquals(false, mailServiceType1.equals(mailServiceType3));
        System.assertEquals(false, mailServiceType2.equals(mailServiceType3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailServiceType mailServiceType1 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType2 = new OASMailServiceType();

        System.assertEquals(mailServiceType1.hashCode(), mailServiceType1.hashCode());
        System.assertEquals(mailServiceType2.hashCode(), mailServiceType2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailServiceType mailServiceType1 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType2 = OASMailServiceType.getExample();
        OASMailServiceType mailServiceType3 = new OASMailServiceType();
        OASMailServiceType mailServiceType4 = new OASMailServiceType();

        System.assert(mailServiceType1.equals(mailServiceType2));
        System.assert(mailServiceType3.equals(mailServiceType4));
        System.assertEquals(mailServiceType1.hashCode(), mailServiceType2.hashCode());
        System.assertEquals(mailServiceType3.hashCode(), mailServiceType4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailServiceType mailServiceType = new OASMailServiceType();
        Map<String, String> x-property-mappings = mailServiceType.getx-property-mappings();
        System.assertEquals('servicesId', x-property-mappings.get('services_id'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('servicesCost', x-property-mappings.get('services_cost'));
        System.assertEquals('servicesCategory', x-property-mappings.get('services_category'));
        System.assertEquals('servicesBuyable', x-property-mappings.get('services_buyable'));
        System.assertEquals('servicesType', x-property-mappings.get('services_type'));
        System.assertEquals('servicesField1', x-property-mappings.get('services_field1'));
        System.assertEquals('servicesField2', x-property-mappings.get('services_field2'));
        System.assertEquals('servicesModule', x-property-mappings.get('services_module'));
    }
}
