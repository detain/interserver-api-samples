@isTest
private class OASGetOrderDetail200ResponsePackageCTest {
    @isTest
    private static void equalsSameInstance() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts1 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts2 = getOrderDetail200ResponsePackageCosts1;
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts3 = new OASGetOrderDetail200ResponsePackageC();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts4 = getOrderDetail200ResponsePackageCosts3;

        System.assert(getOrderDetail200ResponsePackageCosts1.equals(getOrderDetail200ResponsePackageCosts2));
        System.assert(getOrderDetail200ResponsePackageCosts2.equals(getOrderDetail200ResponsePackageCosts1));
        System.assert(getOrderDetail200ResponsePackageCosts1.equals(getOrderDetail200ResponsePackageCosts1));
        System.assert(getOrderDetail200ResponsePackageCosts3.equals(getOrderDetail200ResponsePackageCosts4));
        System.assert(getOrderDetail200ResponsePackageCosts4.equals(getOrderDetail200ResponsePackageCosts3));
        System.assert(getOrderDetail200ResponsePackageCosts3.equals(getOrderDetail200ResponsePackageCosts3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts1 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts2 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts3 = new OASGetOrderDetail200ResponsePackageC();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts4 = new OASGetOrderDetail200ResponsePackageC();

        System.assert(getOrderDetail200ResponsePackageCosts1.equals(getOrderDetail200ResponsePackageCosts2));
        System.assert(getOrderDetail200ResponsePackageCosts2.equals(getOrderDetail200ResponsePackageCosts1));
        System.assert(getOrderDetail200ResponsePackageCosts3.equals(getOrderDetail200ResponsePackageCosts4));
        System.assert(getOrderDetail200ResponsePackageCosts4.equals(getOrderDetail200ResponsePackageCosts3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts1 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts2 = new OASGetOrderDetail200ResponsePackageC();

        System.assertEquals(false, getOrderDetail200ResponsePackageCosts1.equals('foo'));
        System.assertEquals(false, getOrderDetail200ResponsePackageCosts2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts1 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts2 = new OASGetOrderDetail200ResponsePackageC();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts3;

        System.assertEquals(false, getOrderDetail200ResponsePackageCosts1.equals(getOrderDetail200ResponsePackageCosts3));
        System.assertEquals(false, getOrderDetail200ResponsePackageCosts2.equals(getOrderDetail200ResponsePackageCosts3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts1 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts2 = new OASGetOrderDetail200ResponsePackageC();

        System.assertEquals(getOrderDetail200ResponsePackageCosts1.hashCode(), getOrderDetail200ResponsePackageCosts1.hashCode());
        System.assertEquals(getOrderDetail200ResponsePackageCosts2.hashCode(), getOrderDetail200ResponsePackageCosts2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts1 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts2 = OASGetOrderDetail200ResponsePackageC.getExample();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts3 = new OASGetOrderDetail200ResponsePackageC();
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts4 = new OASGetOrderDetail200ResponsePackageC();

        System.assert(getOrderDetail200ResponsePackageCosts1.equals(getOrderDetail200ResponsePackageCosts2));
        System.assert(getOrderDetail200ResponsePackageCosts3.equals(getOrderDetail200ResponsePackageCosts4));
        System.assertEquals(getOrderDetail200ResponsePackageCosts1.hashCode(), getOrderDetail200ResponsePackageCosts2.hashCode());
        System.assertEquals(getOrderDetail200ResponsePackageCosts3.hashCode(), getOrderDetail200ResponsePackageCosts4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASGetOrderDetail200ResponsePackageC getOrderDetail200ResponsePackageCosts = new OASGetOrderDetail200ResponsePackageC();
        Map<String, String> x-property-mappings = getOrderDetail200ResponsePackageCosts.getx-property-mappings();
        System.assertEquals('packageId', x-property-mappings.get('package_id'));
        System.assertEquals('packageCost', x-property-mappings.get('package_cost'));
        System.assertEquals('r_currency', x-property-mappings.get('currency'));
    }
}
