@isTest
private class OASDomainOrderServices10001Test {
    @isTest
    private static void equalsSameInstance() {
        OASDomainOrderServices10001 domainOrderServices100011 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100012 = domainOrderServices100011;
        OASDomainOrderServices10001 domainOrderServices100013 = new OASDomainOrderServices10001();
        OASDomainOrderServices10001 domainOrderServices100014 = domainOrderServices100013;

        System.assert(domainOrderServices100011.equals(domainOrderServices100012));
        System.assert(domainOrderServices100012.equals(domainOrderServices100011));
        System.assert(domainOrderServices100011.equals(domainOrderServices100011));
        System.assert(domainOrderServices100013.equals(domainOrderServices100014));
        System.assert(domainOrderServices100014.equals(domainOrderServices100013));
        System.assert(domainOrderServices100013.equals(domainOrderServices100013));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainOrderServices10001 domainOrderServices100011 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100012 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100013 = new OASDomainOrderServices10001();
        OASDomainOrderServices10001 domainOrderServices100014 = new OASDomainOrderServices10001();

        System.assert(domainOrderServices100011.equals(domainOrderServices100012));
        System.assert(domainOrderServices100012.equals(domainOrderServices100011));
        System.assert(domainOrderServices100013.equals(domainOrderServices100014));
        System.assert(domainOrderServices100014.equals(domainOrderServices100013));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainOrderServices10001 domainOrderServices100011 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100012 = new OASDomainOrderServices10001();

        System.assertEquals(false, domainOrderServices100011.equals('foo'));
        System.assertEquals(false, domainOrderServices100012.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainOrderServices10001 domainOrderServices100011 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100012 = new OASDomainOrderServices10001();
        OASDomainOrderServices10001 domainOrderServices100013;

        System.assertEquals(false, domainOrderServices100011.equals(domainOrderServices100013));
        System.assertEquals(false, domainOrderServices100012.equals(domainOrderServices100013));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainOrderServices10001 domainOrderServices100011 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100012 = new OASDomainOrderServices10001();

        System.assertEquals(domainOrderServices100011.hashCode(), domainOrderServices100011.hashCode());
        System.assertEquals(domainOrderServices100012.hashCode(), domainOrderServices100012.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainOrderServices10001 domainOrderServices100011 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100012 = OASDomainOrderServices10001.getExample();
        OASDomainOrderServices10001 domainOrderServices100013 = new OASDomainOrderServices10001();
        OASDomainOrderServices10001 domainOrderServices100014 = new OASDomainOrderServices10001();

        System.assert(domainOrderServices100011.equals(domainOrderServices100012));
        System.assert(domainOrderServices100013.equals(domainOrderServices100014));
        System.assertEquals(domainOrderServices100011.hashCode(), domainOrderServices100012.hashCode());
        System.assertEquals(domainOrderServices100013.hashCode(), domainOrderServices100014.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainOrderServices10001 domainOrderServices10001 = new OASDomainOrderServices10001();
        Map<String, String> x-property-mappings = domainOrderServices10001.getx-property-mappings();
        System.assertEquals('servicesId', x-property-mappings.get('services_id'));
        System.assertEquals('servicesName', x-property-mappings.get('services_name'));
        System.assertEquals('servicesCost', x-property-mappings.get('services_cost'));
        System.assertEquals('servicesCurrency', x-property-mappings.get('services_currency'));
        System.assertEquals('servicesCategory', x-property-mappings.get('services_category'));
        System.assertEquals('servicesBuyable', x-property-mappings.get('services_buyable'));
        System.assertEquals('servicesType', x-property-mappings.get('services_type'));
        System.assertEquals('servicesField1', x-property-mappings.get('services_field1'));
        System.assertEquals('servicesField2', x-property-mappings.get('services_field2'));
        System.assertEquals('servicesModule', x-property-mappings.get('services_module'));
        System.assertEquals('servicesHidden', x-property-mappings.get('services_hidden'));
    }
}
