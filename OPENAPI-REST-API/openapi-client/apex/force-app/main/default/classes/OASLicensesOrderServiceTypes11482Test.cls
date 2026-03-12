@isTest
private class OASLicensesOrderServiceTypes11482Test {
    @isTest
    private static void equalsSameInstance() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114821 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114822 = licensesOrderServiceTypes114821;
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114823 = new OASLicensesOrderServiceTypes11482();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114824 = licensesOrderServiceTypes114823;

        System.assert(licensesOrderServiceTypes114821.equals(licensesOrderServiceTypes114822));
        System.assert(licensesOrderServiceTypes114822.equals(licensesOrderServiceTypes114821));
        System.assert(licensesOrderServiceTypes114821.equals(licensesOrderServiceTypes114821));
        System.assert(licensesOrderServiceTypes114823.equals(licensesOrderServiceTypes114824));
        System.assert(licensesOrderServiceTypes114824.equals(licensesOrderServiceTypes114823));
        System.assert(licensesOrderServiceTypes114823.equals(licensesOrderServiceTypes114823));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114821 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114822 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114823 = new OASLicensesOrderServiceTypes11482();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114824 = new OASLicensesOrderServiceTypes11482();

        System.assert(licensesOrderServiceTypes114821.equals(licensesOrderServiceTypes114822));
        System.assert(licensesOrderServiceTypes114822.equals(licensesOrderServiceTypes114821));
        System.assert(licensesOrderServiceTypes114823.equals(licensesOrderServiceTypes114824));
        System.assert(licensesOrderServiceTypes114824.equals(licensesOrderServiceTypes114823));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114821 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114822 = new OASLicensesOrderServiceTypes11482();

        System.assertEquals(false, licensesOrderServiceTypes114821.equals('foo'));
        System.assertEquals(false, licensesOrderServiceTypes114822.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114821 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114822 = new OASLicensesOrderServiceTypes11482();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114823;

        System.assertEquals(false, licensesOrderServiceTypes114821.equals(licensesOrderServiceTypes114823));
        System.assertEquals(false, licensesOrderServiceTypes114822.equals(licensesOrderServiceTypes114823));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114821 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114822 = new OASLicensesOrderServiceTypes11482();

        System.assertEquals(licensesOrderServiceTypes114821.hashCode(), licensesOrderServiceTypes114821.hashCode());
        System.assertEquals(licensesOrderServiceTypes114822.hashCode(), licensesOrderServiceTypes114822.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114821 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114822 = OASLicensesOrderServiceTypes11482.getExample();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114823 = new OASLicensesOrderServiceTypes11482();
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes114824 = new OASLicensesOrderServiceTypes11482();

        System.assert(licensesOrderServiceTypes114821.equals(licensesOrderServiceTypes114822));
        System.assert(licensesOrderServiceTypes114823.equals(licensesOrderServiceTypes114824));
        System.assertEquals(licensesOrderServiceTypes114821.hashCode(), licensesOrderServiceTypes114822.hashCode());
        System.assertEquals(licensesOrderServiceTypes114823.hashCode(), licensesOrderServiceTypes114824.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASLicensesOrderServiceTypes11482 licensesOrderServiceTypes11482 = new OASLicensesOrderServiceTypes11482();
        Map<String, String> x-property-mappings = licensesOrderServiceTypes11482.getx-property-mappings();
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
