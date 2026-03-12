@isTest
private class OASServicesInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASServicesInfo servicesInfo1 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo2 = servicesInfo1;
        OASServicesInfo servicesInfo3 = new OASServicesInfo();
        OASServicesInfo servicesInfo4 = servicesInfo3;

        System.assert(servicesInfo1.equals(servicesInfo2));
        System.assert(servicesInfo2.equals(servicesInfo1));
        System.assert(servicesInfo1.equals(servicesInfo1));
        System.assert(servicesInfo3.equals(servicesInfo4));
        System.assert(servicesInfo4.equals(servicesInfo3));
        System.assert(servicesInfo3.equals(servicesInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServicesInfo servicesInfo1 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo2 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo3 = new OASServicesInfo();
        OASServicesInfo servicesInfo4 = new OASServicesInfo();

        System.assert(servicesInfo1.equals(servicesInfo2));
        System.assert(servicesInfo2.equals(servicesInfo1));
        System.assert(servicesInfo3.equals(servicesInfo4));
        System.assert(servicesInfo4.equals(servicesInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServicesInfo servicesInfo1 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo2 = new OASServicesInfo();

        System.assertEquals(false, servicesInfo1.equals('foo'));
        System.assertEquals(false, servicesInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServicesInfo servicesInfo1 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo2 = new OASServicesInfo();
        OASServicesInfo servicesInfo3;

        System.assertEquals(false, servicesInfo1.equals(servicesInfo3));
        System.assertEquals(false, servicesInfo2.equals(servicesInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServicesInfo servicesInfo1 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo2 = new OASServicesInfo();

        System.assertEquals(servicesInfo1.hashCode(), servicesInfo1.hashCode());
        System.assertEquals(servicesInfo2.hashCode(), servicesInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServicesInfo servicesInfo1 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo2 = OASServicesInfo.getExample();
        OASServicesInfo servicesInfo3 = new OASServicesInfo();
        OASServicesInfo servicesInfo4 = new OASServicesInfo();

        System.assert(servicesInfo1.equals(servicesInfo2));
        System.assert(servicesInfo3.equals(servicesInfo4));
        System.assertEquals(servicesInfo1.hashCode(), servicesInfo2.hashCode());
        System.assertEquals(servicesInfo3.hashCode(), servicesInfo4.hashCode());
    }
}
